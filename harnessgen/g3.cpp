
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 
#include <windows.h>
#include <tchar.h>
#include <iostream>


wchar_t* charToWChar(const char* text);
void fuzz_me(HINSTANCE hinstLib, wchar_t* pathfile);
typedef LPCWSTR (__cdecl *ReadG3_W)(LPCWSTR, wchar_t *);
wchar_t arg2[2048] = { 0 };

void fuzz_me(HINSTANCE hinstLib,wchar_t* filename){

    ReadG3_W ReadG3_Wnew;

    ReadG3_Wnew = (ReadG3_W)GetProcAddress(hinstLib,"ReadG3_W");

    
    /* Harness function #0 */
     wchar_t c0_a1[2048] = { 0 };    
    LPCWSTR c0_ret = ReadG3_Wnew(filename, c0_a1);
     

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
    hinstLib = LoadLibraryA("D:\\appstore\\iview457\\Plugins\\FORMATS.DLL");
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
