#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 
#include <windows.h>
#include <tchar.h>

#define dbg_printf (void)printf

// Macro to help to loading functions
#define LOADFUNC(h, n)                                 \
    n##Func = (n##Func_t)GetProcAddress(h, #n);       \
    if (!n##Func) {                                    \
        dbg_printf("failed to load function " #n "\n"); \
        exit(1);                                        \
    }                                                   

// Macro help creating unique nop functions
#define NOP(x)                                                      \
    int nop##x() {                                                  \
        dbg_printf("==> nop%d called, %p\n", ##x, _ReturnAddress());\
        return (DWORD)x;                                            \
    }

HMODULE dlllib;

typedef int (__stdcall *FreeImage_GetFileTypeU)(wchar_t *, int);
typedef int (__stdcall *FreeImage_LoadU)(int, wchar_t *, int);
typedef int (__stdcall *FreeImage_GetWidth)(int);
typedef int (__stdcall *FreeImage_GetThumbnail)(int);
typedef int (__stdcall *FreeImage_Unload)(void *);
typedef int (__stdcall *FreeImage_GetInfoHeader)(int);
typedef int (__stdcall *FreeImage_GetHeight)(int);
typedef int (__stdcall *FreeImage_GetInfo)(int);
typedef int (__stdcall *FreeImage_GetBits)(int);
typedef int (__stdcall *FreeImage_GetImageType)(int);
typedef int (__stdcall *FreeImage_GetBPP)(int);
typedef int (__stdcall *FreeImage_Copy)(int, int, int, int, int);
typedef int (__stdcall *FreeImage_HasBackgroundColor)(int);
typedef int (__stdcall *FreeImage_IsTransparent)(int);


void fuzz_me(char* filename){

    FreeImage_GetFileTypeU FreeImage_GetFileTypeU;
    FreeImage_LoadU FreeImage_LoadU;
    FreeImage_GetWidth FreeImage_GetWidth;
    FreeImage_GetThumbnail FreeImage_GetThumbnail;
    FreeImage_Unload FreeImage_Unload;
    FreeImage_GetInfoHeader FreeImage_GetInfoHeader;
    FreeImage_GetHeight FreeImage_GetHeight;
    FreeImage_GetInfo FreeImage_GetInfo;
    FreeImage_GetBits FreeImage_GetBits;
    FreeImage_GetImageType FreeImage_GetImageType;
    FreeImage_GetBPP FreeImage_GetBPP;
    FreeImage_Copy FreeImage_Copy;
    FreeImage_HasBackgroundColor FreeImage_HasBackgroundColor;
    FreeImage_IsTransparent FreeImage_IsTransparent;

    
    /* Harness function #0 */
    wchar_t  c0_a0 = 0x3a0064;     
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c0_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #1 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c0_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #0 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c0_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #1 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c0_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #0 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c0_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #1 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c0_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #2 */
    int c2_a0 = 0x16840940;    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c2_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #2 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c2_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #3 */
    wchar_t  c3_a0 = 0x3a0064;     
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c3_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #4 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c3_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #5 */
    int c5_a0 = 0x282d77a0;    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c5_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #6 */
    wchar_t  c6_a0 = 0x3a0064;     
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c6_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #2 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c2_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #3 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c3_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #4 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c3_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #5 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c5_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #6 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c6_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #7 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c6_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #8 */
    int c8_a0 = 0x282d7180;    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c8_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #9 */
    wchar_t  c9_a0 = 0x3a0064;     
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c9_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #10 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c9_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #3 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c3_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #4 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c3_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #5 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c5_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #11 */
    int c11_a0 = 0x282d7300;    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c11_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #12 */
    wchar_t  c12_a0 = 0x3a0064;     
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c12_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #13 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c12_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #14 */
    int c14_a0 = 0x282d7c30;    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c14_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #15 */
    wchar_t  c15_a0 = 0x3a0064;     
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c15_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #16 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c15_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #17 */
    int c17_a0 = 0x282d7610;    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c17_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #7 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c6_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #8 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c8_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #6 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c6_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #7 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c6_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #9 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c9_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #10 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c9_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #8 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c8_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #11 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c11_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #12 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c12_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #9 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c9_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #10 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c9_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #11 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c11_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #18 */
    wchar_t  c18_a0 = 0x3a0064;     
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c18_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #13 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c12_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #14 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c14_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #15 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c15_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #16 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c15_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #17 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c17_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #12 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c12_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #18 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c18_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #19 */
    void  c19_a0 = 0x1660e580;    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c19_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #20 */
    void  c20_a0 = 0x2825e520;    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c20_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #21 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c19_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #22 */
    void  c22_a0 = 0x1688d3b0;    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c22_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #23 */
    int c23_a0 = 0x166b38a0;    
    LOADFUNC(dlllib, FreeImage_GetInfoHeader);
    int FreeImage_GetInfoHeader = FreeImage_GetInfoHeader(&c23_a0);
    dbg_printf("FreeImage_GetInfoHeader, ret = %d\n", FreeImage_GetInfoHeader); 
    
    /* Harness function #13 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c12_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #24 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c23_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #25 */    
    LOADFUNC(dlllib, FreeImage_GetInfo);
    int FreeImage_GetInfo = FreeImage_GetInfo(&c23_a0);
    dbg_printf("FreeImage_GetInfo, ret = %d\n", FreeImage_GetInfo); 
    
    /* Harness function #26 */    
    LOADFUNC(dlllib, FreeImage_GetBits);
    int FreeImage_GetBits = FreeImage_GetBits(&c23_a0);
    dbg_printf("FreeImage_GetBits, ret = %d\n", FreeImage_GetBits); 
    
    /* Harness function #27 */
    int c27_a0 = 0x282d63b0;    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c27_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #28 */
    int c28_a0 = 0x1688c630;    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c28_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #14 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c14_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #29 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c28_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #30 */    
    LOADFUNC(dlllib, FreeImage_GetInfoHeader);
    int FreeImage_GetInfoHeader = FreeImage_GetInfoHeader(&c28_a0);
    dbg_printf("FreeImage_GetInfoHeader, ret = %d\n", FreeImage_GetInfoHeader); 
    
    /* Harness function #31 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c28_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #15 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c15_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #32 */    
    LOADFUNC(dlllib, FreeImage_GetInfo);
    int FreeImage_GetInfo = FreeImage_GetInfo(&c28_a0);
    dbg_printf("FreeImage_GetInfo, ret = %d\n", FreeImage_GetInfo); 
    
    /* Harness function #33 */    
    LOADFUNC(dlllib, FreeImage_GetBits);
    int FreeImage_GetBits = FreeImage_GetBits(&c28_a0);
    dbg_printf("FreeImage_GetBits, ret = %d\n", FreeImage_GetBits); 
    
    /* Harness function #34 */
    int c34_a0 = 0x167d6380;    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c34_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #16 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c15_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #35 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c34_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #36 */    
    LOADFUNC(dlllib, FreeImage_GetInfoHeader);
    int FreeImage_GetInfoHeader = FreeImage_GetInfoHeader(&c34_a0);
    dbg_printf("FreeImage_GetInfoHeader, ret = %d\n", FreeImage_GetInfoHeader); 
    
    /* Harness function #37 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c34_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #17 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c17_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #38 */    
    LOADFUNC(dlllib, FreeImage_GetInfo);
    int FreeImage_GetInfo = FreeImage_GetInfo(&c34_a0);
    dbg_printf("FreeImage_GetInfo, ret = %d\n", FreeImage_GetInfo); 
    
    /* Harness function #39 */
    wchar_t  c39_a0 = 0x3a0064;     
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c39_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #40 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c39_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #41 */
    int c41_a0 = 0x282d6540;    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c41_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #42 */
    wchar_t  c42_a0 = 0x3a0064;     
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c42_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #18 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c18_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #19 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c19_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #43 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c42_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #44 */
    int c44_a0 = 0x282d80d0;    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c44_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #45 */
    wchar_t  c45_a0 = 0x3a0064;     
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c45_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #20 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c20_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #46 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c45_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #47 */
    int c47_a0 = 0x282d6ce0;    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c47_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #48 */
    wchar_t  c48_a0 = 0x3a0064;     
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c48_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #49 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c48_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #50 */
    int c50_a0 = 0x282d66c0;    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c50_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #21 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c19_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #22 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c22_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #23 */    
    LOADFUNC(dlllib, FreeImage_GetInfoHeader);
    int FreeImage_GetInfoHeader = FreeImage_GetInfoHeader(&c23_a0);
    dbg_printf("FreeImage_GetInfoHeader, ret = %d\n", FreeImage_GetInfoHeader); 
    
    /* Harness function #51 */
    wchar_t  c51_a0 = 0x3a0064;     
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c51_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #52 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c51_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #53 */
    int c53_a0 = 0x282d6850;    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c53_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #54 */
    wchar_t  c54_a0 = 0x3a0064;     
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c54_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #55 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c54_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #56 */
    int c56_a0 = 0x16840ac0;    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c56_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #24 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c23_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #57 */
    wchar_t  c57_a0 = 0x3a0064;     
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c57_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #58 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c57_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #59 */
    int c59_a0 = 0x16840c50;    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c59_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #60 */
    wchar_t  c60_a0 = 0x3a0064;     
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c60_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #61 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c60_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #25 */    
    LOADFUNC(dlllib, FreeImage_GetInfo);
    int FreeImage_GetInfo = FreeImage_GetInfo(&c23_a0);
    dbg_printf("FreeImage_GetInfo, ret = %d\n", FreeImage_GetInfo); 
    
    /* Harness function #62 */
    int c62_a0 = 0x16840dd0;    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c62_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #63 */
    wchar_t  c63_a0 = 0x3a0064;     
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c63_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #64 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c63_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #65 */
    int c65_a0 = 0x16840f60;    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c65_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #66 */
    wchar_t  c66_a0 = 0x3a0064;     
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c66_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #67 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c66_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #26 */    
    LOADFUNC(dlllib, FreeImage_GetBits);
    int FreeImage_GetBits = FreeImage_GetBits(&c23_a0);
    dbg_printf("FreeImage_GetBits, ret = %d\n", FreeImage_GetBits); 
    
    /* Harness function #68 */
    int c68_a0 = 0x16875fe0;    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c68_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #69 */
    wchar_t  c69_a0 = 0x3a0064;     
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c69_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #70 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c69_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #19 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c19_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #71 */
    int c71_a0 = 0x16876910;    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c71_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #72 */
    wchar_t  c72_a0 = 0x3a0064;     
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c72_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #73 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c72_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #74 */
    int c74_a0 = 0x16876da0;    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c74_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #75 */
    wchar_t  c75_a0 = 0x3a0064;     
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c75_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #76 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c75_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #77 */
    int c77_a0 = 0x16876160;    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c77_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #78 */
    wchar_t  c78_a0 = 0x3a0064;     
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c78_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #27 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c27_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #20 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c20_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #28 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c28_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #79 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c78_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #80 */
    int c80_a0 = 0x16876a90;    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c80_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #81 */
    wchar_t  c81_a0 = 0x3a0064;     
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c81_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #29 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c28_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #82 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c81_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #83 */
    int c83_a0 = 0x16798c60;    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c83_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #30 */    
    LOADFUNC(dlllib, FreeImage_GetInfoHeader);
    int FreeImage_GetInfoHeader = FreeImage_GetInfoHeader(&c28_a0);
    dbg_printf("FreeImage_GetInfoHeader, ret = %d\n", FreeImage_GetInfoHeader); 
    
    /* Harness function #31 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c28_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #84 */
    wchar_t  c84_a0 = 0x3a0064;     
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c84_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #85 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c84_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #86 */
    int c86_a0 = 0x16639140;    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c86_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #87 */
    wchar_t  c87_a0 = 0x3a0064;     
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c87_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #88 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c87_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #89 */
    int c89_a0 = 0x168762f0;    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c89_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #21 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c19_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #90 */
    wchar_t  c90_a0 = 0x3a0064;     
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c90_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #91 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c90_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #92 */
    int c92_a0 = 0x16876c20;    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c92_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #32 */    
    LOADFUNC(dlllib, FreeImage_GetInfo);
    int FreeImage_GetInfo = FreeImage_GetInfo(&c28_a0);
    dbg_printf("FreeImage_GetInfo, ret = %d\n", FreeImage_GetInfo); 
    
    /* Harness function #93 */
    void  c93_a0 = 0x167ac5a0;    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c93_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #94 */    
    LOADFUNC(dlllib, FreeImage_GetInfoHeader);
    int FreeImage_GetInfoHeader = FreeImage_GetInfoHeader(&c23_a0);
    dbg_printf("FreeImage_GetInfoHeader, ret = %d\n", FreeImage_GetInfoHeader); 
    
    /* Harness function #95 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c23_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #96 */    
    LOADFUNC(dlllib, FreeImage_GetInfo);
    int FreeImage_GetInfo = FreeImage_GetInfo(&c23_a0);
    dbg_printf("FreeImage_GetInfo, ret = %d\n", FreeImage_GetInfo); 
    
    /* Harness function #97 */    
    LOADFUNC(dlllib, FreeImage_GetBits);
    int FreeImage_GetBits = FreeImage_GetBits(&c23_a0);
    dbg_printf("FreeImage_GetBits, ret = %d\n", FreeImage_GetBits); 
    
    /* Harness function #98 */
    int c98_a0 = 0x2825e520;    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c98_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #99 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c98_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #100 */    
    LOADFUNC(dlllib, FreeImage_GetInfoHeader);
    int FreeImage_GetInfoHeader = FreeImage_GetInfoHeader(&c98_a0);
    dbg_printf("FreeImage_GetInfoHeader, ret = %d\n", FreeImage_GetInfoHeader); 
    
    /* Harness function #33 */    
    LOADFUNC(dlllib, FreeImage_GetBits);
    int FreeImage_GetBits = FreeImage_GetBits(&c28_a0);
    dbg_printf("FreeImage_GetBits, ret = %d\n", FreeImage_GetBits); 
    
    /* Harness function #22 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c22_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #34 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c34_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #101 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c98_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #102 */    
    LOADFUNC(dlllib, FreeImage_GetInfo);
    int FreeImage_GetInfo = FreeImage_GetInfo(&c98_a0);
    dbg_printf("FreeImage_GetInfo, ret = %d\n", FreeImage_GetInfo); 
    
    /* Harness function #103 */    
    LOADFUNC(dlllib, FreeImage_GetBits);
    int FreeImage_GetBits = FreeImage_GetBits(&c98_a0);
    dbg_printf("FreeImage_GetBits, ret = %d\n", FreeImage_GetBits); 
    
    /* Harness function #35 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c34_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #104 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c28_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #105 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c28_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #36 */    
    LOADFUNC(dlllib, FreeImage_GetInfoHeader);
    int FreeImage_GetInfoHeader = FreeImage_GetInfoHeader(&c34_a0);
    dbg_printf("FreeImage_GetInfoHeader, ret = %d\n", FreeImage_GetInfoHeader); 
    
    /* Harness function #106 */    
    LOADFUNC(dlllib, FreeImage_GetInfoHeader);
    int FreeImage_GetInfoHeader = FreeImage_GetInfoHeader(&c28_a0);
    dbg_printf("FreeImage_GetInfoHeader, ret = %d\n", FreeImage_GetInfoHeader); 
    
    /* Harness function #107 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c28_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #108 */    
    LOADFUNC(dlllib, FreeImage_GetInfo);
    int FreeImage_GetInfo = FreeImage_GetInfo(&c28_a0);
    dbg_printf("FreeImage_GetInfo, ret = %d\n", FreeImage_GetInfo); 
    
    /* Harness function #109 */    
    LOADFUNC(dlllib, FreeImage_GetBits);
    int FreeImage_GetBits = FreeImage_GetBits(&c28_a0);
    dbg_printf("FreeImage_GetBits, ret = %d\n", FreeImage_GetBits); 
    
    /* Harness function #110 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c34_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #111 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c34_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #37 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c34_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #38 */    
    LOADFUNC(dlllib, FreeImage_GetInfo);
    int FreeImage_GetInfo = FreeImage_GetInfo(&c34_a0);
    dbg_printf("FreeImage_GetInfo, ret = %d\n", FreeImage_GetInfo); 
    
    /* Harness function #23 */    
    LOADFUNC(dlllib, FreeImage_GetInfoHeader);
    int FreeImage_GetInfoHeader = FreeImage_GetInfoHeader(&c23_a0);
    dbg_printf("FreeImage_GetInfoHeader, ret = %d\n", FreeImage_GetInfoHeader); 
    
    /* Harness function #24 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c23_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #25 */    
    LOADFUNC(dlllib, FreeImage_GetInfo);
    int FreeImage_GetInfo = FreeImage_GetInfo(&c23_a0);
    dbg_printf("FreeImage_GetInfo, ret = %d\n", FreeImage_GetInfo); 
    
    /* Harness function #26 */    
    LOADFUNC(dlllib, FreeImage_GetBits);
    int FreeImage_GetBits = FreeImage_GetBits(&c23_a0);
    dbg_printf("FreeImage_GetBits, ret = %d\n", FreeImage_GetBits); 
    
    /* Harness function #27 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c27_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #28 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c28_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #29 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c28_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #30 */    
    LOADFUNC(dlllib, FreeImage_GetInfoHeader);
    int FreeImage_GetInfoHeader = FreeImage_GetInfoHeader(&c28_a0);
    dbg_printf("FreeImage_GetInfoHeader, ret = %d\n", FreeImage_GetInfoHeader); 
    
    /* Harness function #31 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c28_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #32 */    
    LOADFUNC(dlllib, FreeImage_GetInfo);
    int FreeImage_GetInfo = FreeImage_GetInfo(&c28_a0);
    dbg_printf("FreeImage_GetInfo, ret = %d\n", FreeImage_GetInfo); 
    
    /* Harness function #33 */    
    LOADFUNC(dlllib, FreeImage_GetBits);
    int FreeImage_GetBits = FreeImage_GetBits(&c28_a0);
    dbg_printf("FreeImage_GetBits, ret = %d\n", FreeImage_GetBits); 
    
    /* Harness function #34 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c34_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #35 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c34_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #36 */    
    LOADFUNC(dlllib, FreeImage_GetInfoHeader);
    int FreeImage_GetInfoHeader = FreeImage_GetInfoHeader(&c34_a0);
    dbg_printf("FreeImage_GetInfoHeader, ret = %d\n", FreeImage_GetInfoHeader); 
    
    /* Harness function #37 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c34_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #38 */    
    LOADFUNC(dlllib, FreeImage_GetInfo);
    int FreeImage_GetInfo = FreeImage_GetInfo(&c34_a0);
    dbg_printf("FreeImage_GetInfo, ret = %d\n", FreeImage_GetInfo); 
    
    /* Harness function #39 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c39_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #40 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c39_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #41 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c41_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #42 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c42_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #43 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c42_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #44 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c44_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #45 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c45_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #46 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c45_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #47 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c47_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #48 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c48_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #49 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c48_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #50 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c50_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #51 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c51_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #52 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c51_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #53 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c53_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #54 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c54_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #55 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c54_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #56 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c56_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #57 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c57_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #58 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c57_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #59 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c59_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #60 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c60_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #61 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c60_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #62 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c62_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #63 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c63_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #64 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c63_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #65 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c65_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #66 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c66_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #67 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c66_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #68 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c68_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #69 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c69_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #70 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c69_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #71 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c71_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #72 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c72_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #73 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c72_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #74 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c74_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #75 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c75_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #76 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c75_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #77 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c77_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #78 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c78_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #79 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c78_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #80 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c80_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #81 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c81_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #82 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c81_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #112 */    
    LOADFUNC(dlllib, FreeImage_GetInfoHeader);
    int FreeImage_GetInfoHeader = FreeImage_GetInfoHeader(&c34_a0);
    dbg_printf("FreeImage_GetInfoHeader, ret = %d\n", FreeImage_GetInfoHeader); 
    
    /* Harness function #113 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c34_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #114 */    
    LOADFUNC(dlllib, FreeImage_GetInfo);
    int FreeImage_GetInfo = FreeImage_GetInfo(&c34_a0);
    dbg_printf("FreeImage_GetInfo, ret = %d\n", FreeImage_GetInfo); 
    
    /* Harness function #115 */    
    LOADFUNC(dlllib, FreeImage_GetBits);
    int FreeImage_GetBits = FreeImage_GetBits(&c34_a0);
    dbg_printf("FreeImage_GetBits, ret = %d\n", FreeImage_GetBits); 
    
    /* Harness function #116 */
    int c116_a0 = 0x16a58020;    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c116_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #39 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c39_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #83 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c83_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #84 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c84_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #85 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c84_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #86 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c86_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #40 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c39_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #87 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c87_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #88 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c87_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #41 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c41_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #89 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c89_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #90 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c90_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #91 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c90_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #92 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c92_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #117 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c116_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #118 */    
    LOADFUNC(dlllib, FreeImage_GetInfoHeader);
    int FreeImage_GetInfoHeader = FreeImage_GetInfoHeader(&c116_a0);
    dbg_printf("FreeImage_GetInfoHeader, ret = %d\n", FreeImage_GetInfoHeader); 
    
    /* Harness function #119 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c116_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #120 */    
    LOADFUNC(dlllib, FreeImage_GetInfo);
    int FreeImage_GetInfo = FreeImage_GetInfo(&c116_a0);
    dbg_printf("FreeImage_GetInfo, ret = %d\n", FreeImage_GetInfo); 
    
    /* Harness function #121 */    
    LOADFUNC(dlllib, FreeImage_GetBits);
    int FreeImage_GetBits = FreeImage_GetBits(&c116_a0);
    dbg_printf("FreeImage_GetBits, ret = %d\n", FreeImage_GetBits); 
    
    /* Harness function #122 */
    int c122_a0 = 0x282d8390;    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c122_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #42 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c42_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #93 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c93_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #123 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c122_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #124 */    
    LOADFUNC(dlllib, FreeImage_GetInfoHeader);
    int FreeImage_GetInfoHeader = FreeImage_GetInfoHeader(&c122_a0);
    dbg_printf("FreeImage_GetInfoHeader, ret = %d\n", FreeImage_GetInfoHeader); 
    
    /* Harness function #125 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c122_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #43 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c42_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #126 */    
    LOADFUNC(dlllib, FreeImage_GetInfo);
    int FreeImage_GetInfo = FreeImage_GetInfo(&c122_a0);
    dbg_printf("FreeImage_GetInfo, ret = %d\n", FreeImage_GetInfo); 
    
    /* Harness function #127 */    
    LOADFUNC(dlllib, FreeImage_GetBits);
    int FreeImage_GetBits = FreeImage_GetBits(&c122_a0);
    dbg_printf("FreeImage_GetBits, ret = %d\n", FreeImage_GetBits); 
    
    /* Harness function #128 */
    int c128_a0 = 0x2822f020;    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c128_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #129 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c128_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #130 */    
    LOADFUNC(dlllib, FreeImage_GetInfoHeader);
    int FreeImage_GetInfoHeader = FreeImage_GetInfoHeader(&c128_a0);
    dbg_printf("FreeImage_GetInfoHeader, ret = %d\n", FreeImage_GetInfoHeader); 
    
    /* Harness function #131 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c128_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #132 */    
    LOADFUNC(dlllib, FreeImage_GetInfo);
    int FreeImage_GetInfo = FreeImage_GetInfo(&c128_a0);
    dbg_printf("FreeImage_GetInfo, ret = %d\n", FreeImage_GetInfo); 
    
    /* Harness function #133 */    
    LOADFUNC(dlllib, FreeImage_GetBits);
    int FreeImage_GetBits = FreeImage_GetBits(&c128_a0);
    dbg_printf("FreeImage_GetBits, ret = %d\n", FreeImage_GetBits); 
    
    /* Harness function #44 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c44_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #94 */    
    LOADFUNC(dlllib, FreeImage_GetInfoHeader);
    int FreeImage_GetInfoHeader = FreeImage_GetInfoHeader(&c23_a0);
    dbg_printf("FreeImage_GetInfoHeader, ret = %d\n", FreeImage_GetInfoHeader); 
    
    /* Harness function #95 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c23_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #96 */    
    LOADFUNC(dlllib, FreeImage_GetInfo);
    int FreeImage_GetInfo = FreeImage_GetInfo(&c23_a0);
    dbg_printf("FreeImage_GetInfo, ret = %d\n", FreeImage_GetInfo); 
    
    /* Harness function #97 */    
    LOADFUNC(dlllib, FreeImage_GetBits);
    int FreeImage_GetBits = FreeImage_GetBits(&c23_a0);
    dbg_printf("FreeImage_GetBits, ret = %d\n", FreeImage_GetBits); 
    
    /* Harness function #98 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c98_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #99 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c98_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #100 */    
    LOADFUNC(dlllib, FreeImage_GetInfoHeader);
    int FreeImage_GetInfoHeader = FreeImage_GetInfoHeader(&c98_a0);
    dbg_printf("FreeImage_GetInfoHeader, ret = %d\n", FreeImage_GetInfoHeader); 
    
    /* Harness function #101 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c98_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #102 */    
    LOADFUNC(dlllib, FreeImage_GetInfo);
    int FreeImage_GetInfo = FreeImage_GetInfo(&c98_a0);
    dbg_printf("FreeImage_GetInfo, ret = %d\n", FreeImage_GetInfo); 
    
    /* Harness function #103 */    
    LOADFUNC(dlllib, FreeImage_GetBits);
    int FreeImage_GetBits = FreeImage_GetBits(&c98_a0);
    dbg_printf("FreeImage_GetBits, ret = %d\n", FreeImage_GetBits); 
    
    /* Harness function #104 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c28_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #105 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c28_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #106 */    
    LOADFUNC(dlllib, FreeImage_GetInfoHeader);
    int FreeImage_GetInfoHeader = FreeImage_GetInfoHeader(&c28_a0);
    dbg_printf("FreeImage_GetInfoHeader, ret = %d\n", FreeImage_GetInfoHeader); 
    
    /* Harness function #107 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c28_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #108 */    
    LOADFUNC(dlllib, FreeImage_GetInfo);
    int FreeImage_GetInfo = FreeImage_GetInfo(&c28_a0);
    dbg_printf("FreeImage_GetInfo, ret = %d\n", FreeImage_GetInfo); 
    
    /* Harness function #109 */    
    LOADFUNC(dlllib, FreeImage_GetBits);
    int FreeImage_GetBits = FreeImage_GetBits(&c28_a0);
    dbg_printf("FreeImage_GetBits, ret = %d\n", FreeImage_GetBits); 
    
    /* Harness function #110 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c34_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #111 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c34_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #112 */    
    LOADFUNC(dlllib, FreeImage_GetInfoHeader);
    int FreeImage_GetInfoHeader = FreeImage_GetInfoHeader(&c34_a0);
    dbg_printf("FreeImage_GetInfoHeader, ret = %d\n", FreeImage_GetInfoHeader); 
    
    /* Harness function #113 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c34_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #114 */    
    LOADFUNC(dlllib, FreeImage_GetInfo);
    int FreeImage_GetInfo = FreeImage_GetInfo(&c34_a0);
    dbg_printf("FreeImage_GetInfo, ret = %d\n", FreeImage_GetInfo); 
    
    /* Harness function #115 */    
    LOADFUNC(dlllib, FreeImage_GetBits);
    int FreeImage_GetBits = FreeImage_GetBits(&c34_a0);
    dbg_printf("FreeImage_GetBits, ret = %d\n", FreeImage_GetBits); 
    
    /* Harness function #116 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c116_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #117 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c116_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #118 */    
    LOADFUNC(dlllib, FreeImage_GetInfoHeader);
    int FreeImage_GetInfoHeader = FreeImage_GetInfoHeader(&c116_a0);
    dbg_printf("FreeImage_GetInfoHeader, ret = %d\n", FreeImage_GetInfoHeader); 
    
    /* Harness function #119 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c116_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #120 */    
    LOADFUNC(dlllib, FreeImage_GetInfo);
    int FreeImage_GetInfo = FreeImage_GetInfo(&c116_a0);
    dbg_printf("FreeImage_GetInfo, ret = %d\n", FreeImage_GetInfo); 
    
    /* Harness function #121 */    
    LOADFUNC(dlllib, FreeImage_GetBits);
    int FreeImage_GetBits = FreeImage_GetBits(&c116_a0);
    dbg_printf("FreeImage_GetBits, ret = %d\n", FreeImage_GetBits); 
    
    /* Harness function #122 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c122_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #123 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c122_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #124 */    
    LOADFUNC(dlllib, FreeImage_GetInfoHeader);
    int FreeImage_GetInfoHeader = FreeImage_GetInfoHeader(&c122_a0);
    dbg_printf("FreeImage_GetInfoHeader, ret = %d\n", FreeImage_GetInfoHeader); 
    
    /* Harness function #125 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c122_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #126 */    
    LOADFUNC(dlllib, FreeImage_GetInfo);
    int FreeImage_GetInfo = FreeImage_GetInfo(&c122_a0);
    dbg_printf("FreeImage_GetInfo, ret = %d\n", FreeImage_GetInfo); 
    
    /* Harness function #127 */    
    LOADFUNC(dlllib, FreeImage_GetBits);
    int FreeImage_GetBits = FreeImage_GetBits(&c122_a0);
    dbg_printf("FreeImage_GetBits, ret = %d\n", FreeImage_GetBits); 
    
    /* Harness function #128 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c128_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #129 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c128_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #130 */    
    LOADFUNC(dlllib, FreeImage_GetInfoHeader);
    int FreeImage_GetInfoHeader = FreeImage_GetInfoHeader(&c128_a0);
    dbg_printf("FreeImage_GetInfoHeader, ret = %d\n", FreeImage_GetInfoHeader); 
    
    /* Harness function #131 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c128_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #132 */    
    LOADFUNC(dlllib, FreeImage_GetInfo);
    int FreeImage_GetInfo = FreeImage_GetInfo(&c128_a0);
    dbg_printf("FreeImage_GetInfo, ret = %d\n", FreeImage_GetInfo); 
    
    /* Harness function #133 */    
    LOADFUNC(dlllib, FreeImage_GetBits);
    int FreeImage_GetBits = FreeImage_GetBits(&c128_a0);
    dbg_printf("FreeImage_GetBits, ret = %d\n", FreeImage_GetBits); 
    
    /* Harness function #134 */
    int c134_a0 = 0x282d6b60;    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c134_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #135 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c134_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #136 */
     wchar_t  c136_a1 = 0x3a0064;     
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c136_a1, 0x0);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #137 */    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c22_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #138 */    
    LOADFUNC(dlllib, FreeImage_GetBPP);
    int FreeImage_GetBPP = FreeImage_GetBPP(&c22_a0);
    dbg_printf("FreeImage_GetBPP, ret = %d\n", FreeImage_GetBPP); 
    
    /* Harness function #139 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c22_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #140 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c22_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #141 */    
    LOADFUNC(dlllib, FreeImage_Copy@20);
    int FreeImage_Copy@20_ret = FreeImage_Copy(&c22_a0, 0x0, 0x0, 0x20, 0x20);
    dbg_printf("FreeImage_Copy@20, ret = %d\n", FreeImage_Copy@20_ret); 
    
    /* Harness function #142 */
    int c142_a0 = 0x167ae0b0;    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c142_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #143 */    
    LOADFUNC(dlllib, FreeImage_HasBackgroundColor);
    int FreeImage_HasBackgroundColor = FreeImage_HasBackgroundColor(&c142_a0);
    dbg_printf("FreeImage_HasBackgroundColor, ret = %d\n", FreeImage_HasBackgroundColor); 
    
    /* Harness function #144 */    
    LOADFUNC(dlllib, FreeImage_IsTransparent);
    int FreeImage_IsTransparent = FreeImage_IsTransparent(&c142_a0);
    dbg_printf("FreeImage_IsTransparent, ret = %d\n", FreeImage_IsTransparent); 
    
    /* Harness function #145 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c41_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #146 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c41_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #147 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c39_a0, 0x0);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #148 */    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c20_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #149 */    
    LOADFUNC(dlllib, FreeImage_GetBPP);
    int FreeImage_GetBPP = FreeImage_GetBPP(&c20_a0);
    dbg_printf("FreeImage_GetBPP, ret = %d\n", FreeImage_GetBPP); 
    
    /* Harness function #150 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c20_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #151 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c20_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #152 */    
    LOADFUNC(dlllib, FreeImage_Copy@20);
    int FreeImage_Copy@20_ret = FreeImage_Copy(&c20_a0, 0x0, 0x0, 0x20, 0x20);
    dbg_printf("FreeImage_Copy@20, ret = %d\n", FreeImage_Copy@20_ret); 
    
    /* Harness function #153 */
    int c153_a0 = 0x167aaa90;    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c153_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #154 */    
    LOADFUNC(dlllib, FreeImage_HasBackgroundColor);
    int FreeImage_HasBackgroundColor = FreeImage_HasBackgroundColor(&c153_a0);
    dbg_printf("FreeImage_HasBackgroundColor, ret = %d\n", FreeImage_HasBackgroundColor); 
    
    /* Harness function #155 */    
    LOADFUNC(dlllib, FreeImage_IsTransparent);
    int FreeImage_IsTransparent = FreeImage_IsTransparent(&c153_a0);
    dbg_printf("FreeImage_IsTransparent, ret = %d\n", FreeImage_IsTransparent); 
    
    /* Harness function #156 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c44_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #157 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c44_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #158 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c42_a0, 0x0);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #134 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c134_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #135 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c134_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #136 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c136_a1, 0x0);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #137 */    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c22_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #138 */    
    LOADFUNC(dlllib, FreeImage_GetBPP);
    int FreeImage_GetBPP = FreeImage_GetBPP(&c22_a0);
    dbg_printf("FreeImage_GetBPP, ret = %d\n", FreeImage_GetBPP); 
    
    /* Harness function #45 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c45_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #139 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c22_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #140 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c22_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #141 */    
    LOADFUNC(dlllib, FreeImage_Copy@20);
    int FreeImage_Copy@20_ret = FreeImage_Copy(&c22_a0, 0x0, 0x0, 0x20, 0x20);
    dbg_printf("FreeImage_Copy@20, ret = %d\n", FreeImage_Copy@20_ret); 
    
    /* Harness function #142 */    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c142_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #143 */    
    LOADFUNC(dlllib, FreeImage_HasBackgroundColor);
    int FreeImage_HasBackgroundColor = FreeImage_HasBackgroundColor(&c142_a0);
    dbg_printf("FreeImage_HasBackgroundColor, ret = %d\n", FreeImage_HasBackgroundColor); 
    
    /* Harness function #144 */    
    LOADFUNC(dlllib, FreeImage_IsTransparent);
    int FreeImage_IsTransparent = FreeImage_IsTransparent(&c142_a0);
    dbg_printf("FreeImage_IsTransparent, ret = %d\n", FreeImage_IsTransparent); 
    
    /* Harness function #159 */    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c22_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #46 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c45_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #145 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c41_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #146 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c41_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #147 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c39_a0, 0x0);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #148 */    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c20_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #149 */    
    LOADFUNC(dlllib, FreeImage_GetBPP);
    int FreeImage_GetBPP = FreeImage_GetBPP(&c20_a0);
    dbg_printf("FreeImage_GetBPP, ret = %d\n", FreeImage_GetBPP); 
    
    /* Harness function #47 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c47_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #150 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c20_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #151 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c20_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #152 */    
    LOADFUNC(dlllib, FreeImage_Copy@20);
    int FreeImage_Copy@20_ret = FreeImage_Copy(&c20_a0, 0x0, 0x0, 0x20, 0x20);
    dbg_printf("FreeImage_Copy@20, ret = %d\n", FreeImage_Copy@20_ret); 
    
    /* Harness function #153 */    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c153_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #154 */    
    LOADFUNC(dlllib, FreeImage_HasBackgroundColor);
    int FreeImage_HasBackgroundColor = FreeImage_HasBackgroundColor(&c153_a0);
    dbg_printf("FreeImage_HasBackgroundColor, ret = %d\n", FreeImage_HasBackgroundColor); 
    
    /* Harness function #155 */    
    LOADFUNC(dlllib, FreeImage_IsTransparent);
    int FreeImage_IsTransparent = FreeImage_IsTransparent(&c153_a0);
    dbg_printf("FreeImage_IsTransparent, ret = %d\n", FreeImage_IsTransparent); 
    
    /* Harness function #48 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c48_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #160 */    
    LOADFUNC(dlllib, FreeImage_GetBPP);
    int FreeImage_GetBPP = FreeImage_GetBPP(&c22_a0);
    dbg_printf("FreeImage_GetBPP, ret = %d\n", FreeImage_GetBPP); 
    
    /* Harness function #49 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c48_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #156 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c44_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #157 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c44_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #158 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c42_a0, 0x0);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #161 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c22_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #162 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c22_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #50 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c50_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #163 */    
    LOADFUNC(dlllib, FreeImage_Copy@20);
    int FreeImage_Copy@20_ret = FreeImage_Copy(&c22_a0, 0x0, 0x0, 0x20, 0x20);
    dbg_printf("FreeImage_Copy@20, ret = %d\n", FreeImage_Copy@20_ret); 
    
    /* Harness function #164 */
    int c164_a0 = 0x167a8f80;    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c164_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #159 */    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c22_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #160 */    
    LOADFUNC(dlllib, FreeImage_GetBPP);
    int FreeImage_GetBPP = FreeImage_GetBPP(&c22_a0);
    dbg_printf("FreeImage_GetBPP, ret = %d\n", FreeImage_GetBPP); 
    
    /* Harness function #165 */    
    LOADFUNC(dlllib, FreeImage_HasBackgroundColor);
    int FreeImage_HasBackgroundColor = FreeImage_HasBackgroundColor(&c164_a0);
    dbg_printf("FreeImage_HasBackgroundColor, ret = %d\n", FreeImage_HasBackgroundColor); 
    
    /* Harness function #166 */    
    LOADFUNC(dlllib, FreeImage_IsTransparent);
    int FreeImage_IsTransparent = FreeImage_IsTransparent(&c164_a0);
    dbg_printf("FreeImage_IsTransparent, ret = %d\n", FreeImage_IsTransparent); 
    
    /* Harness function #167 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c47_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #168 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c47_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #169 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c45_a0, 0x0);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #170 */    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c22_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #171 */    
    LOADFUNC(dlllib, FreeImage_GetBPP);
    int FreeImage_GetBPP = FreeImage_GetBPP(&c22_a0);
    dbg_printf("FreeImage_GetBPP, ret = %d\n", FreeImage_GetBPP); 
    
    /* Harness function #172 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c22_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #173 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c22_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #174 */    
    LOADFUNC(dlllib, FreeImage_Copy@20);
    int FreeImage_Copy@20_ret = FreeImage_Copy(&c22_a0, 0x0, 0x0, 0x20, 0x20);
    dbg_printf("FreeImage_Copy@20, ret = %d\n", FreeImage_Copy@20_ret); 
    
    /* Harness function #175 */
    int c175_a0 = 0x167afbc0;    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c175_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #176 */    
    LOADFUNC(dlllib, FreeImage_HasBackgroundColor);
    int FreeImage_HasBackgroundColor = FreeImage_HasBackgroundColor(&c175_a0);
    dbg_printf("FreeImage_HasBackgroundColor, ret = %d\n", FreeImage_HasBackgroundColor); 
    
    /* Harness function #177 */    
    LOADFUNC(dlllib, FreeImage_IsTransparent);
    int FreeImage_IsTransparent = FreeImage_IsTransparent(&c175_a0);
    dbg_printf("FreeImage_IsTransparent, ret = %d\n", FreeImage_IsTransparent); 
    
    /* Harness function #178 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c50_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #179 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c50_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #180 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c48_a0, 0x0);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #181 */
    int c181_a0 = 0x167ac5a0;    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c181_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #182 */    
    LOADFUNC(dlllib, FreeImage_GetBPP);
    int FreeImage_GetBPP = FreeImage_GetBPP(&c181_a0);
    dbg_printf("FreeImage_GetBPP, ret = %d\n", FreeImage_GetBPP); 
    
    /* Harness function #183 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c181_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #184 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c181_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #185 */    
    LOADFUNC(dlllib, FreeImage_Copy@20);
    int FreeImage_Copy@20_ret = FreeImage_Copy(&c181_a0, 0x0, 0x0, 0x20, 0x20);
    dbg_printf("FreeImage_Copy@20, ret = %d\n", FreeImage_Copy@20_ret); 
    
    /* Harness function #186 */
    int c186_a0 = 0x167ad320;    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c186_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #187 */    
    LOADFUNC(dlllib, FreeImage_HasBackgroundColor);
    int FreeImage_HasBackgroundColor = FreeImage_HasBackgroundColor(&c186_a0);
    dbg_printf("FreeImage_HasBackgroundColor, ret = %d\n", FreeImage_HasBackgroundColor); 
    
    /* Harness function #188 */    
    LOADFUNC(dlllib, FreeImage_IsTransparent);
    int FreeImage_IsTransparent = FreeImage_IsTransparent(&c186_a0);
    dbg_printf("FreeImage_IsTransparent, ret = %d\n", FreeImage_IsTransparent); 
    
    /* Harness function #189 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c53_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #190 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c53_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #191 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c51_a0, 0x0);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #192 */
    int c192_a0 = 0x167ac5a0;    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c192_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #193 */    
    LOADFUNC(dlllib, FreeImage_GetBPP);
    int FreeImage_GetBPP = FreeImage_GetBPP(&c192_a0);
    dbg_printf("FreeImage_GetBPP, ret = %d\n", FreeImage_GetBPP); 
    
    /* Harness function #194 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c192_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #195 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c192_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #196 */    
    LOADFUNC(dlllib, FreeImage_Copy@20);
    int FreeImage_Copy@20_ret = FreeImage_Copy(&c192_a0, 0x0, 0x0, 0x20, 0x20);
    dbg_printf("FreeImage_Copy@20, ret = %d\n", FreeImage_Copy@20_ret); 
    
    /* Harness function #197 */
    int c197_a0 = 0x167aee30;    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c197_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #198 */    
    LOADFUNC(dlllib, FreeImage_HasBackgroundColor);
    int FreeImage_HasBackgroundColor = FreeImage_HasBackgroundColor(&c197_a0);
    dbg_printf("FreeImage_HasBackgroundColor, ret = %d\n", FreeImage_HasBackgroundColor); 
    
    /* Harness function #199 */    
    LOADFUNC(dlllib, FreeImage_IsTransparent);
    int FreeImage_IsTransparent = FreeImage_IsTransparent(&c197_a0);
    dbg_printf("FreeImage_IsTransparent, ret = %d\n", FreeImage_IsTransparent); 
    
    /* Harness function #200 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c56_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #201 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c56_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #202 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c54_a0, 0x0);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #203 */
    int c203_a0 = 0x167ac5a0;    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c203_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #204 */    
    LOADFUNC(dlllib, FreeImage_GetBPP);
    int FreeImage_GetBPP = FreeImage_GetBPP(&c203_a0);
    dbg_printf("FreeImage_GetBPP, ret = %d\n", FreeImage_GetBPP); 
    
    /* Harness function #205 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c203_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #206 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c203_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #207 */    
    LOADFUNC(dlllib, FreeImage_Copy@20);
    int FreeImage_Copy@20_ret = FreeImage_Copy(&c203_a0, 0x0, 0x0, 0x20, 0x20);
    dbg_printf("FreeImage_Copy@20, ret = %d\n", FreeImage_Copy@20_ret); 
    
    /* Harness function #208 */
    int c208_a0 = 0x16823810;    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c208_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #209 */    
    LOADFUNC(dlllib, FreeImage_HasBackgroundColor);
    int FreeImage_HasBackgroundColor = FreeImage_HasBackgroundColor(&c208_a0);
    dbg_printf("FreeImage_HasBackgroundColor, ret = %d\n", FreeImage_HasBackgroundColor); 
    
    /* Harness function #210 */    
    LOADFUNC(dlllib, FreeImage_IsTransparent);
    int FreeImage_IsTransparent = FreeImage_IsTransparent(&c208_a0);
    dbg_printf("FreeImage_IsTransparent, ret = %d\n", FreeImage_IsTransparent); 
    
    /* Harness function #211 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c59_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #212 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c59_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #213 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c57_a0, 0x0);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #214 */    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c203_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #215 */    
    LOADFUNC(dlllib, FreeImage_GetBPP);
    int FreeImage_GetBPP = FreeImage_GetBPP(&c203_a0);
    dbg_printf("FreeImage_GetBPP, ret = %d\n", FreeImage_GetBPP); 
    
    /* Harness function #216 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c203_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #217 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c203_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #218 */    
    LOADFUNC(dlllib, FreeImage_Copy@20);
    int FreeImage_Copy@20_ret = FreeImage_Copy(&c203_a0, 0x0, 0x0, 0x20, 0x20);
    dbg_printf("FreeImage_Copy@20, ret = %d\n", FreeImage_Copy@20_ret); 
    
    /* Harness function #219 */    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c192_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #220 */    
    LOADFUNC(dlllib, FreeImage_HasBackgroundColor);
    int FreeImage_HasBackgroundColor = FreeImage_HasBackgroundColor(&c192_a0);
    dbg_printf("FreeImage_HasBackgroundColor, ret = %d\n", FreeImage_HasBackgroundColor); 
    
    /* Harness function #221 */    
    LOADFUNC(dlllib, FreeImage_IsTransparent);
    int FreeImage_IsTransparent = FreeImage_IsTransparent(&c192_a0);
    dbg_printf("FreeImage_IsTransparent, ret = %d\n", FreeImage_IsTransparent); 
    
    /* Harness function #222 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c62_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #223 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c62_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #224 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c60_a0, 0x0);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #161 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c22_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #162 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c22_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #163 */    
    LOADFUNC(dlllib, FreeImage_Copy@20);
    int FreeImage_Copy@20_ret = FreeImage_Copy(&c22_a0, 0x0, 0x0, 0x20, 0x20);
    dbg_printf("FreeImage_Copy@20, ret = %d\n", FreeImage_Copy@20_ret); 
    
    /* Harness function #164 */    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c164_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #165 */    
    LOADFUNC(dlllib, FreeImage_HasBackgroundColor);
    int FreeImage_HasBackgroundColor = FreeImage_HasBackgroundColor(&c164_a0);
    dbg_printf("FreeImage_HasBackgroundColor, ret = %d\n", FreeImage_HasBackgroundColor); 
    
    /* Harness function #166 */    
    LOADFUNC(dlllib, FreeImage_IsTransparent);
    int FreeImage_IsTransparent = FreeImage_IsTransparent(&c164_a0);
    dbg_printf("FreeImage_IsTransparent, ret = %d\n", FreeImage_IsTransparent); 
    
    /* Harness function #51 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c51_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #225 */    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c203_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #52 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c51_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #167 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c47_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #168 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c47_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #169 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c45_a0, 0x0);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #170 */    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c22_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #171 */    
    LOADFUNC(dlllib, FreeImage_GetBPP);
    int FreeImage_GetBPP = FreeImage_GetBPP(&c22_a0);
    dbg_printf("FreeImage_GetBPP, ret = %d\n", FreeImage_GetBPP); 
    
    /* Harness function #53 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c53_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #172 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c22_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #173 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c22_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #174 */    
    LOADFUNC(dlllib, FreeImage_Copy@20);
    int FreeImage_Copy@20_ret = FreeImage_Copy(&c22_a0, 0x0, 0x0, 0x20, 0x20);
    dbg_printf("FreeImage_Copy@20, ret = %d\n", FreeImage_Copy@20_ret); 
    
    /* Harness function #54 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c54_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #175 */    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c175_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #176 */    
    LOADFUNC(dlllib, FreeImage_HasBackgroundColor);
    int FreeImage_HasBackgroundColor = FreeImage_HasBackgroundColor(&c175_a0);
    dbg_printf("FreeImage_HasBackgroundColor, ret = %d\n", FreeImage_HasBackgroundColor); 
    
    /* Harness function #177 */    
    LOADFUNC(dlllib, FreeImage_IsTransparent);
    int FreeImage_IsTransparent = FreeImage_IsTransparent(&c175_a0);
    dbg_printf("FreeImage_IsTransparent, ret = %d\n", FreeImage_IsTransparent); 
    
    /* Harness function #55 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c54_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #56 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c56_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #226 */    
    LOADFUNC(dlllib, FreeImage_GetBPP);
    int FreeImage_GetBPP = FreeImage_GetBPP(&c203_a0);
    dbg_printf("FreeImage_GetBPP, ret = %d\n", FreeImage_GetBPP); 
    
    /* Harness function #178 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c50_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #179 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c50_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #180 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c48_a0, 0x0);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #181 */    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c181_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #182 */    
    LOADFUNC(dlllib, FreeImage_GetBPP);
    int FreeImage_GetBPP = FreeImage_GetBPP(&c181_a0);
    dbg_printf("FreeImage_GetBPP, ret = %d\n", FreeImage_GetBPP); 
    
    /* Harness function #183 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c181_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #184 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c181_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #185 */    
    LOADFUNC(dlllib, FreeImage_Copy@20);
    int FreeImage_Copy@20_ret = FreeImage_Copy(&c181_a0, 0x0, 0x0, 0x20, 0x20);
    dbg_printf("FreeImage_Copy@20, ret = %d\n", FreeImage_Copy@20_ret); 
    
    /* Harness function #186 */    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c186_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #187 */    
    LOADFUNC(dlllib, FreeImage_HasBackgroundColor);
    int FreeImage_HasBackgroundColor = FreeImage_HasBackgroundColor(&c186_a0);
    dbg_printf("FreeImage_HasBackgroundColor, ret = %d\n", FreeImage_HasBackgroundColor); 
    
    /* Harness function #188 */    
    LOADFUNC(dlllib, FreeImage_IsTransparent);
    int FreeImage_IsTransparent = FreeImage_IsTransparent(&c186_a0);
    dbg_printf("FreeImage_IsTransparent, ret = %d\n", FreeImage_IsTransparent); 
    
    /* Harness function #57 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c57_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #227 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c203_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #189 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c53_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #190 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c53_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #191 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c51_a0, 0x0);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #192 */    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c192_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #193 */    
    LOADFUNC(dlllib, FreeImage_GetBPP);
    int FreeImage_GetBPP = FreeImage_GetBPP(&c192_a0);
    dbg_printf("FreeImage_GetBPP, ret = %d\n", FreeImage_GetBPP); 
    
    /* Harness function #194 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c192_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #195 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c192_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #196 */    
    LOADFUNC(dlllib, FreeImage_Copy@20);
    int FreeImage_Copy@20_ret = FreeImage_Copy(&c192_a0, 0x0, 0x0, 0x20, 0x20);
    dbg_printf("FreeImage_Copy@20, ret = %d\n", FreeImage_Copy@20_ret); 
    
    /* Harness function #197 */    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c197_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #198 */    
    LOADFUNC(dlllib, FreeImage_HasBackgroundColor);
    int FreeImage_HasBackgroundColor = FreeImage_HasBackgroundColor(&c197_a0);
    dbg_printf("FreeImage_HasBackgroundColor, ret = %d\n", FreeImage_HasBackgroundColor); 
    
    /* Harness function #199 */    
    LOADFUNC(dlllib, FreeImage_IsTransparent);
    int FreeImage_IsTransparent = FreeImage_IsTransparent(&c197_a0);
    dbg_printf("FreeImage_IsTransparent, ret = %d\n", FreeImage_IsTransparent); 
    
    /* Harness function #58 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c57_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #228 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c203_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #200 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c56_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #201 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c56_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #202 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c54_a0, 0x0);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #59 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c59_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #203 */    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c203_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #204 */    
    LOADFUNC(dlllib, FreeImage_GetBPP);
    int FreeImage_GetBPP = FreeImage_GetBPP(&c203_a0);
    dbg_printf("FreeImage_GetBPP, ret = %d\n", FreeImage_GetBPP); 
    
    /* Harness function #205 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c203_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #206 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c203_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #207 */    
    LOADFUNC(dlllib, FreeImage_Copy@20);
    int FreeImage_Copy@20_ret = FreeImage_Copy(&c203_a0, 0x0, 0x0, 0x20, 0x20);
    dbg_printf("FreeImage_Copy@20, ret = %d\n", FreeImage_Copy@20_ret); 
    
    /* Harness function #208 */    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c208_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #209 */    
    LOADFUNC(dlllib, FreeImage_HasBackgroundColor);
    int FreeImage_HasBackgroundColor = FreeImage_HasBackgroundColor(&c208_a0);
    dbg_printf("FreeImage_HasBackgroundColor, ret = %d\n", FreeImage_HasBackgroundColor); 
    
    /* Harness function #210 */    
    LOADFUNC(dlllib, FreeImage_IsTransparent);
    int FreeImage_IsTransparent = FreeImage_IsTransparent(&c208_a0);
    dbg_printf("FreeImage_IsTransparent, ret = %d\n", FreeImage_IsTransparent); 
    
    /* Harness function #60 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c60_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #211 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c59_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #212 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c59_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #213 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c57_a0, 0x0);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #229 */    
    LOADFUNC(dlllib, FreeImage_Copy@20);
    int FreeImage_Copy@20_ret = FreeImage_Copy(&c203_a0, 0x0, 0x0, 0x20, 0x20);
    dbg_printf("FreeImage_Copy@20, ret = %d\n", FreeImage_Copy@20_ret); 
    
    /* Harness function #214 */    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c203_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #215 */    
    LOADFUNC(dlllib, FreeImage_GetBPP);
    int FreeImage_GetBPP = FreeImage_GetBPP(&c203_a0);
    dbg_printf("FreeImage_GetBPP, ret = %d\n", FreeImage_GetBPP); 
    
    /* Harness function #216 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c203_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #217 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c203_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #218 */    
    LOADFUNC(dlllib, FreeImage_Copy@20);
    int FreeImage_Copy@20_ret = FreeImage_Copy(&c203_a0, 0x0, 0x0, 0x20, 0x20);
    dbg_printf("FreeImage_Copy@20, ret = %d\n", FreeImage_Copy@20_ret); 
    
    /* Harness function #219 */    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c192_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #220 */    
    LOADFUNC(dlllib, FreeImage_HasBackgroundColor);
    int FreeImage_HasBackgroundColor = FreeImage_HasBackgroundColor(&c192_a0);
    dbg_printf("FreeImage_HasBackgroundColor, ret = %d\n", FreeImage_HasBackgroundColor); 
    
    /* Harness function #221 */    
    LOADFUNC(dlllib, FreeImage_IsTransparent);
    int FreeImage_IsTransparent = FreeImage_IsTransparent(&c192_a0);
    dbg_printf("FreeImage_IsTransparent, ret = %d\n", FreeImage_IsTransparent); 
    
    /* Harness function #230 */
    int c230_a0 = 0x16820f70;    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c230_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #61 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c60_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #62 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c62_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #222 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c62_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #223 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c62_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #224 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c60_a0, 0x0);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #225 */    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c203_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #226 */    
    LOADFUNC(dlllib, FreeImage_GetBPP);
    int FreeImage_GetBPP = FreeImage_GetBPP(&c203_a0);
    dbg_printf("FreeImage_GetBPP, ret = %d\n", FreeImage_GetBPP); 
    
    /* Harness function #63 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c63_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #227 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c203_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #228 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c203_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #229 */    
    LOADFUNC(dlllib, FreeImage_Copy@20);
    int FreeImage_Copy@20_ret = FreeImage_Copy(&c203_a0, 0x0, 0x0, 0x20, 0x20);
    dbg_printf("FreeImage_Copy@20, ret = %d\n", FreeImage_Copy@20_ret); 
    
    /* Harness function #230 */    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c230_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #231 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c203_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #232 */
    void  c232_a0 = 0x168260a0;    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c232_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #64 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c63_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #231 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c203_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #65 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c65_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #233 */
    void  c233_a0 = 0x16824590;    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c233_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #234 */
    void  c234_a0 = 0x168260a0;    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c234_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #235 */
    void  c235_a0 = 0x16825320;    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c235_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #236 */
    void  c236_a0 = 0x16825320;    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c236_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #237 */
    void  c237_a0 = 0x16825320;    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c237_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #66 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c66_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #238 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c233_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #239 */
    void  c239_a0 = 0x168f5c00;    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c239_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #240 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c192_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #241 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c59_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #242 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c197_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #243 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c53_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #232 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c232_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #67 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c66_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #68 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c68_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #244 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c175_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #245 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c47_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #246 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c153_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #69 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c69_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #247 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c41_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #248 */
    void  c248_a0 = 0x167a9d00;    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c248_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #70 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c69_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #249 */
    void  c249_a0 = 0x282d7f40;    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c249_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #250 */
    void  c250_a0 = 0x167ab810;    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c250_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #251 */
    void  c251_a0 = 0x282d7ab0;    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c251_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #252 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c142_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #253 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c134_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #254 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c164_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #233 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c233_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #71 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c71_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #255 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c44_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #256 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c186_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #257 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c50_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #258 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c208_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #259 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c56_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #72 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c72_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #260 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c230_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #261 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c62_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #262 */
    void  c262_a0 = 0x16821d00;    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c262_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #263 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c65_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #264 */
    void  c264_a0 = 0x16822a80;    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c264_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #265 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c68_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #234 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c234_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #73 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c72_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #74 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c74_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #266 */
    void  c266_a0 = 0x16824590;    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c266_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #267 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c71_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #268 */
    void  c268_a0 = 0x16826e30;    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c268_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #269 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c74_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #270 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c234_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #75 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c75_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #271 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c77_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #272 */
    void  c272_a0 = 0x167ac5a0;    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c272_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #273 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c80_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #274 */
    void  c274_a0 = 0x168f4e80;    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c274_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #275 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c83_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #276 */
    void  c276_a0 = 0x168f84a0;    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c276_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #277 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c86_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #76 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c75_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #77 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c77_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #278 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c236_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #279 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c89_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #280 */
    void  c280_a0 = 0x168f9fb0;    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c280_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #281 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c92_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #282 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c98_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #78 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c78_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #283 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c27_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #284 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c28_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #285 */
    void  c285_a0 = 0x282d6e70;    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c285_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #286 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c34_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #287 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c17_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #288 */
    void  c288_a0 = 0x168085e0;    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c288_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #235 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c235_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #79 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c78_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #80 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c80_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #289 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c116_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #290 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c11_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #291 */
    void  c291_a0 = 0x16744a70;    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c291_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #292 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c122_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #293 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c5_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #81 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c81_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #294 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c23_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #295 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c128_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #296 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c2_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #297 */
    void  c297_a0 = 0x1682d070;    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c297_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #298 */
    void  c298_a0 = 0x2829fdf0;    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c298_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #299 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c8_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #236 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c236_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #82 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c81_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #83 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c83_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #300 */
    void  c300_a0 = 0x1683deb0;    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c300_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #301 */
    void  c301_a0 = 0x16795b40;    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c301_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #302 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c14_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #303 */
    void  c303_a0 = 0x1660e580;    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c303_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #304 */
    void  c304_a0 = 0x282d7920;    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c304_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #84 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c84_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #305 */
    void  c305_a0 = 0x16638210;    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c305_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #306 */
    void  c306_a0 = 0x282d69d0;    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c306_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #307 */    
    LOADFUNC(dlllib, FreeImage_Copy@20);
    int FreeImage_Copy@20_ret = FreeImage_Copy(&c237_a0, 0x0, 0x0, 0x20, 0x20);
    dbg_printf("FreeImage_Copy@20, ret = %d\n", FreeImage_Copy@20_ret); 
    
    /* Harness function #308 */    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c274_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #309 */    
    LOADFUNC(dlllib, FreeImage_HasBackgroundColor);
    int FreeImage_HasBackgroundColor = FreeImage_HasBackgroundColor(&c274_a0);
    dbg_printf("FreeImage_HasBackgroundColor, ret = %d\n", FreeImage_HasBackgroundColor); 
    
    /* Harness function #310 */    
    LOADFUNC(dlllib, FreeImage_IsTransparent);
    int FreeImage_IsTransparent = FreeImage_IsTransparent(&c274_a0);
    dbg_printf("FreeImage_IsTransparent, ret = %d\n", FreeImage_IsTransparent); 
    
    /* Harness function #237 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c237_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #85 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c84_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #86 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c86_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #311 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c86_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #312 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c86_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #313 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c84_a0, 0x0);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #314 */    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c233_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #315 */    
    LOADFUNC(dlllib, FreeImage_GetBPP);
    int FreeImage_GetBPP = FreeImage_GetBPP(&c233_a0);
    dbg_printf("FreeImage_GetBPP, ret = %d\n", FreeImage_GetBPP); 
    
    /* Harness function #87 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c87_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #316 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c233_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #317 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c233_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #318 */    
    LOADFUNC(dlllib, FreeImage_Copy@20);
    int FreeImage_Copy@20_ret = FreeImage_Copy(&c233_a0, 0x0, 0x0, 0x20, 0x20);
    dbg_printf("FreeImage_Copy@20, ret = %d\n", FreeImage_Copy@20_ret); 
    
    /* Harness function #319 */    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c276_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #320 */    
    LOADFUNC(dlllib, FreeImage_HasBackgroundColor);
    int FreeImage_HasBackgroundColor = FreeImage_HasBackgroundColor(&c276_a0);
    dbg_printf("FreeImage_HasBackgroundColor, ret = %d\n", FreeImage_HasBackgroundColor); 
    
    /* Harness function #321 */    
    LOADFUNC(dlllib, FreeImage_IsTransparent);
    int FreeImage_IsTransparent = FreeImage_IsTransparent(&c276_a0);
    dbg_printf("FreeImage_IsTransparent, ret = %d\n", FreeImage_IsTransparent); 
    
    /* Harness function #88 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c87_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #238 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c233_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #89 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c89_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #322 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c89_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #323 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c89_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #324 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c87_a0, 0x0);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #325 */
    int c325_a0 = 0x168f9220;    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c325_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #326 */    
    LOADFUNC(dlllib, FreeImage_GetBPP);
    int FreeImage_GetBPP = FreeImage_GetBPP(&c325_a0);
    dbg_printf("FreeImage_GetBPP, ret = %d\n", FreeImage_GetBPP); 
    
    /* Harness function #90 */    
    LOADFUNC(dlllib, FreeImage_GetFileTypeU);
    int FreeImage_GetFileTypeU = FreeImage_GetFileTypeU(&c90_a0, 0x0);
    dbg_printf("FreeImage_GetFileTypeU, ret = %d\n", FreeImage_GetFileTypeU); 
    
    /* Harness function #327 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c325_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #328 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c325_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #329 */    
    LOADFUNC(dlllib, FreeImage_Copy@20);
    int FreeImage_Copy@20_ret = FreeImage_Copy(&c325_a0, 0x0, 0x0, 0x20, 0x20);
    dbg_printf("FreeImage_Copy@20, ret = %d\n", FreeImage_Copy@20_ret); 
    
    /* Harness function #330 */    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c236_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #331 */    
    LOADFUNC(dlllib, FreeImage_HasBackgroundColor);
    int FreeImage_HasBackgroundColor = FreeImage_HasBackgroundColor(&c236_a0);
    dbg_printf("FreeImage_HasBackgroundColor, ret = %d\n", FreeImage_HasBackgroundColor); 
    
    /* Harness function #332 */    
    LOADFUNC(dlllib, FreeImage_IsTransparent);
    int FreeImage_IsTransparent = FreeImage_IsTransparent(&c236_a0);
    dbg_printf("FreeImage_IsTransparent, ret = %d\n", FreeImage_IsTransparent); 
    
    /* Harness function #333 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c325_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #91 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c90_a0, 0x8000);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #92 */    
    LOADFUNC(dlllib, FreeImage_GetThumbnail);
    int FreeImage_GetThumbnail = FreeImage_GetThumbnail(&c92_a0);
    dbg_printf("FreeImage_GetThumbnail, ret = %d\n", FreeImage_GetThumbnail); 
    
    /* Harness function #334 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c92_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #335 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c92_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #336 */    
    LOADFUNC(dlllib, FreeImage_LoadU);
    int FreeImage_LoadU = FreeImage_LoadU(0x2, &c90_a0, 0x0);
    dbg_printf("FreeImage_LoadU, ret = %d\n", FreeImage_LoadU); 
    
    /* Harness function #337 */    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c239_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #338 */    
    LOADFUNC(dlllib, FreeImage_GetBPP);
    int FreeImage_GetBPP = FreeImage_GetBPP(&c239_a0);
    dbg_printf("FreeImage_GetBPP, ret = %d\n", FreeImage_GetBPP); 
    
    /* Harness function #339 */    
    LOADFUNC(dlllib, FreeImage_GetWidth);
    int FreeImage_GetWidth = FreeImage_GetWidth(&c239_a0);
    dbg_printf("FreeImage_GetWidth, ret = %d\n", FreeImage_GetWidth); 
    
    /* Harness function #340 */    
    LOADFUNC(dlllib, FreeImage_GetHeight);
    int FreeImage_GetHeight = FreeImage_GetHeight(&c239_a0);
    dbg_printf("FreeImage_GetHeight, ret = %d\n", FreeImage_GetHeight); 
    
    /* Harness function #341 */    
    LOADFUNC(dlllib, FreeImage_Copy@20);
    int FreeImage_Copy@20_ret = FreeImage_Copy(&c239_a0, 0x0, 0x0, 0x20, 0x20);
    dbg_printf("FreeImage_Copy@20, ret = %d\n", FreeImage_Copy@20_ret); 
    
    /* Harness function #342 */    
    LOADFUNC(dlllib, FreeImage_GetImageType);
    int FreeImage_GetImageType = FreeImage_GetImageType(&c280_a0);
    dbg_printf("FreeImage_GetImageType, ret = %d\n", FreeImage_GetImageType); 
    
    /* Harness function #343 */    
    LOADFUNC(dlllib, FreeImage_HasBackgroundColor);
    int FreeImage_HasBackgroundColor = FreeImage_HasBackgroundColor(&c280_a0);
    dbg_printf("FreeImage_HasBackgroundColor, ret = %d\n", FreeImage_HasBackgroundColor); 
    
    /* Harness function #344 */    
    LOADFUNC(dlllib, FreeImage_IsTransparent);
    int FreeImage_IsTransparent = FreeImage_IsTransparent(&c280_a0);
    dbg_printf("FreeImage_IsTransparent, ret = %d\n", FreeImage_IsTransparent); 
    
    /* Harness function #239 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c239_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #240 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c192_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #241 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c59_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #242 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c197_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #243 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c53_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #244 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c175_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #245 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c47_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #246 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c153_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #247 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c41_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #248 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c248_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #249 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c249_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #250 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c250_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #251 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c251_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #252 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c142_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #253 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c134_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #254 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c164_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #255 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c44_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #256 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c186_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #257 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c50_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #258 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c208_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #259 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c56_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #260 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c230_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #261 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c62_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #262 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c262_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #263 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c65_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #264 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c264_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #265 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c68_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #266 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c266_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #267 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c71_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #268 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c268_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #269 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c74_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #270 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c234_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #271 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c77_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #272 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c272_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #273 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c80_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #274 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c274_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #275 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c83_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #276 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c276_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #277 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c86_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #278 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c236_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #279 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c89_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #280 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c280_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #281 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c92_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #282 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c98_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #283 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c27_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #284 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c28_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #285 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c285_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #286 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c34_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #287 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c17_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #288 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c288_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #289 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c116_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #290 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c11_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #291 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c291_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #292 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c122_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #293 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c5_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #294 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c23_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #295 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c128_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #296 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c2_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #297 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c297_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #298 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c298_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #299 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c8_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #300 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c300_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #301 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c301_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #302 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c14_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #303 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c303_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #304 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c304_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #305 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c305_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 
    
    /* Harness function #306 */    
    LOADFUNC(dlllib, FreeImage_Unload);
    int FreeImage_Unload = FreeImage_Unload(&c306_a0);
    dbg_printf("FreeImage_Unload, ret = %d\n", FreeImage_Unload); 

}

int main(int argc, char ** argv)
{
    if (argc < 2) {
        printf("Usage %s: <input file>\n", argv[0]);
        printf("  e.g., harness.exe input\n");
        exit(1);
    }

    dlllib = LoadLibraryA(TEXT"D:\\A_Download\\winafl\\ABCkantu\\FreeImage.dll");
    if (dlllib == NULL){
        dbg_printf("failed to load library, gle = %d\n", GetLastError());
        exit(1);
    }

    char * filename = argv[1];    
    fuzz_me(filename);    
    return 0;
}