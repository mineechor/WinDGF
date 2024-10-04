#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 
#include <windows.h>
#include <tchar.h>
#include <iostream>
wchar_t* charToWChar(const char* text);
void fuzz_me(HINSTANCE hinstLib, wchar_t* pathfile);
typedef DWORD(__stdcall *FreeImage_GetFileTypeU)(wchar_t *, DWORD);
typedef DWORD(__stdcall *FreeImage_LoadU)(DWORD, wchar_t *, DWORD);
typedef DWORD(__stdcall *FreeImage_GetWidth)(DWORD);
typedef DWORD(__stdcall *FreeImage_GetHeight)(DWORD);
typedef DWORD(__stdcall *FreeImage_GetImageType)(DWORD);
typedef DWORD(__stdcall *FreeImage_GetBPP)(DWORD);
typedef DWORD(__stdcall *FreeImage_Copy)(DWORD, DWORD, DWORD, DWORD, DWORD);
typedef DWORD(__stdcall *FreeImage_Rescale)(DWORD, DWORD, DWORD, DWORD);
typedef DWORD(__stdcall *FreeImage_Unload)(DWORD);
typedef DWORD(__stdcall *FreeImage_HasBackgroundColor)(DWORD);
typedef DWORD(__stdcall *FreeImage_IsTransparent)(DWORD);


void fuzz_me(HINSTANCE hinstLib, wchar_t* filename)
{
    FreeImage_GetFileTypeU FreeImage_GetFileTypeUnew;
    FreeImage_LoadU FreeImage_LoadUnew;
    FreeImage_GetWidth FreeImage_GetWidthnew;
    FreeImage_GetHeight FreeImage_GetHeightnew;
    FreeImage_GetImageType FreeImage_GetImageTypenew;
    FreeImage_GetBPP FreeImage_GetBPPnew;
    FreeImage_Copy FreeImage_Copynew;
    FreeImage_Rescale FreeImage_Rescalenew;
    FreeImage_Unload FreeImage_Unloadnew;
    FreeImage_HasBackgroundColor FreeImage_HasBackgroundColornew;
    FreeImage_IsTransparent FreeImage_IsTransparentnew;
    FreeImage_GetFileTypeUnew = (FreeImage_GetFileTypeU)GetProcAddress(hinstLib, (LPCSTR)126);
    FreeImage_LoadUnew = (FreeImage_LoadU)GetProcAddress(hinstLib, (LPCSTR)181);
    FreeImage_GetWidthnew = (FreeImage_GetWidth)GetProcAddress(hinstLib, (LPCSTR)159);
    FreeImage_GetHeightnew = (FreeImage_GetHeight)GetProcAddress(hinstLib, (LPCSTR)129);
    FreeImage_GetImageTypenew = (FreeImage_GetImageType)GetProcAddress(hinstLib, (LPCSTR)132);
    FreeImage_GetBPPnew = (FreeImage_GetBPP)GetProcAddress(hinstLib, (LPCSTR)102);
    FreeImage_Copynew = (FreeImage_Copy)GetProcAddress(hinstLib, (LPCSTR)79);
    FreeImage_Rescalenew = (FreeImage_Rescale)GetProcAddress(hinstLib, (LPCSTR)197);
    FreeImage_Unloadnew = (FreeImage_Unload)GetProcAddress(hinstLib, (LPCSTR)242);
    FreeImage_HasBackgroundColornew = (FreeImage_HasBackgroundColor)GetProcAddress(hinstLib, (LPCSTR)160);
    FreeImage_IsTransparentnew = (FreeImage_IsTransparent)GetProcAddress(hinstLib, (LPCSTR)168);


    
    /* Harness function #0 */    
    DWORD c0_ret = FreeImage_GetFileTypeUnew(filename, 0x0);
    
    
    /* Harness function #4 */    
    DWORD c4_ret = FreeImage_LoadUnew(0x2, filename, 0x0);
    
    /* Harness function #5 */
    DWORD c5_a0 = c4_ret;    
    DWORD c5_ret = FreeImage_GetImageTypenew(c5_a0);
    
    /* Harness function #6 */    

    DWORD c6_ret = FreeImage_GetBPPnew(c5_a0);
    
    /* Harness function #7 */    
    
    DWORD c7_ret = FreeImage_GetWidthnew(c5_a0);
    
    /* Harness function #8 */    
    
    DWORD c8_ret = FreeImage_GetHeightnew(c5_a0);
    
    /* Harness function #9 */    
    DWORD c9_ret = FreeImage_Copynew(c5_a0, 0x125, 0x0, 0x6da, c8_ret);
    
    /* Harness function #10 */
    DWORD c10_a0 = c9_ret;       
    DWORD c10_ret = FreeImage_Rescalenew(c10_a0, 0x32, 0x32, 0x4);
    
    /* Harness function #11 */    
    DWORD c11_ret = FreeImage_Unloadnew(c10_a0);
    
    /* Harness function #12 */
    DWORD c12_a0 = c10_ret;    
    DWORD c12_ret = FreeImage_GetImageTypenew(c12_a0);
    
    /* Harness function #13 */    
    DWORD c13_ret = FreeImage_HasBackgroundColornew(c12_a0);
    
    /* Harness function #14 */    
    DWORD c14_ret = FreeImage_IsTransparentnew(c12_a0);
     
    
    /* Harness function #17 */    
    
    DWORD c17_ret = FreeImage_LoadUnew(0x2, filename, 0x0);
    
    
    /* Harness function #18 */
    DWORD c18_a0 = c17_ret;    
    
    DWORD c18_ret = FreeImage_GetImageTypenew(c18_a0);
    
    /* Harness function #19 */    
   
    DWORD c19_ret = FreeImage_GetBPPnew(c18_a0);
     
    
    /* Harness function #20 */    
    
    DWORD c20_ret = FreeImage_GetWidthnew(c18_a0);
    
    /* Harness function #21 */    
    
    DWORD c21_ret = FreeImage_GetHeightnew(c18_a0);
    
    /* Harness function #22 */    
    DWORD c22_ret = FreeImage_Copynew(c18_a0, 0x3d, 0x0, 0x221, 0x1e4); 
    
    /* Harness function #23 */
    DWORD c23_a0 = c22_ret;       
    DWORD c23_ret = FreeImage_Rescalenew(c23_a0, 0x32, 0x32, 0x4); 
    
    /* Harness function #24 */    
    DWORD c24_ret = FreeImage_Unloadnew(c23_a0);
    
    /* Harness function #25 */
    DWORD c25_a0 = c23_ret;    
    
    DWORD c25_ret = FreeImage_GetImageTypenew(c25_a0);
    
    /* Harness function #26 */    
    DWORD c26_ret = FreeImage_HasBackgroundColornew(c25_a0);
    
    /* Harness function #27 */    
    DWORD c27_ret = FreeImage_IsTransparentnew(c25_a0);

}

int main(int argc, char ** argv)
{
    if (argc < 2) {
        printf("Usage %s: <input file>\n", argv[0]);
        printf("  e.g., harness.exe input\n");
        exit(1);
    }

    HINSTANCE hinstLib = LoadLibraryA(TEXT("D:\\A_Download\\winafl\\ABCkantu\\FreeImage.dll"));
    BOOL fFreeResult = FALSE;
    if (hinstLib == NULL){
        printf("failed to load library, gle = %d\n"); 
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
