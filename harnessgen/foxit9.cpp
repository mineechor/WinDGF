
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 
#include <windows.h>
#include <tchar.h>
#include <iostream>
using namespace std;

wchar_t* charToWChar(const char* text);
void fuzz_me(HINSTANCE hinstLib, wchar_t* pathfile);
typedef int (__stdcall *CreateFXPDFConvertor)();
typedef int (__thiscall *sub_10012FA0)(void *this, int a2, wchar_t * a3);
typedef int (__thiscall *sub_10013F10)(void *this,int a2);
typedef int (__thiscall *sub_10014750)(void *this,LPWSTR printer_name);
typedef int (__thiscall *sub_10015C10)(void *this,LPCWSTR lpfilename, char a3, int a4, int a5, int a6, int a7, int a8, int a9);
typedef int (__stdcall *DestorFXPDFConvertor)(int a1);

typedef struct ConverterFuncTable_t
{
    sub_10015C10 sub_10015C10new;
    sub_10013F10 sub_10013F10new;
    sub_10014750 sub_10014750new;
    sub_10012FA0 sub_10012FA0new;
} ConverterFuncTable;

typedef struct ConverterClass_t
{
    ConverterFuncTable_t *vfp_table;
}ConverterClass;

void fuzz_me(HINSTANCE hinstLib,wchar_t* filename){

    CreateFXPDFConvertor CreateFXPDFConvertornew;
    DestorFXPDFConvertor DestorFXPDFConvertornew;

    CreateFXPDFConvertornew = (CreateFXPDFConvertor)GetProcAddress(hinstLib,"CreateFXPDFConvertor");
    sub_10012FA0new = (sub_10012FA0)(hinstLib+0x10012FA0);
    sub_10013F10new = (sub_10013F10)(hinstLib+0x10013F10);
    sub_10014750new = (sub_10014750)(hinstLib+0x10014750);
    sub_10015C10new = (sub_10015C10)(hinstLib+0x10015C10);
    DestorFXPDFConvertornew = (DestorFXPDFConvertor)GetProcAddress(hinstLib,"DestorFXPDFConvertor");

    
    /* Harness function #0 */    
    int c0_ret = CreateFXPDFConvertornew();
     
    
    /* Harness function #1 */
    int c1_a0 = 0x2; int c1_a1 = 0x182202cc;    
    int c1_ret = sub_10012FA0new(c1_a0, c1_a1);
     
    
    /* Harness function #2 */    
    int c2_ret = sub_10013F10new(c1_a0);
     
    
    /* Harness function #3 */
    LPWSTR c3_a0 = 0x57c508;    
    int c3_ret = sub_10014750new(c3_a0);
     
    
    /* Harness function #4 */
    char c4_a1 = 0x18217b38;  int c4_a3 = c2_ret; int c4_a4 = 0x11acfd1c;       
    int c4_ret = sub_10015C10new(filename, c4_a1, c4_a1, c4_a3, c4_a4, c4_a3, c4_a3, c4_a3);
     
    
    /* Harness function #5 */    
    int c5_ret = DestorFXPDFConvertornew(filename);
     

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
    hinstLib = LoadLibrary(TEXT("D:\\appstore\\FoxitReader91\\plugins\\Creator\\x86\\ConvertToPDF_x86.dll"));
    if (hinstLib == NULL){
        printf("failed to load library, gle = %d\n", GetLastError());
        exit(1);
    }
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
