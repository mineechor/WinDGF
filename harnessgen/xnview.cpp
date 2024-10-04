
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 
#include <windows.h>
#include <tchar.h>
#include <iostream>


wchar_t* charToWChar(const char* text);
void fuzz_me(HINSTANCE hinstLib, wchar_t* pathfile);
typedef int (__cdecl *JPM_Document_Start)(int, int, int, int, int, int, int);
typedef int (__cdecl *JPM_Document_Set_License)(int, int, int);
typedef int (__cdecl *JPM_Document_Get_Property)(int, int, int);
typedef int (__cdecl *JPM_Document_Set_Page)(int, int);
typedef int (__cdecl *JPM_Document_Get_Page_Property)(int, int, int);
typedef int (__cdecl *JPM_Document_Decompress_Page)(int, int, int, char, int, int, int, int, int);
typedef int (__cdecl *JPM_Document_End)(int);


void fuzz_me(HINSTANCE hinstLib,wchar_t* filename){

    JPM_Document_Start JPM_Document_Startnew;
    JPM_Document_Set_License JPM_Document_Set_Licensenew;
    JPM_Document_Get_Property JPM_Document_Get_Propertynew;
    JPM_Document_Set_Page JPM_Document_Set_Pagenew;
    JPM_Document_Get_Page_Property JPM_Document_Get_Page_Propertynew;
    JPM_Document_Decompress_Page JPM_Document_Decompress_Pagenew;
    JPM_Document_End JPM_Document_Endnew;

    JPM_Document_Startnew = (JPM_Document_Start)GetProcAddress(hinstLib,"JPM_Document_Start");
    JPM_Document_Set_Licensenew = (JPM_Document_Set_License)GetProcAddress(hinstLib,"JPM_Document_Set_License");
    JPM_Document_Get_Propertynew = (JPM_Document_Get_Property)GetProcAddress(hinstLib,"JPM_Document_Get_Property");
    JPM_Document_Set_Pagenew = (JPM_Document_Set_Page)GetProcAddress(hinstLib,"JPM_Document_Set_Page");
    JPM_Document_Get_Page_Propertynew = (JPM_Document_Get_Page_Property)GetProcAddress(hinstLib,"JPM_Document_Get_Page_Property");
    JPM_Document_Decompress_Pagenew = (JPM_Document_Decompress_Page)GetProcAddress(hinstLib,"JPM_Document_Decompress_Page");
    JPM_Document_Endnew = (JPM_Document_End)GetProcAddress(hinstLib,"JPM_Document_End");

    
    /* Harness function #0 */
    int* c0_a0 = (int*) calloc (4096, sizeof(int));  int c0_a2 = 0x0;    int* c0_a6 = (int*) calloc (4096, sizeof(int));    
    int c0_ret = JPM_Document_Startnew(c0_a0, 0x4ffa50 /* Possible code pointer offset: 0x2cfa50 */, c0_a2, 0x4ff3e0 /* Possible code pointer offset: 0x2cf3e0 */, c0_a2, 0x49b140 /* Possible code pointer offset: 0x26b140 */, c0_a6);
     
    
    /* Harness function #1 */
    int* c1_a0 = (int*) calloc (4096, sizeof(int));      
    int c1_ret = JPM_Document_Set_Licensenew(c1_a0, c0_a2, c0_a2);
     
    
    /* Harness function #2 */
    int* c2_a0 = (int*) calloc (4096, sizeof(int)); int c2_a1 = 0x46; int c2_a2 = 0x10fe118;    
    int c2_ret = JPM_Document_Get_Propertynew(c2_a0, c2_a1, c2_a2);
     
    
    /* Harness function #3 */
    int* c3_a0 = (int*) calloc (4096, sizeof(int));     
    int c3_ret = JPM_Document_Set_Pagenew(c3_a0, c0_a2);
     
    
    /* Harness function #4 */
    int* c4_a0 = (int*) calloc (4096, sizeof(int)); int c4_a1 = 0xa; int c4_a2 = 0x10fe11c;    
    int c4_ret = JPM_Document_Get_Page_Propertynew(c4_a0, c4_a1, c4_a2);
     
    
    /* Harness function #5 */
    int* c5_a0 = (int*) calloc (4096, sizeof(int)); int c5_a1 = 0xb; int c5_a2 = 0x10fe120;    
    int c5_ret = JPM_Document_Get_Page_Propertynew(c5_a0, c5_a1, c5_a2);
     
    
    /* Harness function #6 */
    int* c6_a0 = (int*) calloc (4096, sizeof(int)); int c6_a1 = 0xc; int c6_a2 = 0x10fe100;    
    int c6_ret = JPM_Document_Get_Page_Propertynew(c6_a0, c6_a1, c6_a2);
     
    
    /* Harness function #7 */
    int* c7_a0 = (int*) calloc (4096, sizeof(int)); int c7_a1 = 0xd; int c7_a2 = 0x10fe0dc;    
    int c7_ret = JPM_Document_Get_Page_Propertynew(c7_a0, c7_a1, c7_a2);
     
    
    /* Harness function #8 */
    int* c8_a0 = (int*) calloc (4096, sizeof(int)); int c8_a1 = 0x1;   int c8_a4 = 0x20;    int c8_a8 = 0x10fe0f0;    
    int c8_ret = JPM_Document_Decompress_Pagenew(c8_a0, c8_a1, c8_a1, c0_a2, c8_a4, c0_a2, c8_a4, 0x49b0f0 /* Possible code pointer offset: 0x26b0f0 */, c8_a8);
     
    
    /* Harness function #9 */
    int c9_a0 = 0x10fe124;    
    int c9_ret = JPM_Document_Endnew(c9_a0);
     

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
    hinstLib = LoadLibraryA("%s");
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
