#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 
#include <windows.h>
#include <tchar.h>
#include <iostream>

wchar_t* charToWChar(const char* text);
void fuzz_me(HINSTANCE hinstLib, wchar_t* pathfile);
typedef int (__stdcall *CreateFXPDFConvertor)();
typedef void (__stdcall *sub_10030AF0)(int a2, wchar_t *a3);
typedef DWORD (__stdcall *GetFileType_)(wchar_t* filename);
typedef int (__stdcall *sub_10030160)(int a2);
typedef int (__stdcall *sub_10030C90)(wchar_t * printer_name);
typedef void (__stdcall *DestorFXPDFConvertor)(int a1);

struct Vtable
{
    DWORD f0;
    sub_10030160 sub_10030160new;
    sub_10030C90 sub_10030C90new;
    sub_10030AF0 sub_10030AF0new;
    DWORD f4;
    DWORD f5;
    DWORD f6;
    DWORD f7;
    DWORD f8;
    DWORD f9;
}; 
Vtable* vtb;

CreateFXPDFConvertor CreateFXPDFConvertornew;
GetFileType_ GetFileType_new;
DestorFXPDFConvertor DestorFXPDFConvertornew;
void fuzz_me(HINSTANCE hinstLib,wchar_t* filename){

    // CreateFXPDFConvertor CreateFXPDFConvertornew;
    // sub_10030AF0 sub_10030AF0new;
    // GetFileType_ GetFileType_new;
    // sub_10030160 sub_10030160new;
    // sub_10030C90 sub_10030C90new;
    // DestorFXPDFConvertor DestorFXPDFConvertornew;

    // CreateFXPDFConvertornew = (CreateFXPDFConvertor)GetProcAddress(hinstLib,"CreateFXPDFConvertor");
    // sub_10030AF0new = (sub_10030AF0)(hinstLib+0x10030AF0);
    // GetFileType_new = (GetFileType_)GetProcAddress(hinstLib,"GetFileType_");
    // sub_10030160new = (sub_10030160)(hinstLib+0x10030160);
    // sub_10030C90new = (sub_10030C90)(hinstLib+0x10030C90);
    // DestorFXPDFConvertornew = (DestorFXPDFConvertor)GetProcAddress(hinstLib,"DestorFXPDFConvertor");

    
    /* Harness function #0 */    
    int c0_ret = CreateFXPDFConvertornew();
     
    
    /* Harness function #1 */
    int c1_a0 = 0x2; wchar_t* c1_a1 = L"en-US";   
    vtb->sub_10030AF0new(c1_a0, c1_a1);
     
    
    /* Harness function #2 */    
    DWORD c2_ret = GetFileType_new(filename);
     
    
    /* Harness function #3 */    
    int c3_ret = vtb->sub_10030160new(c1_a0);
     
    
    /* Harness function #4 */
    wchar_t* c4_a0 = L"Foxit Reader PDF Printer";    
    int c4_ret = vtb->sub_10030C90new(c4_a0);
     
    
    /* Harness function #5 */
    int c5_a0 = c0_ret;    
    DestorFXPDFConvertornew(c5_a0);
    printf("end!\n");

}

int main(int argc, char ** argv)
{
    if (argc < 2) {
        printf("Usage %s: <input file>\n", argv[0]);
        printf("  e.g., harness.exe input\n");
        exit(1);
    }
    HINSTANCE hinstLib;
    BOOL fFreeResult = FALSE;
    hinstLib = LoadLibrary(TEXT("D:\\appstore\\Foxit\\plugins\\Creator\\x86\\ConvertToPDF_x86.dll"));
    if (hinstLib == NULL){
        printf("failed to load library, gle = %d\n", GetLastError());
        exit(1);
    }
    CreateFXPDFConvertornew = (CreateFXPDFConvertor)GetProcAddress(hinstLib,"CreateFXPDFConvertor");
    char * mod_base = (char*)hinstLib;
    vtb = (Vtable*)(mod_base+0x45CF30);
    // sub_10030AF0new = (sub_10030AF0)(hinstLib+0x10030AF0);
    GetFileType_new = (GetFileType_)GetProcAddress(hinstLib,"GetFileType_");
    // sub_10030160new = (sub_10030160)(hinstLib+0x10030160);
    // sub_10030C90new = (sub_10030C90)(hinstLib+0x10030C90);
    DestorFXPDFConvertornew = (DestorFXPDFConvertor)GetProcAddress(hinstLib,"DestorFXPDFConvertor");
    wchar_t * filename = charToWChar(argv[1]);   
    fuzz_me(hinstLib,filename); 
    fFreeResult = FreeLibrary(hinstLib);   
    return 0;
}

wchar_t* charToWChar(const char* text)
{
	size_t size = strlen(text) + 1;
	wchar_t* wa = new wchar_t[size];
	mbstowcs(wa, text, size);
	return wa;
}
