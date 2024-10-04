/*
foxit-fuzz.cpp - simple console wrapper for ConvertToPDF_x86.dll
@richinseattle / rjohnson@moflow.org

NOTES:

Must install the foxit pdf printer globally
Harness targets foxit 9.0 API by default
Can target 7.3.4 if FOXIT_734 is defined and ConvertToPDF_x86.734.dll is in path

afl-fuzz.exe -i %INPUT_DIR% -o foxit_out -D %DynamoRIO_ROOT%\bin32 -t 20000 -- -coverage_module ConvertToPDF.dll -target_module foxit-fuzz.exe -target_method convert_to_pdf -nargs 2 -fuzz_iterations 5000  -- %CD%\foxit-fuzz.exe @@ NUL
*/

#include <Windows.h>
#include <string.h>
#include <iostream>
using namespace std;

typedef void * (__stdcall *CreateFXPDFConvertor_t)();
typedef int(__thiscall *InitLocale_t)(void *_this, int, wchar_t * lc_str);
typedef int(__thiscall *InitPrinter_t)(void* _this, wchar_t *printer_name);
typedef int(__thiscall *InitPdfConverter_t)(void* _this, int mode);
#ifdef FOXIT_734
typedef int(__thiscall *ConvertToPdf_t)(void* _this, wchar_t *convert_buf, int p2, int p3);
#else
typedef int(__thiscall *ConvertToPdf_t)(void* _this, wchar_t *convert_buf, int p2, int p3, int p4, int p5, int p6, int p7, int p8);
#endif

typedef struct ConverterFuncTable_t
{
    ConvertToPdf_t     ConvertToPdf;
    InitPdfConverter_t InitPdfConverter;
    InitPrinter_t      InitPrinter;
    //InitLocale_t       InitLocale;

} ConverterFuncTable;

typedef struct ConverterClass_t
{
    ConverterFuncTable_t *vfp_table;
} ConverterClass;

#ifdef FOXIT_734
char *target_library = "ConvertToPDF_x86.734.dll";
#else
char *target_library = (char*)"D:\\appstore\\FoxitReader91\\plugins\\Creator\\x86\\ConvertToPDF_x86.dll";
#endif
char *target_function = (char*)"CreateFXPDFConvertor";

wchar_t * printer_name =(wchar_t*) L"Foxit Reader PDF Printer";

ConverterClass *pdfconverter = NULL;


int init_target_library()
{
    int retVal = 0;

    CreateFXPDFConvertor_t CreateFXPDFConvertor = (CreateFXPDFConvertor_t)GetProcAddress(LoadLibraryA(target_library), target_function);

    // create an instance of CreateFXPDFConvertor
    pdfconverter = (ConverterClass *)CreateFXPDFConvertor();
    ConverterFuncTable *vfp_table = pdfconverter->vfp_table;

    cout << "Function table:   " << endl;
    cout << "CreateFXPDFConvertor: " << hex << CreateFXPDFConvertor << endl;
    cout << "InitPdfConverter:     " << hex << vfp_table->InitPdfConverter << "  CreateFXPDFConvertor+0x" << hex << (unsigned long)vfp_table->InitPdfConverter - (unsigned long)CreateFXPDFConvertor << endl;
    cout << "InitPrinter:          " << hex << vfp_table->InitPrinter << "  CreateFXPDFConvertor+0x" << hex << (unsigned long)vfp_table->InitPrinter - (unsigned long)CreateFXPDFConvertor << endl;
    cout << "ConvertToPdf:         " << hex << vfp_table->ConvertToPdf << "  CreateFXPDFConvertor+0x" << hex << (unsigned long)vfp_table->ConvertToPdf - (unsigned long)CreateFXPDFConvertor << endl << endl;

    // init converter 
    retVal = vfp_table->InitPdfConverter(pdfconverter, 2);
    if (retVal)
        cout << "Error: InitPdfConverter(): " << retVal << endl;

    // init printer device  
    retVal = vfp_table->InitPrinter(pdfconverter, printer_name);
    if (retVal)
        cout << "Error: InitPrinter(): " << retVal << endl;

    return retVal;
}

extern "C" __declspec(dllexport) int wmain(int argc, wchar_t *argv[]);
extern "C" __declspec(dllexport) int convert_to_pdf(ConvertToPdf_t convert, wchar_t * converter_buf);

int convert_to_pdf(ConvertToPdf_t convert, wchar_t * converter_buf)
{
#ifdef FOXIT_734
    return convert(pdfconverter, converter_buf, 0, 0);
#else    
    return convert(pdfconverter, converter_buf, 0, 0, 0, 0, 0, 0, 0);
#endif
}


int wmain(int argc, wchar_t *argv[])
{
    int retVal = 0;

    int converter_buf_count = 0;
    int converter_buf_size = 0;
    wchar_t *converter_buf = NULL;

    wchar_t *input_path = NULL;
    wchar_t *output_path = (wchar_t*)L"nul";

#ifdef FOXIT_734
    cout << "foxit-fuzz (target v7.3.4) - rjohnson@moflow.org" << endl << endl;
#else    
    cout << "foxit-fuzz (target v9.0) - rjohnson@moflow.org" << endl << endl;
#endif

    if (argc < 2)
    {
        wcout << "usage: " << argv[0] << " <input> [output]" << endl;
        return -1;
    }

    if (GetFileAttributesW(argv[1]) == -1)
    {
        cout << "error: input file path" << endl;
        return -1;
    }
    input_path = argv[1];

    if (argc == 3)
        output_path = argv[2];

    // setup buffer for converting PDF
    converter_buf_count = 0x1000;
    converter_buf_size = converter_buf_count * sizeof(wchar_t);
    converter_buf = (wchar_t *)calloc(converter_buf_count, sizeof(wchar_t));

    wcsncpy_s(converter_buf, converter_buf_count, input_path, wcslen(input_path));
    wcsncpy_s(converter_buf + (0x208 / sizeof(wchar_t)), converter_buf_count - (0x208 / sizeof(wchar_t)), output_path, wcslen(output_path));

    // create pdfconverter class and initialize library 
    if (init_target_library())
    {
        cout << "Error intializing target library" << endl;
        return -1;
    }

    // execute wrapper for fuzzing
    retVal = convert_to_pdf(pdfconverter->vfp_table->ConvertToPdf, converter_buf);
    free(converter_buf);

    if (retVal)
    {
        cout << "Error: ConvertToPdf(): " << retVal << endl;
        return -1;
    }

    return 0;
}