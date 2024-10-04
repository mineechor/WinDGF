
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 
#include <windows.h>
#include <tchar.h>
#include <iostream>


wchar_t* charToWChar(const char* text);
void fuzz_me(HINSTANCE hinstLib, wchar_t* pathfile);
typedef int (__stdcall *GetNumberOfMethods)(int);
typedef int (__stdcall *GetMethodProperty)(int, int, VARIANTARG *);
typedef int (__stdcall *GetHashers)(int);
typedef int (__stdcall *sub_100BFD50)(int);
typedef int (__stdcall *GetNumberOfFormats)(int);
typedef int (__stdcall *GetHandlerProperty2)(int, int, VARIANTARG *);
typedef int (__stdcall *GetIsArc)(int, int);
typedef int (__stdcall *sub_100BFD60)(int, int, int, VARIANTARG *);
typedef int (__stdcall *CreateObject)(int, void *, int);
typedef int (__stdcall *sub_10093329)(int, int, int, int);
typedef int (__stdcall *sub_10092680)(int, int, VARIANTARG *);
typedef int (__stdcall *sub_100145E6)(int);
typedef int (__stdcall *sub_10092462)(void *);
typedef int (__stdcall *sub_100923B3)(int, void *, int);
typedef int (__stdcall *sub_10092639)(int, int);
typedef int (__stdcall *sub_10092648)(int, int, int, int, int);
typedef int (__stdcall *sub_1003167E)(int, int);
typedef int (__stdcall *sub_10094E10)(int, int, int, int, int);
typedef int (__stdcall *sub_10092BB3)(int, int, int, VARIANTARG *);
typedef int (__stdcall *sub_100A12F0)(void *);


void fuzz_me(HINSTANCE hinstLib,wchar_t* filename){

    GetNumberOfMethods GetNumberOfMethodsnew;
    GetMethodProperty GetMethodPropertynew;
    GetHashers GetHashersnew;
    sub_100BFD50 sub_100BFD50new;
    GetNumberOfFormats GetNumberOfFormatsnew;
    GetHandlerProperty2 GetHandlerProperty2new;
    GetIsArc GetIsArcnew;
    sub_100BFD60 sub_100BFD60new;
    CreateObject CreateObjectnew;
    sub_10093329 sub_10093329new;
    sub_10092680 sub_10092680new;
    sub_100145E6 sub_100145E6new;
    sub_10092462 sub_10092462new;
    sub_100923B3 sub_100923B3new;
    sub_10092639 sub_10092639new;
    sub_10092648 sub_10092648new;
    sub_1003167E sub_1003167Enew;
    sub_10094E10 sub_10094E10new;
    sub_10092BB3 sub_10092BB3new;
    sub_100A12F0 sub_100A12F0new;

    GetNumberOfMethodsnew = (GetNumberOfMethods)GetProcAddress(hinstLib,"GetNumberOfMethods");
    GetMethodPropertynew = (GetMethodProperty)GetProcAddress(hinstLib,"GetMethodProperty");
    GetHashersnew = (GetHashers)GetProcAddress(hinstLib,"GetHashers");
    sub_100BFD50new = (sub_100BFD50)(hinstLib+100BFD50);
    GetNumberOfFormatsnew = (GetNumberOfFormats)GetProcAddress(hinstLib,"GetNumberOfFormats");
    GetHandlerProperty2new = (GetHandlerProperty2)GetProcAddress(hinstLib,"GetHandlerProperty2");
    GetIsArcnew = (GetIsArc)GetProcAddress(hinstLib,"GetIsArc");
    sub_100BFD60new = (sub_100BFD60)(hinstLib+0xBFD60);
    CreateObjectnew = (CreateObject)GetProcAddress(hinstLib,"CreateObject");
    sub_10093329new = (sub_10093329)(hinstLib+0x93329);
    sub_10092680new = (sub_10092680)(hinstLib+0x92680);
    sub_100145E6new = (sub_100145E6)(hinstLib+0x145E6);
    sub_10092462new = (sub_10092462)(hinstLib+0x92462);
    sub_100923B3new = (sub_100923B3)(hinstLib+0x923B3);
    sub_10092639new = (sub_10092639)(hinstLib+0x92639);
    sub_10092648new = (sub_10092648)(hinstLib+0x92648);
    sub_1003167Enew = (sub_1003167E)(hinstLib+0x3167E);
    sub_10094E10new = (sub_10094E10)(hinstLib+0x94E10);
    sub_10092BB3new = (sub_10092BB3)(hinstLib+0x92BB3);
    sub_100A12F0new = (sub_100A12F0)(hinstLib+0xA12F0);

    
    /* Harness function #0 */
    int c0_a0 = 0x19f7b8;    
    int c0_ret = GetNumberOfMethodsnew(c0_a0);
     
    
    /* Harness function #1 */
    int c1_a0 = c0_ret; int c1_a1 = 0x3; VARIANTARG * c1_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c1_ret = GetMethodPropertynew(c1_a0, c1_a1, c1_a2);
     
    
    /* Harness function #2 */
     int c2_a1 = 0x2; VARIANTARG * c2_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c2_ret = GetMethodPropertynew(c1_a0, c2_a1, c2_a2);
     
    
    /* Harness function #3 */
     int c3_a1 = 0xa; VARIANTARG * c3_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c3_ret = GetMethodPropertynew(c1_a0, c3_a1, c3_a2);
     
    
    /* Harness function #4 */
    int c4_a0 = 0x1;  VARIANTARG * c4_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c4_ret = GetMethodPropertynew(c4_a0, c1_a1, c4_a2);
     
    
    /* Harness function #5 */
      VARIANTARG * c5_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c5_ret = GetMethodPropertynew(c4_a0, c2_a1, c5_a2);
     
    
    /* Harness function #6 */
      VARIANTARG * c6_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c6_ret = GetMethodPropertynew(c4_a0, c3_a1, c6_a2);
     
    
    /* Harness function #7 */
      VARIANTARG * c7_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c7_ret = GetMethodPropertynew(c2_a1, c1_a1, c7_a2);
     
    
    /* Harness function #8 */
      VARIANTARG * c8_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c8_ret = GetMethodPropertynew(c2_a1, c2_a1, c8_a2);
     
    
    /* Harness function #9 */
      VARIANTARG * c9_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c9_ret = GetMethodPropertynew(c2_a1, c3_a1, c9_a2);
     
    
    /* Harness function #10 */
      VARIANTARG * c10_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c10_ret = GetMethodPropertynew(c1_a1, c1_a1, c10_a2);
     
    
    /* Harness function #11 */
      VARIANTARG * c11_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c11_ret = GetMethodPropertynew(c1_a1, c2_a1, c11_a2);
     
    
    /* Harness function #12 */
      VARIANTARG * c12_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c12_ret = GetMethodPropertynew(c1_a1, c3_a1, c12_a2);
     
    
    /* Harness function #13 */
    int c13_a0 = 0x4;  VARIANTARG * c13_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c13_ret = GetMethodPropertynew(c13_a0, c1_a1, c13_a2);
     
    
    /* Harness function #14 */
      VARIANTARG * c14_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c14_ret = GetMethodPropertynew(c13_a0, c2_a1, c14_a2);
     
    
    /* Harness function #15 */
      VARIANTARG * c15_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c15_ret = GetMethodPropertynew(c13_a0, c3_a1, c15_a2);
     
    
    /* Harness function #16 */
    int c16_a0 = 0x5;  VARIANTARG * c16_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c16_ret = GetMethodPropertynew(c16_a0, c1_a1, c16_a2);
     
    
    /* Harness function #17 */
      VARIANTARG * c17_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c17_ret = GetMethodPropertynew(c16_a0, c2_a1, c17_a2);
     
    
    /* Harness function #18 */
      VARIANTARG * c18_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c18_ret = GetMethodPropertynew(c16_a0, c3_a1, c18_a2);
     
    
    /* Harness function #19 */
    int c19_a0 = 0x6;  VARIANTARG * c19_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c19_ret = GetMethodPropertynew(c19_a0, c1_a1, c19_a2);
     
    
    /* Harness function #20 */
      VARIANTARG * c20_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c20_ret = GetMethodPropertynew(c19_a0, c2_a1, c20_a2);
     
    
    /* Harness function #21 */
      VARIANTARG * c21_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c21_ret = GetMethodPropertynew(c19_a0, c3_a1, c21_a2);
     
    
    /* Harness function #22 */
    int c22_a0 = 0x7;  VARIANTARG * c22_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c22_ret = GetMethodPropertynew(c22_a0, c1_a1, c22_a2);
     
    
    /* Harness function #23 */
      VARIANTARG * c23_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c23_ret = GetMethodPropertynew(c22_a0, c2_a1, c23_a2);
     
    
    /* Harness function #24 */
      VARIANTARG * c24_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c24_ret = GetMethodPropertynew(c22_a0, c3_a1, c24_a2);
     
    
    /* Harness function #25 */
    int c25_a0 = 0x8;  VARIANTARG * c25_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c25_ret = GetMethodPropertynew(c25_a0, c1_a1, c25_a2);
     
    
    /* Harness function #26 */
      VARIANTARG * c26_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c26_ret = GetMethodPropertynew(c25_a0, c2_a1, c26_a2);
     
    
    /* Harness function #27 */
      VARIANTARG * c27_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c27_ret = GetMethodPropertynew(c25_a0, c3_a1, c27_a2);
     
    
    /* Harness function #28 */
    int c28_a0 = 0x9;  VARIANTARG * c28_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c28_ret = GetMethodPropertynew(c28_a0, c1_a1, c28_a2);
     
    
    /* Harness function #29 */
      VARIANTARG * c29_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c29_ret = GetMethodPropertynew(c28_a0, c2_a1, c29_a2);
     
    
    /* Harness function #30 */
      VARIANTARG * c30_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c30_ret = GetMethodPropertynew(c28_a0, c3_a1, c30_a2);
     
    
    /* Harness function #31 */
      VARIANTARG * c31_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c31_ret = GetMethodPropertynew(c3_a1, c1_a1, c31_a2);
     
    
    /* Harness function #32 */
      VARIANTARG * c32_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c32_ret = GetMethodPropertynew(c3_a1, c2_a1, c32_a2);
     
    
    /* Harness function #33 */
      VARIANTARG * c33_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c33_ret = GetMethodPropertynew(c3_a1, c3_a1, c33_a2);
     
    
    /* Harness function #34 */
    int c34_a0 = 0xb;  VARIANTARG * c34_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c34_ret = GetMethodPropertynew(c34_a0, c1_a1, c34_a2);
     
    
    /* Harness function #35 */
      VARIANTARG * c35_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c35_ret = GetMethodPropertynew(c34_a0, c2_a1, c35_a2);
     
    
    /* Harness function #36 */
      VARIANTARG * c36_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c36_ret = GetMethodPropertynew(c34_a0, c3_a1, c36_a2);
     
    
    /* Harness function #37 */
    int c37_a0 = 0xc;  VARIANTARG * c37_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c37_ret = GetMethodPropertynew(c37_a0, c1_a1, c37_a2);
     
    
    /* Harness function #38 */
      VARIANTARG * c38_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c38_ret = GetMethodPropertynew(c37_a0, c2_a1, c38_a2);
     
    
    /* Harness function #39 */
      VARIANTARG * c39_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c39_ret = GetMethodPropertynew(c37_a0, c3_a1, c39_a2);
     
    
    /* Harness function #40 */
    int c40_a0 = 0xd;  VARIANTARG * c40_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c40_ret = GetMethodPropertynew(c40_a0, c1_a1, c40_a2);
     
    
    /* Harness function #41 */
      VARIANTARG * c41_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c41_ret = GetMethodPropertynew(c40_a0, c2_a1, c41_a2);
     
    
    /* Harness function #42 */
      VARIANTARG * c42_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c42_ret = GetMethodPropertynew(c40_a0, c3_a1, c42_a2);
     
    
    /* Harness function #43 */
    int c43_a0 = 0xe;  VARIANTARG * c43_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c43_ret = GetMethodPropertynew(c43_a0, c1_a1, c43_a2);
     
    
    /* Harness function #44 */
      VARIANTARG * c44_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c44_ret = GetMethodPropertynew(c43_a0, c2_a1, c44_a2);
     
    
    /* Harness function #45 */
      VARIANTARG * c45_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c45_ret = GetMethodPropertynew(c43_a0, c3_a1, c45_a2);
     
    
    /* Harness function #46 */
    int c46_a0 = 0xf;  VARIANTARG * c46_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c46_ret = GetMethodPropertynew(c46_a0, c1_a1, c46_a2);
     
    
    /* Harness function #47 */
      VARIANTARG * c47_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c47_ret = GetMethodPropertynew(c46_a0, c2_a1, c47_a2);
     
    
    /* Harness function #48 */
      VARIANTARG * c48_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c48_ret = GetMethodPropertynew(c46_a0, c3_a1, c48_a2);
     
    
    /* Harness function #49 */
    int c49_a0 = 0x10;  VARIANTARG * c49_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c49_ret = GetMethodPropertynew(c49_a0, c1_a1, c49_a2);
     
    
    /* Harness function #50 */
      VARIANTARG * c50_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c50_ret = GetMethodPropertynew(c49_a0, c2_a1, c50_a2);
     
    
    /* Harness function #51 */
      VARIANTARG * c51_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c51_ret = GetMethodPropertynew(c49_a0, c3_a1, c51_a2);
     
    
    /* Harness function #52 */
    int c52_a0 = 0x11;  VARIANTARG * c52_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c52_ret = GetMethodPropertynew(c52_a0, c1_a1, c52_a2);
     
    
    /* Harness function #53 */
      VARIANTARG * c53_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c53_ret = GetMethodPropertynew(c52_a0, c2_a1, c53_a2);
     
    
    /* Harness function #54 */
      VARIANTARG * c54_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c54_ret = GetMethodPropertynew(c52_a0, c3_a1, c54_a2);
     
    
    /* Harness function #55 */
    int c55_a0 = 0x12;  VARIANTARG * c55_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c55_ret = GetMethodPropertynew(c55_a0, c1_a1, c55_a2);
     
    
    /* Harness function #56 */
      VARIANTARG * c56_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c56_ret = GetMethodPropertynew(c55_a0, c2_a1, c56_a2);
     
    
    /* Harness function #57 */
      VARIANTARG * c57_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c57_ret = GetMethodPropertynew(c55_a0, c3_a1, c57_a2);
     
    
    /* Harness function #58 */
    int c58_a0 = 0x13;  VARIANTARG * c58_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c58_ret = GetMethodPropertynew(c58_a0, c1_a1, c58_a2);
     
    
    /* Harness function #59 */
      VARIANTARG * c59_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c59_ret = GetMethodPropertynew(c58_a0, c2_a1, c59_a2);
     
    
    /* Harness function #60 */
      VARIANTARG * c60_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c60_ret = GetMethodPropertynew(c58_a0, c3_a1, c60_a2);
     
    
    /* Harness function #61 */
    int c61_a0 = 0x14;  VARIANTARG * c61_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c61_ret = GetMethodPropertynew(c61_a0, c1_a1, c61_a2);
     
    
    /* Harness function #62 */
      VARIANTARG * c62_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c62_ret = GetMethodPropertynew(c61_a0, c2_a1, c62_a2);
     
    
    /* Harness function #63 */
      VARIANTARG * c63_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c63_ret = GetMethodPropertynew(c61_a0, c3_a1, c63_a2);
     
    
    /* Harness function #64 */
    int c64_a0 = 0x15;  VARIANTARG * c64_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c64_ret = GetMethodPropertynew(c64_a0, c1_a1, c64_a2);
     
    
    /* Harness function #65 */
      VARIANTARG * c65_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c65_ret = GetMethodPropertynew(c64_a0, c2_a1, c65_a2);
     
    
    /* Harness function #66 */
      VARIANTARG * c66_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c66_ret = GetMethodPropertynew(c64_a0, c3_a1, c66_a2);
     
    
    /* Harness function #67 */
    int c67_a0 = 0x16;  VARIANTARG * c67_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c67_ret = GetMethodPropertynew(c67_a0, c1_a1, c67_a2);
     
    
    /* Harness function #68 */
      VARIANTARG * c68_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c68_ret = GetMethodPropertynew(c67_a0, c2_a1, c68_a2);
     
    
    /* Harness function #69 */
      VARIANTARG * c69_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c69_ret = GetMethodPropertynew(c67_a0, c3_a1, c69_a2);
     
    
    /* Harness function #70 */
    int c70_a0 = 0xf011954;    
    int c70_ret = GetHashersnew(c70_a0);
     
    
    /* Harness function #71 */
    int c71_a0 = 0xf011a28;    
    int c71_ret = sub_100BFD50new(c71_a0);
     
    
    /* Harness function #72 */    
    int c72_ret = GetNumberOfFormatsnew(*((int*)c1_a2[92]));
     
    
    /* Harness function #73 */
      VARIANTARG * c73_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c73_ret = GetHandlerProperty2new(c1_a0, c1_a0, c73_a2);
     
    
    /* Harness function #74 */
      VARIANTARG * c74_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c74_ret = GetHandlerProperty2new(c1_a0, c4_a0, c74_a2);
     
    
    /* Harness function #75 */
      VARIANTARG * c75_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c75_ret = GetHandlerProperty2new(c1_a0, c2_a1, c75_a2);
     
    
    /* Harness function #76 */
      VARIANTARG * c76_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c76_ret = GetHandlerProperty2new(c1_a0, c1_a1, c76_a2);
     
    
    /* Harness function #77 */
      VARIANTARG * c77_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c77_ret = GetHandlerProperty2new(c1_a0, c13_a0, c77_a2);
     
    
    /* Harness function #78 */
      VARIANTARG * c78_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c78_ret = GetHandlerProperty2new(c1_a0, c34_a0, c78_a2);
     
    
    /* Harness function #79 */
      VARIANTARG * c79_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c79_ret = GetHandlerProperty2new(c1_a0, c37_a0, c79_a2);
     
    
    /* Harness function #80 */
      VARIANTARG * c80_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c80_ret = GetHandlerProperty2new(c1_a0, c19_a0, c80_a2);
     
    
    /* Harness function #81 */
      VARIANTARG * c81_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c81_ret = GetHandlerProperty2new(c1_a0, c25_a0, c81_a2);
     
    
    /* Harness function #82 */
     int c82_a1 = 0x19f718;    
    int c82_ret = GetIsArcnew(c1_a0, c82_a1);
     
    
    /* Harness function #83 */
      VARIANTARG * c83_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c83_ret = GetHandlerProperty2new(c4_a0, c1_a0, c83_a2);
     
    
    /* Harness function #84 */
      VARIANTARG * c84_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c84_ret = GetHandlerProperty2new(c4_a0, c4_a0, c84_a2);
     
    
    /* Harness function #85 */
      VARIANTARG * c85_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c85_ret = GetHandlerProperty2new(c4_a0, c2_a1, c85_a2);
     
    
    /* Harness function #86 */
      VARIANTARG * c86_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c86_ret = GetHandlerProperty2new(c4_a0, c1_a1, c86_a2);
     
    
    /* Harness function #87 */
      VARIANTARG * c87_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c87_ret = GetHandlerProperty2new(c4_a0, c13_a0, c87_a2);
     
    
    /* Harness function #88 */
      VARIANTARG * c88_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c88_ret = GetHandlerProperty2new(c4_a0, c34_a0, c88_a2);
     
    
    /* Harness function #89 */
      VARIANTARG * c89_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c89_ret = GetHandlerProperty2new(c4_a0, c37_a0, c89_a2);
     
    
    /* Harness function #90 */
      VARIANTARG * c90_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c90_ret = GetHandlerProperty2new(c4_a0, c19_a0, c90_a2);
     
    
    /* Harness function #91 */
      VARIANTARG * c91_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c91_ret = GetHandlerProperty2new(c4_a0, c25_a0, c91_a2);
     
    
    /* Harness function #92 */    
    int c92_ret = GetIsArcnew(c4_a0, c82_a1);
     
    
    /* Harness function #93 */
      VARIANTARG * c93_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c93_ret = GetHandlerProperty2new(c2_a1, c1_a0, c93_a2);
     
    
    /* Harness function #94 */
      VARIANTARG * c94_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c94_ret = GetHandlerProperty2new(c2_a1, c4_a0, c94_a2);
     
    
    /* Harness function #95 */
      VARIANTARG * c95_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c95_ret = GetHandlerProperty2new(c2_a1, c2_a1, c95_a2);
     
    
    /* Harness function #96 */
      VARIANTARG * c96_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c96_ret = GetHandlerProperty2new(c2_a1, c1_a1, c96_a2);
     
    
    /* Harness function #97 */
      VARIANTARG * c97_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c97_ret = GetHandlerProperty2new(c2_a1, c13_a0, c97_a2);
     
    
    /* Harness function #98 */
      VARIANTARG * c98_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c98_ret = GetHandlerProperty2new(c2_a1, c34_a0, c98_a2);
     
    
    /* Harness function #99 */
      VARIANTARG * c99_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c99_ret = GetHandlerProperty2new(c2_a1, c37_a0, c99_a2);
     
    
    /* Harness function #100 */
      VARIANTARG * c100_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c100_ret = GetHandlerProperty2new(c2_a1, c19_a0, c100_a2);
     
    
    /* Harness function #101 */
      VARIANTARG * c101_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c101_ret = GetHandlerProperty2new(c2_a1, c25_a0, c101_a2);
     
    
    /* Harness function #102 */    
    int c102_ret = GetIsArcnew(c2_a1, c82_a1);
     
    
    /* Harness function #103 */
      VARIANTARG * c103_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c103_ret = GetHandlerProperty2new(c1_a1, c1_a0, c103_a2);
     
    
    /* Harness function #104 */
      VARIANTARG * c104_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c104_ret = GetHandlerProperty2new(c1_a1, c4_a0, c104_a2);
     
    
    /* Harness function #105 */
      VARIANTARG * c105_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c105_ret = GetHandlerProperty2new(c1_a1, c2_a1, c105_a2);
     
    
    /* Harness function #106 */
      VARIANTARG * c106_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c106_ret = GetHandlerProperty2new(c1_a1, c1_a1, c106_a2);
     
    
    /* Harness function #107 */
      VARIANTARG * c107_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c107_ret = GetHandlerProperty2new(c1_a1, c13_a0, c107_a2);
     
    
    /* Harness function #108 */
      VARIANTARG * c108_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c108_ret = GetHandlerProperty2new(c1_a1, c34_a0, c108_a2);
     
    
    /* Harness function #109 */
      VARIANTARG * c109_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c109_ret = GetHandlerProperty2new(c1_a1, c37_a0, c109_a2);
     
    
    /* Harness function #110 */
      VARIANTARG * c110_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c110_ret = GetHandlerProperty2new(c1_a1, c19_a0, c110_a2);
     
    
    /* Harness function #111 */
      VARIANTARG * c111_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c111_ret = GetHandlerProperty2new(c1_a1, c25_a0, c111_a2);
     
    
    /* Harness function #112 */    
    int c112_ret = GetIsArcnew(c1_a1, c82_a1);
     
    
    /* Harness function #113 */
      VARIANTARG * c113_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c113_ret = GetHandlerProperty2new(c13_a0, c1_a0, c113_a2);
     
    
    /* Harness function #114 */
      VARIANTARG * c114_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c114_ret = GetHandlerProperty2new(c13_a0, c4_a0, c114_a2);
     
    
    /* Harness function #115 */
      VARIANTARG * c115_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c115_ret = GetHandlerProperty2new(c13_a0, c2_a1, c115_a2);
     
    
    /* Harness function #116 */
      VARIANTARG * c116_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c116_ret = GetHandlerProperty2new(c13_a0, c1_a1, c116_a2);
     
    
    /* Harness function #117 */
      VARIANTARG * c117_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c117_ret = GetHandlerProperty2new(c13_a0, c13_a0, c117_a2);
     
    
    /* Harness function #118 */
      VARIANTARG * c118_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c118_ret = GetHandlerProperty2new(c13_a0, c34_a0, c118_a2);
     
    
    /* Harness function #119 */
      VARIANTARG * c119_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c119_ret = GetHandlerProperty2new(c13_a0, c37_a0, c119_a2);
     
    
    /* Harness function #120 */
      VARIANTARG * c120_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c120_ret = GetHandlerProperty2new(c13_a0, c19_a0, c120_a2);
     
    
    /* Harness function #121 */
      VARIANTARG * c121_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c121_ret = GetHandlerProperty2new(c13_a0, c22_a0, c121_a2);
     
    
    /* Harness function #122 */
      VARIANTARG * c122_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c122_ret = GetHandlerProperty2new(c13_a0, c25_a0, c122_a2);
     
    
    /* Harness function #123 */    
    int c123_ret = GetIsArcnew(c13_a0, c82_a1);
     
    
    /* Harness function #124 */
      VARIANTARG * c124_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c124_ret = GetHandlerProperty2new(c16_a0, c1_a0, c124_a2);
     
    
    /* Harness function #125 */
      VARIANTARG * c125_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c125_ret = GetHandlerProperty2new(c16_a0, c4_a0, c125_a2);
     
    
    /* Harness function #126 */
      VARIANTARG * c126_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c126_ret = GetHandlerProperty2new(c16_a0, c2_a1, c126_a2);
     
    
    /* Harness function #127 */
      VARIANTARG * c127_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c127_ret = GetHandlerProperty2new(c16_a0, c1_a1, c127_a2);
     
    
    /* Harness function #128 */
      VARIANTARG * c128_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c128_ret = GetHandlerProperty2new(c16_a0, c13_a0, c128_a2);
     
    
    /* Harness function #129 */
      VARIANTARG * c129_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c129_ret = GetHandlerProperty2new(c16_a0, c34_a0, c129_a2);
     
    
    /* Harness function #130 */
      VARIANTARG * c130_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c130_ret = GetHandlerProperty2new(c16_a0, c37_a0, c130_a2);
     
    
    /* Harness function #131 */
      VARIANTARG * c131_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c131_ret = GetHandlerProperty2new(c16_a0, c19_a0, c131_a2);
     
    
    /* Harness function #132 */
      VARIANTARG * c132_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c132_ret = GetHandlerProperty2new(c16_a0, c25_a0, c132_a2);
     
    
    /* Harness function #133 */    
    int c133_ret = GetIsArcnew(c16_a0, c82_a1);
     
    
    /* Harness function #134 */
      VARIANTARG * c134_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c134_ret = GetHandlerProperty2new(c19_a0, c1_a0, c134_a2);
     
    
    /* Harness function #135 */
      VARIANTARG * c135_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c135_ret = GetHandlerProperty2new(c19_a0, c4_a0, c135_a2);
     
    
    /* Harness function #136 */
      VARIANTARG * c136_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c136_ret = GetHandlerProperty2new(c19_a0, c2_a1, c136_a2);
     
    
    /* Harness function #137 */
      VARIANTARG * c137_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c137_ret = GetHandlerProperty2new(c19_a0, c1_a1, c137_a2);
     
    
    /* Harness function #138 */
      VARIANTARG * c138_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c138_ret = GetHandlerProperty2new(c19_a0, c13_a0, c138_a2);
     
    
    /* Harness function #139 */
      VARIANTARG * c139_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c139_ret = GetHandlerProperty2new(c19_a0, c34_a0, c139_a2);
     
    
    /* Harness function #140 */
      VARIANTARG * c140_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c140_ret = GetHandlerProperty2new(c19_a0, c37_a0, c140_a2);
     
    
    /* Harness function #141 */
      VARIANTARG * c141_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c141_ret = GetHandlerProperty2new(c19_a0, c19_a0, c141_a2);
     
    
    /* Harness function #142 */
      VARIANTARG * c142_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c142_ret = GetHandlerProperty2new(c19_a0, c25_a0, c142_a2);
     
    
    /* Harness function #143 */    
    int c143_ret = GetIsArcnew(c19_a0, c82_a1);
     
    
    /* Harness function #144 */
      VARIANTARG * c144_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c144_ret = GetHandlerProperty2new(c22_a0, c1_a0, c144_a2);
     
    
    /* Harness function #145 */
      VARIANTARG * c145_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c145_ret = GetHandlerProperty2new(c22_a0, c4_a0, c145_a2);
     
    
    /* Harness function #146 */
      VARIANTARG * c146_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c146_ret = GetHandlerProperty2new(c22_a0, c2_a1, c146_a2);
     
    
    /* Harness function #147 */
      VARIANTARG * c147_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c147_ret = GetHandlerProperty2new(c22_a0, c1_a1, c147_a2);
     
    
    /* Harness function #148 */
      VARIANTARG * c148_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c148_ret = GetHandlerProperty2new(c22_a0, c13_a0, c148_a2);
     
    
    /* Harness function #149 */
      VARIANTARG * c149_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c149_ret = GetHandlerProperty2new(c22_a0, c34_a0, c149_a2);
     
    
    /* Harness function #150 */
      VARIANTARG * c150_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c150_ret = GetHandlerProperty2new(c22_a0, c37_a0, c150_a2);
     
    
    /* Harness function #151 */
      VARIANTARG * c151_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c151_ret = GetHandlerProperty2new(c22_a0, c19_a0, c151_a2);
     
    
    /* Harness function #152 */
      VARIANTARG * c152_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c152_ret = GetHandlerProperty2new(c22_a0, c22_a0, c152_a2);
     
    
    /* Harness function #153 */
      VARIANTARG * c153_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c153_ret = GetHandlerProperty2new(c22_a0, c25_a0, c153_a2);
     
    
    /* Harness function #154 */    
    int c154_ret = GetIsArcnew(c22_a0, c82_a1);
     
    
    /* Harness function #155 */
      VARIANTARG * c155_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c155_ret = GetHandlerProperty2new(c25_a0, c1_a0, c155_a2);
     
    
    /* Harness function #156 */
      VARIANTARG * c156_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c156_ret = GetHandlerProperty2new(c25_a0, c4_a0, c156_a2);
     
    
    /* Harness function #157 */
      VARIANTARG * c157_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c157_ret = GetHandlerProperty2new(c25_a0, c2_a1, c157_a2);
     
    
    /* Harness function #158 */
      VARIANTARG * c158_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c158_ret = GetHandlerProperty2new(c25_a0, c1_a1, c158_a2);
     
    
    /* Harness function #159 */
      VARIANTARG * c159_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c159_ret = GetHandlerProperty2new(c25_a0, c13_a0, c159_a2);
     
    
    /* Harness function #160 */
      VARIANTARG * c160_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c160_ret = GetHandlerProperty2new(c25_a0, c34_a0, c160_a2);
     
    
    /* Harness function #161 */
      VARIANTARG * c161_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c161_ret = GetHandlerProperty2new(c25_a0, c37_a0, c161_a2);
     
    
    /* Harness function #162 */
      VARIANTARG * c162_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c162_ret = GetHandlerProperty2new(c25_a0, c19_a0, c162_a2);
     
    
    /* Harness function #163 */
      VARIANTARG * c163_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c163_ret = GetHandlerProperty2new(c25_a0, c25_a0, c163_a2);
     
    
    /* Harness function #164 */    
    int c164_ret = GetIsArcnew(c25_a0, c82_a1);
     
    
    /* Harness function #165 */
      VARIANTARG * c165_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c165_ret = GetHandlerProperty2new(c28_a0, c1_a0, c165_a2);
     
    
    /* Harness function #166 */
      VARIANTARG * c166_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c166_ret = GetHandlerProperty2new(c28_a0, c4_a0, c166_a2);
     
    
    /* Harness function #167 */
      VARIANTARG * c167_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c167_ret = GetHandlerProperty2new(c28_a0, c2_a1, c167_a2);
     
    
    /* Harness function #168 */
      VARIANTARG * c168_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c168_ret = GetHandlerProperty2new(c28_a0, c1_a1, c168_a2);
     
    
    /* Harness function #169 */
      VARIANTARG * c169_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c169_ret = GetHandlerProperty2new(c28_a0, c13_a0, c169_a2);
     
    
    /* Harness function #170 */
      VARIANTARG * c170_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c170_ret = GetHandlerProperty2new(c28_a0, c34_a0, c170_a2);
     
    
    /* Harness function #171 */
      VARIANTARG * c171_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c171_ret = GetHandlerProperty2new(c28_a0, c37_a0, c171_a2);
     
    
    /* Harness function #172 */
      VARIANTARG * c172_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c172_ret = GetHandlerProperty2new(c28_a0, c19_a0, c172_a2);
     
    
    /* Harness function #173 */
      VARIANTARG * c173_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c173_ret = GetHandlerProperty2new(c28_a0, c25_a0, c173_a2);
     
    
    /* Harness function #174 */    
    int c174_ret = GetIsArcnew(c28_a0, c82_a1);
     
    
    /* Harness function #175 */
      VARIANTARG * c175_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c175_ret = GetHandlerProperty2new(c3_a1, c1_a0, c175_a2);
     
    
    /* Harness function #176 */
      VARIANTARG * c176_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c176_ret = GetHandlerProperty2new(c3_a1, c4_a0, c176_a2);
     
    
    /* Harness function #177 */
      VARIANTARG * c177_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c177_ret = GetHandlerProperty2new(c3_a1, c2_a1, c177_a2);
     
    
    /* Harness function #178 */
      VARIANTARG * c178_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c178_ret = GetHandlerProperty2new(c3_a1, c1_a1, c178_a2);
     
    
    /* Harness function #179 */
      VARIANTARG * c179_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c179_ret = GetHandlerProperty2new(c3_a1, c13_a0, c179_a2);
     
    
    /* Harness function #180 */
      VARIANTARG * c180_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c180_ret = GetHandlerProperty2new(c3_a1, c34_a0, c180_a2);
     
    
    /* Harness function #181 */
      VARIANTARG * c181_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c181_ret = GetHandlerProperty2new(c3_a1, c37_a0, c181_a2);
     
    
    /* Harness function #182 */
      VARIANTARG * c182_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c182_ret = GetHandlerProperty2new(c3_a1, c19_a0, c182_a2);
     
    
    /* Harness function #183 */
      VARIANTARG * c183_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c183_ret = GetHandlerProperty2new(c3_a1, c25_a0, c183_a2);
     
    
    /* Harness function #184 */    
    int c184_ret = GetIsArcnew(c3_a1, c82_a1);
     
    
    /* Harness function #185 */
      VARIANTARG * c185_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c185_ret = GetHandlerProperty2new(c34_a0, c1_a0, c185_a2);
     
    
    /* Harness function #186 */
      VARIANTARG * c186_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c186_ret = GetHandlerProperty2new(c34_a0, c4_a0, c186_a2);
     
    
    /* Harness function #187 */
      VARIANTARG * c187_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c187_ret = GetHandlerProperty2new(c34_a0, c2_a1, c187_a2);
     
    
    /* Harness function #188 */
      VARIANTARG * c188_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c188_ret = GetHandlerProperty2new(c34_a0, c1_a1, c188_a2);
     
    
    /* Harness function #189 */
      VARIANTARG * c189_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c189_ret = GetHandlerProperty2new(c34_a0, c13_a0, c189_a2);
     
    
    /* Harness function #190 */
      VARIANTARG * c190_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c190_ret = GetHandlerProperty2new(c34_a0, c34_a0, c190_a2);
     
    
    /* Harness function #191 */
      VARIANTARG * c191_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c191_ret = GetHandlerProperty2new(c34_a0, c37_a0, c191_a2);
     
    
    /* Harness function #192 */
      VARIANTARG * c192_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c192_ret = GetHandlerProperty2new(c34_a0, c19_a0, c192_a2);
     
    
    /* Harness function #193 */
      VARIANTARG * c193_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c193_ret = GetHandlerProperty2new(c34_a0, c25_a0, c193_a2);
     
    
    /* Harness function #194 */    
    int c194_ret = GetIsArcnew(c34_a0, c82_a1);
     
    
    /* Harness function #195 */
      VARIANTARG * c195_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c195_ret = GetHandlerProperty2new(c37_a0, c1_a0, c195_a2);
     
    
    /* Harness function #196 */
      VARIANTARG * c196_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c196_ret = GetHandlerProperty2new(c37_a0, c4_a0, c196_a2);
     
    
    /* Harness function #197 */
      VARIANTARG * c197_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c197_ret = GetHandlerProperty2new(c37_a0, c2_a1, c197_a2);
     
    
    /* Harness function #198 */
      VARIANTARG * c198_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c198_ret = GetHandlerProperty2new(c37_a0, c1_a1, c198_a2);
     
    
    /* Harness function #199 */
      VARIANTARG * c199_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c199_ret = GetHandlerProperty2new(c37_a0, c13_a0, c199_a2);
     
    
    /* Harness function #200 */
      VARIANTARG * c200_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c200_ret = GetHandlerProperty2new(c37_a0, c34_a0, c200_a2);
     
    
    /* Harness function #201 */
      VARIANTARG * c201_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c201_ret = GetHandlerProperty2new(c37_a0, c37_a0, c201_a2);
     
    
    /* Harness function #202 */
      VARIANTARG * c202_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c202_ret = GetHandlerProperty2new(c37_a0, c19_a0, c202_a2);
     
    
    /* Harness function #203 */
      VARIANTARG * c203_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c203_ret = GetHandlerProperty2new(c37_a0, c25_a0, c203_a2);
     
    
    /* Harness function #204 */    
    int c204_ret = GetIsArcnew(c37_a0, c82_a1);
     
    
    /* Harness function #205 */
      VARIANTARG * c205_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c205_ret = GetHandlerProperty2new(c40_a0, c1_a0, c205_a2);
     
    
    /* Harness function #206 */
      VARIANTARG * c206_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c206_ret = GetHandlerProperty2new(c40_a0, c4_a0, c206_a2);
     
    
    /* Harness function #207 */
      VARIANTARG * c207_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c207_ret = GetHandlerProperty2new(c40_a0, c2_a1, c207_a2);
     
    
    /* Harness function #208 */
      VARIANTARG * c208_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c208_ret = GetHandlerProperty2new(c40_a0, c1_a1, c208_a2);
     
    
    /* Harness function #209 */
      VARIANTARG * c209_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c209_ret = GetHandlerProperty2new(c40_a0, c13_a0, c209_a2);
     
    
    /* Harness function #210 */
      VARIANTARG * c210_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c210_ret = GetHandlerProperty2new(c40_a0, c34_a0, c210_a2);
     
    
    /* Harness function #211 */
      VARIANTARG * c211_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c211_ret = GetHandlerProperty2new(c40_a0, c37_a0, c211_a2);
     
    
    /* Harness function #212 */
      VARIANTARG * c212_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c212_ret = GetHandlerProperty2new(c40_a0, c19_a0, c212_a2);
     
    
    /* Harness function #213 */
      VARIANTARG * c213_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c213_ret = GetHandlerProperty2new(c40_a0, c25_a0, c213_a2);
     
    
    /* Harness function #214 */    
    int c214_ret = GetIsArcnew(c40_a0, c82_a1);
     
    
    /* Harness function #215 */
      VARIANTARG * c215_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c215_ret = GetHandlerProperty2new(c43_a0, c1_a0, c215_a2);
     
    
    /* Harness function #216 */
      VARIANTARG * c216_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c216_ret = GetHandlerProperty2new(c43_a0, c4_a0, c216_a2);
     
    
    /* Harness function #217 */
      VARIANTARG * c217_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c217_ret = GetHandlerProperty2new(c43_a0, c2_a1, c217_a2);
     
    
    /* Harness function #218 */
      VARIANTARG * c218_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c218_ret = GetHandlerProperty2new(c43_a0, c1_a1, c218_a2);
     
    
    /* Harness function #219 */
      VARIANTARG * c219_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c219_ret = GetHandlerProperty2new(c43_a0, c13_a0, c219_a2);
     
    
    /* Harness function #220 */
      VARIANTARG * c220_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c220_ret = GetHandlerProperty2new(c43_a0, c34_a0, c220_a2);
     
    
    /* Harness function #221 */
      VARIANTARG * c221_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c221_ret = GetHandlerProperty2new(c43_a0, c37_a0, c221_a2);
     
    
    /* Harness function #222 */
      VARIANTARG * c222_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c222_ret = GetHandlerProperty2new(c43_a0, c19_a0, c222_a2);
     
    
    /* Harness function #223 */
      VARIANTARG * c223_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c223_ret = GetHandlerProperty2new(c43_a0, c25_a0, c223_a2);
     
    
    /* Harness function #224 */    
    int c224_ret = GetIsArcnew(c43_a0, c82_a1);
     
    
    /* Harness function #225 */
      VARIANTARG * c225_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c225_ret = GetHandlerProperty2new(c46_a0, c1_a0, c225_a2);
     
    
    /* Harness function #226 */
      VARIANTARG * c226_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c226_ret = GetHandlerProperty2new(c46_a0, c4_a0, c226_a2);
     
    
    /* Harness function #227 */
      VARIANTARG * c227_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c227_ret = GetHandlerProperty2new(c46_a0, c2_a1, c227_a2);
     
    
    /* Harness function #228 */
      VARIANTARG * c228_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c228_ret = GetHandlerProperty2new(c46_a0, c1_a1, c228_a2);
     
    
    /* Harness function #229 */
      VARIANTARG * c229_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c229_ret = GetHandlerProperty2new(c46_a0, c13_a0, c229_a2);
     
    
    /* Harness function #230 */
      VARIANTARG * c230_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c230_ret = GetHandlerProperty2new(c46_a0, c34_a0, c230_a2);
     
    
    /* Harness function #231 */
      VARIANTARG * c231_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c231_ret = GetHandlerProperty2new(c46_a0, c37_a0, c231_a2);
     
    
    /* Harness function #232 */
      VARIANTARG * c232_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c232_ret = GetHandlerProperty2new(c46_a0, c19_a0, c232_a2);
     
    
    /* Harness function #233 */
      VARIANTARG * c233_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c233_ret = GetHandlerProperty2new(c46_a0, c25_a0, c233_a2);
     
    
    /* Harness function #234 */    
    int c234_ret = GetIsArcnew(c46_a0, c82_a1);
     
    
    /* Harness function #235 */
      VARIANTARG * c235_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c235_ret = GetHandlerProperty2new(c49_a0, c1_a0, c235_a2);
     
    
    /* Harness function #236 */
      VARIANTARG * c236_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c236_ret = GetHandlerProperty2new(c49_a0, c4_a0, c236_a2);
     
    
    /* Harness function #237 */
      VARIANTARG * c237_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c237_ret = GetHandlerProperty2new(c49_a0, c2_a1, c237_a2);
     
    
    /* Harness function #238 */
      VARIANTARG * c238_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c238_ret = GetHandlerProperty2new(c49_a0, c1_a1, c238_a2);
     
    
    /* Harness function #239 */
      VARIANTARG * c239_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c239_ret = GetHandlerProperty2new(c49_a0, c13_a0, c239_a2);
     
    
    /* Harness function #240 */
      VARIANTARG * c240_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c240_ret = GetHandlerProperty2new(c49_a0, c34_a0, c240_a2);
     
    
    /* Harness function #241 */
      VARIANTARG * c241_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c241_ret = GetHandlerProperty2new(c49_a0, c37_a0, c241_a2);
     
    
    /* Harness function #242 */
      VARIANTARG * c242_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c242_ret = GetHandlerProperty2new(c49_a0, c19_a0, c242_a2);
     
    
    /* Harness function #243 */
      VARIANTARG * c243_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c243_ret = GetHandlerProperty2new(c49_a0, c22_a0, c243_a2);
     
    
    /* Harness function #244 */
      VARIANTARG * c244_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c244_ret = GetHandlerProperty2new(c49_a0, c25_a0, c244_a2);
     
    
    /* Harness function #245 */    
    int c245_ret = GetIsArcnew(c49_a0, c82_a1);
     
    
    /* Harness function #246 */
      VARIANTARG * c246_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c246_ret = GetHandlerProperty2new(c52_a0, c1_a0, c246_a2);
     
    
    /* Harness function #247 */
      VARIANTARG * c247_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c247_ret = GetHandlerProperty2new(c52_a0, c4_a0, c247_a2);
     
    
    /* Harness function #248 */
      VARIANTARG * c248_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c248_ret = GetHandlerProperty2new(c52_a0, c2_a1, c248_a2);
     
    
    /* Harness function #249 */
      VARIANTARG * c249_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c249_ret = GetHandlerProperty2new(c52_a0, c1_a1, c249_a2);
     
    
    /* Harness function #250 */
      VARIANTARG * c250_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c250_ret = GetHandlerProperty2new(c52_a0, c13_a0, c250_a2);
     
    
    /* Harness function #251 */
      VARIANTARG * c251_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c251_ret = GetHandlerProperty2new(c52_a0, c34_a0, c251_a2);
     
    
    /* Harness function #252 */
      VARIANTARG * c252_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c252_ret = GetHandlerProperty2new(c52_a0, c37_a0, c252_a2);
     
    
    /* Harness function #253 */
      VARIANTARG * c253_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c253_ret = GetHandlerProperty2new(c52_a0, c19_a0, c253_a2);
     
    
    /* Harness function #254 */
      VARIANTARG * c254_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c254_ret = GetHandlerProperty2new(c52_a0, c22_a0, c254_a2);
     
    
    /* Harness function #255 */
      VARIANTARG * c255_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c255_ret = GetHandlerProperty2new(c52_a0, c25_a0, c255_a2);
     
    
    /* Harness function #256 */    
    int c256_ret = GetIsArcnew(c52_a0, c82_a1);
     
    
    /* Harness function #257 */
      VARIANTARG * c257_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c257_ret = GetHandlerProperty2new(c55_a0, c1_a0, c257_a2);
     
    
    /* Harness function #258 */
      VARIANTARG * c258_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c258_ret = GetHandlerProperty2new(c55_a0, c4_a0, c258_a2);
     
    
    /* Harness function #259 */
      VARIANTARG * c259_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c259_ret = GetHandlerProperty2new(c55_a0, c2_a1, c259_a2);
     
    
    /* Harness function #260 */
      VARIANTARG * c260_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c260_ret = GetHandlerProperty2new(c55_a0, c1_a1, c260_a2);
     
    
    /* Harness function #261 */
      VARIANTARG * c261_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c261_ret = GetHandlerProperty2new(c55_a0, c13_a0, c261_a2);
     
    
    /* Harness function #262 */
      VARIANTARG * c262_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c262_ret = GetHandlerProperty2new(c55_a0, c34_a0, c262_a2);
     
    
    /* Harness function #263 */
      VARIANTARG * c263_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c263_ret = GetHandlerProperty2new(c55_a0, c37_a0, c263_a2);
     
    
    /* Harness function #264 */
      VARIANTARG * c264_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c264_ret = GetHandlerProperty2new(c55_a0, c19_a0, c264_a2);
     
    
    /* Harness function #265 */
      VARIANTARG * c265_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c265_ret = GetHandlerProperty2new(c55_a0, c25_a0, c265_a2);
     
    
    /* Harness function #266 */    
    int c266_ret = GetIsArcnew(c55_a0, c82_a1);
     
    
    /* Harness function #267 */
      VARIANTARG * c267_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c267_ret = GetHandlerProperty2new(c58_a0, c1_a0, c267_a2);
     
    
    /* Harness function #268 */
      VARIANTARG * c268_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c268_ret = GetHandlerProperty2new(c58_a0, c4_a0, c268_a2);
     
    
    /* Harness function #269 */
      VARIANTARG * c269_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c269_ret = GetHandlerProperty2new(c58_a0, c2_a1, c269_a2);
     
    
    /* Harness function #270 */
      VARIANTARG * c270_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c270_ret = GetHandlerProperty2new(c58_a0, c1_a1, c270_a2);
     
    
    /* Harness function #271 */
      VARIANTARG * c271_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c271_ret = GetHandlerProperty2new(c58_a0, c13_a0, c271_a2);
     
    
    /* Harness function #272 */
      VARIANTARG * c272_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c272_ret = GetHandlerProperty2new(c58_a0, c34_a0, c272_a2);
     
    
    /* Harness function #273 */
      VARIANTARG * c273_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c273_ret = GetHandlerProperty2new(c58_a0, c37_a0, c273_a2);
     
    
    /* Harness function #274 */
      VARIANTARG * c274_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c274_ret = GetHandlerProperty2new(c58_a0, c19_a0, c274_a2);
     
    
    /* Harness function #275 */
      VARIANTARG * c275_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c275_ret = GetHandlerProperty2new(c58_a0, c25_a0, c275_a2);
     
    
    /* Harness function #276 */    
    int c276_ret = GetIsArcnew(c58_a0, c82_a1);
     
    
    /* Harness function #277 */
      VARIANTARG * c277_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c277_ret = GetHandlerProperty2new(c61_a0, c1_a0, c277_a2);
     
    
    /* Harness function #278 */
      VARIANTARG * c278_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c278_ret = GetHandlerProperty2new(c61_a0, c4_a0, c278_a2);
     
    
    /* Harness function #279 */
      VARIANTARG * c279_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c279_ret = GetHandlerProperty2new(c61_a0, c2_a1, c279_a2);
     
    
    /* Harness function #280 */
      VARIANTARG * c280_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c280_ret = GetHandlerProperty2new(c61_a0, c1_a1, c280_a2);
     
    
    /* Harness function #281 */
      VARIANTARG * c281_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c281_ret = GetHandlerProperty2new(c61_a0, c13_a0, c281_a2);
     
    
    /* Harness function #282 */
      VARIANTARG * c282_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c282_ret = GetHandlerProperty2new(c61_a0, c34_a0, c282_a2);
     
    
    /* Harness function #283 */
      VARIANTARG * c283_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c283_ret = GetHandlerProperty2new(c61_a0, c37_a0, c283_a2);
     
    
    /* Harness function #284 */
      VARIANTARG * c284_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c284_ret = GetHandlerProperty2new(c61_a0, c19_a0, c284_a2);
     
    
    /* Harness function #285 */
      VARIANTARG * c285_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c285_ret = GetHandlerProperty2new(c61_a0, c22_a0, c285_a2);
     
    
    /* Harness function #286 */
      VARIANTARG * c286_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c286_ret = GetHandlerProperty2new(c61_a0, c25_a0, c286_a2);
     
    
    /* Harness function #287 */    
    int c287_ret = GetIsArcnew(c61_a0, c82_a1);
     
    
    /* Harness function #288 */
      VARIANTARG * c288_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c288_ret = GetHandlerProperty2new(c64_a0, c1_a0, c288_a2);
     
    
    /* Harness function #289 */
      VARIANTARG * c289_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c289_ret = GetHandlerProperty2new(c64_a0, c4_a0, c289_a2);
     
    
    /* Harness function #290 */
      VARIANTARG * c290_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c290_ret = GetHandlerProperty2new(c64_a0, c2_a1, c290_a2);
     
    
    /* Harness function #291 */
      VARIANTARG * c291_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c291_ret = GetHandlerProperty2new(c64_a0, c1_a1, c291_a2);
     
    
    /* Harness function #292 */
      VARIANTARG * c292_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c292_ret = GetHandlerProperty2new(c64_a0, c13_a0, c292_a2);
     
    
    /* Harness function #293 */
      VARIANTARG * c293_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c293_ret = GetHandlerProperty2new(c64_a0, c34_a0, c293_a2);
     
    
    /* Harness function #294 */
      VARIANTARG * c294_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c294_ret = GetHandlerProperty2new(c64_a0, c37_a0, c294_a2);
     
    
    /* Harness function #295 */
      VARIANTARG * c295_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c295_ret = GetHandlerProperty2new(c64_a0, c19_a0, c295_a2);
     
    
    /* Harness function #296 */
      VARIANTARG * c296_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c296_ret = GetHandlerProperty2new(c64_a0, c22_a0, c296_a2);
     
    
    /* Harness function #297 */
      VARIANTARG * c297_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c297_ret = GetHandlerProperty2new(c64_a0, c25_a0, c297_a2);
     
    
    /* Harness function #298 */    
    int c298_ret = GetIsArcnew(c64_a0, c82_a1);
     
    
    /* Harness function #299 */
      VARIANTARG * c299_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c299_ret = GetHandlerProperty2new(c67_a0, c1_a0, c299_a2);
     
    
    /* Harness function #300 */
      VARIANTARG * c300_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c300_ret = GetHandlerProperty2new(c67_a0, c4_a0, c300_a2);
     
    
    /* Harness function #301 */
      VARIANTARG * c301_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c301_ret = GetHandlerProperty2new(c67_a0, c2_a1, c301_a2);
     
    
    /* Harness function #302 */
      VARIANTARG * c302_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c302_ret = GetHandlerProperty2new(c67_a0, c1_a1, c302_a2);
     
    
    /* Harness function #303 */
      VARIANTARG * c303_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c303_ret = GetHandlerProperty2new(c67_a0, c13_a0, c303_a2);
     
    
    /* Harness function #304 */
      VARIANTARG * c304_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c304_ret = GetHandlerProperty2new(c67_a0, c34_a0, c304_a2);
     
    
    /* Harness function #305 */
      VARIANTARG * c305_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c305_ret = GetHandlerProperty2new(c67_a0, c37_a0, c305_a2);
     
    
    /* Harness function #306 */
      VARIANTARG * c306_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c306_ret = GetHandlerProperty2new(c67_a0, c19_a0, c306_a2);
     
    
    /* Harness function #307 */
      VARIANTARG * c307_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c307_ret = GetHandlerProperty2new(c67_a0, c22_a0, c307_a2);
     
    
    /* Harness function #308 */
      VARIANTARG * c308_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c308_ret = GetHandlerProperty2new(c67_a0, c25_a0, c308_a2);
     
    
    /* Harness function #309 */    
    int c309_ret = GetIsArcnew(c67_a0, c82_a1);
     
    
    /* Harness function #310 */
    int c310_a0 = 0x17;  VARIANTARG * c310_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c310_ret = GetHandlerProperty2new(c310_a0, c1_a0, c310_a2);
     
    
    /* Harness function #311 */
      VARIANTARG * c311_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c311_ret = GetHandlerProperty2new(c310_a0, c4_a0, c311_a2);
     
    
    /* Harness function #312 */
      VARIANTARG * c312_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c312_ret = GetHandlerProperty2new(c310_a0, c2_a1, c312_a2);
     
    
    /* Harness function #313 */
      VARIANTARG * c313_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c313_ret = GetHandlerProperty2new(c310_a0, c1_a1, c313_a2);
     
    
    /* Harness function #314 */
      VARIANTARG * c314_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c314_ret = GetHandlerProperty2new(c310_a0, c13_a0, c314_a2);
     
    
    /* Harness function #315 */
      VARIANTARG * c315_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c315_ret = GetHandlerProperty2new(c310_a0, c34_a0, c315_a2);
     
    
    /* Harness function #316 */
      VARIANTARG * c316_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c316_ret = GetHandlerProperty2new(c310_a0, c37_a0, c316_a2);
     
    
    /* Harness function #317 */
      VARIANTARG * c317_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c317_ret = GetHandlerProperty2new(c310_a0, c19_a0, c317_a2);
     
    
    /* Harness function #318 */
      VARIANTARG * c318_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c318_ret = GetHandlerProperty2new(c310_a0, c22_a0, c318_a2);
     
    
    /* Harness function #319 */
      VARIANTARG * c319_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c319_ret = GetHandlerProperty2new(c310_a0, c25_a0, c319_a2);
     
    
    /* Harness function #320 */    
    int c320_ret = GetIsArcnew(c310_a0, c82_a1);
     
    
    /* Harness function #321 */
    int c321_a0 = 0x18;  VARIANTARG * c321_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c321_ret = GetHandlerProperty2new(c321_a0, c1_a0, c321_a2);
     
    
    /* Harness function #322 */
      VARIANTARG * c322_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c322_ret = GetHandlerProperty2new(c321_a0, c4_a0, c322_a2);
     
    
    /* Harness function #323 */
      VARIANTARG * c323_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c323_ret = GetHandlerProperty2new(c321_a0, c2_a1, c323_a2);
     
    
    /* Harness function #324 */
      VARIANTARG * c324_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c324_ret = GetHandlerProperty2new(c321_a0, c1_a1, c324_a2);
     
    
    /* Harness function #325 */
      VARIANTARG * c325_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c325_ret = GetHandlerProperty2new(c321_a0, c13_a0, c325_a2);
     
    
    /* Harness function #326 */
      VARIANTARG * c326_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c326_ret = GetHandlerProperty2new(c321_a0, c34_a0, c326_a2);
     
    
    /* Harness function #327 */
      VARIANTARG * c327_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c327_ret = GetHandlerProperty2new(c321_a0, c37_a0, c327_a2);
     
    
    /* Harness function #328 */
      VARIANTARG * c328_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c328_ret = GetHandlerProperty2new(c321_a0, c19_a0, c328_a2);
     
    
    /* Harness function #329 */
      VARIANTARG * c329_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c329_ret = GetHandlerProperty2new(c321_a0, c25_a0, c329_a2);
     
    
    /* Harness function #330 */    
    int c330_ret = GetIsArcnew(c321_a0, c82_a1);
     
    
    /* Harness function #331 */
    int c331_a0 = 0x19;  VARIANTARG * c331_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c331_ret = GetHandlerProperty2new(c331_a0, c1_a0, c331_a2);
     
    
    /* Harness function #332 */
      VARIANTARG * c332_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c332_ret = GetHandlerProperty2new(c331_a0, c4_a0, c332_a2);
     
    
    /* Harness function #333 */
      VARIANTARG * c333_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c333_ret = GetHandlerProperty2new(c331_a0, c2_a1, c333_a2);
     
    
    /* Harness function #334 */
      VARIANTARG * c334_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c334_ret = GetHandlerProperty2new(c331_a0, c1_a1, c334_a2);
     
    
    /* Harness function #335 */
      VARIANTARG * c335_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c335_ret = GetHandlerProperty2new(c331_a0, c13_a0, c335_a2);
     
    
    /* Harness function #336 */
      VARIANTARG * c336_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c336_ret = GetHandlerProperty2new(c331_a0, c34_a0, c336_a2);
     
    
    /* Harness function #337 */
      VARIANTARG * c337_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c337_ret = GetHandlerProperty2new(c331_a0, c37_a0, c337_a2);
     
    
    /* Harness function #338 */
      VARIANTARG * c338_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c338_ret = GetHandlerProperty2new(c331_a0, c19_a0, c338_a2);
     
    
    /* Harness function #339 */
      VARIANTARG * c339_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c339_ret = GetHandlerProperty2new(c331_a0, c22_a0, c339_a2);
     
    
    /* Harness function #340 */
      VARIANTARG * c340_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c340_ret = GetHandlerProperty2new(c331_a0, c25_a0, c340_a2);
     
    
    /* Harness function #341 */    
    int c341_ret = GetIsArcnew(c331_a0, c82_a1);
     
    
    /* Harness function #342 */
    int c342_a0 = 0x1a;  VARIANTARG * c342_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c342_ret = GetHandlerProperty2new(c342_a0, c1_a0, c342_a2);
     
    
    /* Harness function #343 */
      VARIANTARG * c343_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c343_ret = GetHandlerProperty2new(c342_a0, c4_a0, c343_a2);
     
    
    /* Harness function #344 */
      VARIANTARG * c344_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c344_ret = GetHandlerProperty2new(c342_a0, c2_a1, c344_a2);
     
    
    /* Harness function #345 */
      VARIANTARG * c345_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c345_ret = GetHandlerProperty2new(c342_a0, c1_a1, c345_a2);
     
    
    /* Harness function #346 */
      VARIANTARG * c346_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c346_ret = GetHandlerProperty2new(c342_a0, c13_a0, c346_a2);
     
    
    /* Harness function #347 */
      VARIANTARG * c347_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c347_ret = GetHandlerProperty2new(c342_a0, c34_a0, c347_a2);
     
    
    /* Harness function #348 */
      VARIANTARG * c348_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c348_ret = GetHandlerProperty2new(c342_a0, c37_a0, c348_a2);
     
    
    /* Harness function #349 */
      VARIANTARG * c349_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c349_ret = GetHandlerProperty2new(c342_a0, c19_a0, c349_a2);
     
    
    /* Harness function #350 */
      VARIANTARG * c350_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c350_ret = GetHandlerProperty2new(c342_a0, c25_a0, c350_a2);
     
    
    /* Harness function #351 */    
    int c351_ret = GetIsArcnew(c342_a0, c82_a1);
     
    
    /* Harness function #352 */
    int c352_a0 = 0x1b;  VARIANTARG * c352_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c352_ret = GetHandlerProperty2new(c352_a0, c1_a0, c352_a2);
     
    
    /* Harness function #353 */
      VARIANTARG * c353_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c353_ret = GetHandlerProperty2new(c352_a0, c4_a0, c353_a2);
     
    
    /* Harness function #354 */
      VARIANTARG * c354_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c354_ret = GetHandlerProperty2new(c352_a0, c2_a1, c354_a2);
     
    
    /* Harness function #355 */
      VARIANTARG * c355_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c355_ret = GetHandlerProperty2new(c352_a0, c1_a1, c355_a2);
     
    
    /* Harness function #356 */
      VARIANTARG * c356_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c356_ret = GetHandlerProperty2new(c352_a0, c13_a0, c356_a2);
     
    
    /* Harness function #357 */
      VARIANTARG * c357_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c357_ret = GetHandlerProperty2new(c352_a0, c34_a0, c357_a2);
     
    
    /* Harness function #358 */
      VARIANTARG * c358_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c358_ret = GetHandlerProperty2new(c352_a0, c37_a0, c358_a2);
     
    
    /* Harness function #359 */
      VARIANTARG * c359_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c359_ret = GetHandlerProperty2new(c352_a0, c19_a0, c359_a2);
     
    
    /* Harness function #360 */
      VARIANTARG * c360_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c360_ret = GetHandlerProperty2new(c352_a0, c25_a0, c360_a2);
     
    
    /* Harness function #361 */    
    int c361_ret = GetIsArcnew(c352_a0, c82_a1);
     
    
    /* Harness function #362 */
    int c362_a0 = 0x1c;  VARIANTARG * c362_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c362_ret = GetHandlerProperty2new(c362_a0, c1_a0, c362_a2);
     
    
    /* Harness function #363 */
      VARIANTARG * c363_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c363_ret = GetHandlerProperty2new(c362_a0, c4_a0, c363_a2);
     
    
    /* Harness function #364 */
      VARIANTARG * c364_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c364_ret = GetHandlerProperty2new(c362_a0, c2_a1, c364_a2);
     
    
    /* Harness function #365 */
      VARIANTARG * c365_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c365_ret = GetHandlerProperty2new(c362_a0, c1_a1, c365_a2);
     
    
    /* Harness function #366 */
      VARIANTARG * c366_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c366_ret = GetHandlerProperty2new(c362_a0, c13_a0, c366_a2);
     
    
    /* Harness function #367 */
      VARIANTARG * c367_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c367_ret = GetHandlerProperty2new(c362_a0, c34_a0, c367_a2);
     
    
    /* Harness function #368 */
      VARIANTARG * c368_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c368_ret = GetHandlerProperty2new(c362_a0, c37_a0, c368_a2);
     
    
    /* Harness function #369 */
      VARIANTARG * c369_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c369_ret = GetHandlerProperty2new(c362_a0, c19_a0, c369_a2);
     
    
    /* Harness function #370 */
      VARIANTARG * c370_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c370_ret = GetHandlerProperty2new(c362_a0, c22_a0, c370_a2);
     
    
    /* Harness function #371 */
      VARIANTARG * c371_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c371_ret = GetHandlerProperty2new(c362_a0, c25_a0, c371_a2);
     
    
    /* Harness function #372 */    
    int c372_ret = GetIsArcnew(c362_a0, c82_a1);
     
    
    /* Harness function #373 */
    int c373_a0 = 0x1d;  VARIANTARG * c373_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c373_ret = GetHandlerProperty2new(c373_a0, c1_a0, c373_a2);
     
    
    /* Harness function #374 */
      VARIANTARG * c374_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c374_ret = GetHandlerProperty2new(c373_a0, c4_a0, c374_a2);
     
    
    /* Harness function #375 */
      VARIANTARG * c375_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c375_ret = GetHandlerProperty2new(c373_a0, c2_a1, c375_a2);
     
    
    /* Harness function #376 */
      VARIANTARG * c376_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c376_ret = GetHandlerProperty2new(c373_a0, c1_a1, c376_a2);
     
    
    /* Harness function #377 */
      VARIANTARG * c377_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c377_ret = GetHandlerProperty2new(c373_a0, c13_a0, c377_a2);
     
    
    /* Harness function #378 */
      VARIANTARG * c378_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c378_ret = GetHandlerProperty2new(c373_a0, c34_a0, c378_a2);
     
    
    /* Harness function #379 */
      VARIANTARG * c379_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c379_ret = GetHandlerProperty2new(c373_a0, c37_a0, c379_a2);
     
    
    /* Harness function #380 */
      VARIANTARG * c380_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c380_ret = GetHandlerProperty2new(c373_a0, c19_a0, c380_a2);
     
    
    /* Harness function #381 */
      VARIANTARG * c381_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c381_ret = GetHandlerProperty2new(c373_a0, c25_a0, c381_a2);
     
    
    /* Harness function #382 */    
    int c382_ret = GetIsArcnew(c373_a0, c82_a1);
     
    
    /* Harness function #383 */
    int c383_a0 = 0x1e;  VARIANTARG * c383_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c383_ret = GetHandlerProperty2new(c383_a0, c1_a0, c383_a2);
     
    
    /* Harness function #384 */
      VARIANTARG * c384_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c384_ret = GetHandlerProperty2new(c383_a0, c4_a0, c384_a2);
     
    
    /* Harness function #385 */
      VARIANTARG * c385_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c385_ret = GetHandlerProperty2new(c383_a0, c2_a1, c385_a2);
     
    
    /* Harness function #386 */
      VARIANTARG * c386_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c386_ret = GetHandlerProperty2new(c383_a0, c1_a1, c386_a2);
     
    
    /* Harness function #387 */
      VARIANTARG * c387_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c387_ret = GetHandlerProperty2new(c383_a0, c13_a0, c387_a2);
     
    
    /* Harness function #388 */
      VARIANTARG * c388_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c388_ret = GetHandlerProperty2new(c383_a0, c34_a0, c388_a2);
     
    
    /* Harness function #389 */
      VARIANTARG * c389_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c389_ret = GetHandlerProperty2new(c383_a0, c37_a0, c389_a2);
     
    
    /* Harness function #390 */
      VARIANTARG * c390_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c390_ret = GetHandlerProperty2new(c383_a0, c19_a0, c390_a2);
     
    
    /* Harness function #391 */
      VARIANTARG * c391_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c391_ret = GetHandlerProperty2new(c383_a0, c25_a0, c391_a2);
     
    
    /* Harness function #392 */    
    int c392_ret = GetIsArcnew(c383_a0, c82_a1);
     
    
    /* Harness function #393 */
    int c393_a0 = 0x1f;  VARIANTARG * c393_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c393_ret = GetHandlerProperty2new(c393_a0, c1_a0, c393_a2);
     
    
    /* Harness function #394 */
      VARIANTARG * c394_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c394_ret = GetHandlerProperty2new(c393_a0, c4_a0, c394_a2);
     
    
    /* Harness function #395 */
      VARIANTARG * c395_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c395_ret = GetHandlerProperty2new(c393_a0, c2_a1, c395_a2);
     
    
    /* Harness function #396 */
      VARIANTARG * c396_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c396_ret = GetHandlerProperty2new(c393_a0, c1_a1, c396_a2);
     
    
    /* Harness function #397 */
      VARIANTARG * c397_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c397_ret = GetHandlerProperty2new(c393_a0, c13_a0, c397_a2);
     
    
    /* Harness function #398 */
      VARIANTARG * c398_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c398_ret = GetHandlerProperty2new(c393_a0, c34_a0, c398_a2);
     
    
    /* Harness function #399 */
      VARIANTARG * c399_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c399_ret = GetHandlerProperty2new(c393_a0, c37_a0, c399_a2);
     
    
    /* Harness function #400 */
      VARIANTARG * c400_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c400_ret = GetHandlerProperty2new(c393_a0, c19_a0, c400_a2);
     
    
    /* Harness function #401 */
      VARIANTARG * c401_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c401_ret = GetHandlerProperty2new(c393_a0, c25_a0, c401_a2);
     
    
    /* Harness function #402 */    
    int c402_ret = GetIsArcnew(c393_a0, c82_a1);
     
    
    /* Harness function #403 */
    int c403_a0 = 0x20;  VARIANTARG * c403_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c403_ret = GetHandlerProperty2new(c403_a0, c1_a0, c403_a2);
     
    
    /* Harness function #404 */
      VARIANTARG * c404_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c404_ret = GetHandlerProperty2new(c403_a0, c4_a0, c404_a2);
     
    
    /* Harness function #405 */
      VARIANTARG * c405_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c405_ret = GetHandlerProperty2new(c403_a0, c2_a1, c405_a2);
     
    
    /* Harness function #406 */
      VARIANTARG * c406_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c406_ret = GetHandlerProperty2new(c403_a0, c1_a1, c406_a2);
     
    
    /* Harness function #407 */
      VARIANTARG * c407_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c407_ret = GetHandlerProperty2new(c403_a0, c13_a0, c407_a2);
     
    
    /* Harness function #408 */
      VARIANTARG * c408_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c408_ret = GetHandlerProperty2new(c403_a0, c34_a0, c408_a2);
     
    
    /* Harness function #409 */
      VARIANTARG * c409_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c409_ret = GetHandlerProperty2new(c403_a0, c37_a0, c409_a2);
     
    
    /* Harness function #410 */
      VARIANTARG * c410_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c410_ret = GetHandlerProperty2new(c403_a0, c19_a0, c410_a2);
     
    
    /* Harness function #411 */
      VARIANTARG * c411_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c411_ret = GetHandlerProperty2new(c403_a0, c25_a0, c411_a2);
     
    
    /* Harness function #412 */    
    int c412_ret = GetIsArcnew(c403_a0, c82_a1);
     
    
    /* Harness function #413 */
    int c413_a0 = 0x21;  VARIANTARG * c413_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c413_ret = GetHandlerProperty2new(c413_a0, c1_a0, c413_a2);
     
    
    /* Harness function #414 */
      VARIANTARG * c414_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c414_ret = GetHandlerProperty2new(c413_a0, c4_a0, c414_a2);
     
    
    /* Harness function #415 */
      VARIANTARG * c415_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c415_ret = GetHandlerProperty2new(c413_a0, c2_a1, c415_a2);
     
    
    /* Harness function #416 */
      VARIANTARG * c416_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c416_ret = GetHandlerProperty2new(c413_a0, c1_a1, c416_a2);
     
    
    /* Harness function #417 */
      VARIANTARG * c417_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c417_ret = GetHandlerProperty2new(c413_a0, c13_a0, c417_a2);
     
    
    /* Harness function #418 */
      VARIANTARG * c418_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c418_ret = GetHandlerProperty2new(c413_a0, c34_a0, c418_a2);
     
    
    /* Harness function #419 */
      VARIANTARG * c419_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c419_ret = GetHandlerProperty2new(c413_a0, c37_a0, c419_a2);
     
    
    /* Harness function #420 */
      VARIANTARG * c420_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c420_ret = GetHandlerProperty2new(c413_a0, c19_a0, c420_a2);
     
    
    /* Harness function #421 */
      VARIANTARG * c421_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c421_ret = GetHandlerProperty2new(c413_a0, c25_a0, c421_a2);
     
    
    /* Harness function #422 */    
    int c422_ret = GetIsArcnew(c413_a0, c82_a1);
     
    
    /* Harness function #423 */
    int c423_a0 = 0x22;  VARIANTARG * c423_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c423_ret = GetHandlerProperty2new(c423_a0, c1_a0, c423_a2);
     
    
    /* Harness function #424 */
      VARIANTARG * c424_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c424_ret = GetHandlerProperty2new(c423_a0, c4_a0, c424_a2);
     
    
    /* Harness function #425 */
      VARIANTARG * c425_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c425_ret = GetHandlerProperty2new(c423_a0, c2_a1, c425_a2);
     
    
    /* Harness function #426 */
      VARIANTARG * c426_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c426_ret = GetHandlerProperty2new(c423_a0, c1_a1, c426_a2);
     
    
    /* Harness function #427 */
      VARIANTARG * c427_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c427_ret = GetHandlerProperty2new(c423_a0, c13_a0, c427_a2);
     
    
    /* Harness function #428 */
      VARIANTARG * c428_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c428_ret = GetHandlerProperty2new(c423_a0, c34_a0, c428_a2);
     
    
    /* Harness function #429 */
      VARIANTARG * c429_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c429_ret = GetHandlerProperty2new(c423_a0, c37_a0, c429_a2);
     
    
    /* Harness function #430 */
      VARIANTARG * c430_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c430_ret = GetHandlerProperty2new(c423_a0, c19_a0, c430_a2);
     
    
    /* Harness function #431 */
      VARIANTARG * c431_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c431_ret = GetHandlerProperty2new(c423_a0, c22_a0, c431_a2);
     
    
    /* Harness function #432 */
      VARIANTARG * c432_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c432_ret = GetHandlerProperty2new(c423_a0, c25_a0, c432_a2);
     
    
    /* Harness function #433 */    
    int c433_ret = GetIsArcnew(c423_a0, c82_a1);
     
    
    /* Harness function #434 */
    int c434_a0 = 0x23;  VARIANTARG * c434_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c434_ret = GetHandlerProperty2new(c434_a0, c1_a0, c434_a2);
     
    
    /* Harness function #435 */
      VARIANTARG * c435_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c435_ret = GetHandlerProperty2new(c434_a0, c4_a0, c435_a2);
     
    
    /* Harness function #436 */
      VARIANTARG * c436_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c436_ret = GetHandlerProperty2new(c434_a0, c2_a1, c436_a2);
     
    
    /* Harness function #437 */
      VARIANTARG * c437_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c437_ret = GetHandlerProperty2new(c434_a0, c1_a1, c437_a2);
     
    
    /* Harness function #438 */
      VARIANTARG * c438_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c438_ret = GetHandlerProperty2new(c434_a0, c13_a0, c438_a2);
     
    
    /* Harness function #439 */
      VARIANTARG * c439_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c439_ret = GetHandlerProperty2new(c434_a0, c34_a0, c439_a2);
     
    
    /* Harness function #440 */
      VARIANTARG * c440_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c440_ret = GetHandlerProperty2new(c434_a0, c37_a0, c440_a2);
     
    
    /* Harness function #441 */
      VARIANTARG * c441_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c441_ret = GetHandlerProperty2new(c434_a0, c19_a0, c441_a2);
     
    
    /* Harness function #442 */
      VARIANTARG * c442_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c442_ret = GetHandlerProperty2new(c434_a0, c22_a0, c442_a2);
     
    
    /* Harness function #443 */
      VARIANTARG * c443_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c443_ret = GetHandlerProperty2new(c434_a0, c25_a0, c443_a2);
     
    
    /* Harness function #444 */    
    int c444_ret = GetIsArcnew(c434_a0, c82_a1);
     
    
    /* Harness function #445 */
    int c445_a0 = 0x24;  VARIANTARG * c445_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c445_ret = GetHandlerProperty2new(c445_a0, c1_a0, c445_a2);
     
    
    /* Harness function #446 */
      VARIANTARG * c446_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c446_ret = GetHandlerProperty2new(c445_a0, c4_a0, c446_a2);
     
    
    /* Harness function #447 */
      VARIANTARG * c447_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c447_ret = GetHandlerProperty2new(c445_a0, c2_a1, c447_a2);
     
    
    /* Harness function #448 */
      VARIANTARG * c448_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c448_ret = GetHandlerProperty2new(c445_a0, c1_a1, c448_a2);
     
    
    /* Harness function #449 */
      VARIANTARG * c449_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c449_ret = GetHandlerProperty2new(c445_a0, c13_a0, c449_a2);
     
    
    /* Harness function #450 */
      VARIANTARG * c450_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c450_ret = GetHandlerProperty2new(c445_a0, c34_a0, c450_a2);
     
    
    /* Harness function #451 */
      VARIANTARG * c451_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c451_ret = GetHandlerProperty2new(c445_a0, c37_a0, c451_a2);
     
    
    /* Harness function #452 */
      VARIANTARG * c452_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c452_ret = GetHandlerProperty2new(c445_a0, c19_a0, c452_a2);
     
    
    /* Harness function #453 */
      VARIANTARG * c453_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c453_ret = GetHandlerProperty2new(c445_a0, c22_a0, c453_a2);
     
    
    /* Harness function #454 */
      VARIANTARG * c454_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c454_ret = GetHandlerProperty2new(c445_a0, c25_a0, c454_a2);
     
    
    /* Harness function #455 */    
    int c455_ret = GetIsArcnew(c445_a0, c82_a1);
     
    
    /* Harness function #456 */
    int c456_a0 = 0x25;  VARIANTARG * c456_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c456_ret = GetHandlerProperty2new(c456_a0, c1_a0, c456_a2);
     
    
    /* Harness function #457 */
      VARIANTARG * c457_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c457_ret = GetHandlerProperty2new(c456_a0, c4_a0, c457_a2);
     
    
    /* Harness function #458 */
      VARIANTARG * c458_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c458_ret = GetHandlerProperty2new(c456_a0, c2_a1, c458_a2);
     
    
    /* Harness function #459 */
      VARIANTARG * c459_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c459_ret = GetHandlerProperty2new(c456_a0, c1_a1, c459_a2);
     
    
    /* Harness function #460 */
      VARIANTARG * c460_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c460_ret = GetHandlerProperty2new(c456_a0, c13_a0, c460_a2);
     
    
    /* Harness function #461 */
      VARIANTARG * c461_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c461_ret = GetHandlerProperty2new(c456_a0, c34_a0, c461_a2);
     
    
    /* Harness function #462 */
      VARIANTARG * c462_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c462_ret = GetHandlerProperty2new(c456_a0, c37_a0, c462_a2);
     
    
    /* Harness function #463 */
      VARIANTARG * c463_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c463_ret = GetHandlerProperty2new(c456_a0, c19_a0, c463_a2);
     
    
    /* Harness function #464 */
      VARIANTARG * c464_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c464_ret = GetHandlerProperty2new(c456_a0, c25_a0, c464_a2);
     
    
    /* Harness function #465 */    
    int c465_ret = GetIsArcnew(c456_a0, c82_a1);
     
    
    /* Harness function #466 */
    int c466_a0 = 0x26;  VARIANTARG * c466_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c466_ret = GetHandlerProperty2new(c466_a0, c1_a0, c466_a2);
     
    
    /* Harness function #467 */
      VARIANTARG * c467_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c467_ret = GetHandlerProperty2new(c466_a0, c4_a0, c467_a2);
     
    
    /* Harness function #468 */
      VARIANTARG * c468_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c468_ret = GetHandlerProperty2new(c466_a0, c2_a1, c468_a2);
     
    
    /* Harness function #469 */
      VARIANTARG * c469_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c469_ret = GetHandlerProperty2new(c466_a0, c1_a1, c469_a2);
     
    
    /* Harness function #470 */
      VARIANTARG * c470_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c470_ret = GetHandlerProperty2new(c466_a0, c13_a0, c470_a2);
     
    
    /* Harness function #471 */
      VARIANTARG * c471_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c471_ret = GetHandlerProperty2new(c466_a0, c34_a0, c471_a2);
     
    
    /* Harness function #472 */
      VARIANTARG * c472_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c472_ret = GetHandlerProperty2new(c466_a0, c37_a0, c472_a2);
     
    
    /* Harness function #473 */
      VARIANTARG * c473_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c473_ret = GetHandlerProperty2new(c466_a0, c19_a0, c473_a2);
     
    
    /* Harness function #474 */
      VARIANTARG * c474_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c474_ret = GetHandlerProperty2new(c466_a0, c22_a0, c474_a2);
     
    
    /* Harness function #475 */
      VARIANTARG * c475_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c475_ret = GetHandlerProperty2new(c466_a0, c25_a0, c475_a2);
     
    
    /* Harness function #476 */    
    int c476_ret = GetIsArcnew(c466_a0, c82_a1);
     
    
    /* Harness function #477 */
    int c477_a0 = 0x27;  VARIANTARG * c477_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c477_ret = GetHandlerProperty2new(c477_a0, c1_a0, c477_a2);
     
    
    /* Harness function #478 */
      VARIANTARG * c478_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c478_ret = GetHandlerProperty2new(c477_a0, c4_a0, c478_a2);
     
    
    /* Harness function #479 */
      VARIANTARG * c479_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c479_ret = GetHandlerProperty2new(c477_a0, c2_a1, c479_a2);
     
    
    /* Harness function #480 */
      VARIANTARG * c480_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c480_ret = GetHandlerProperty2new(c477_a0, c1_a1, c480_a2);
     
    
    /* Harness function #481 */
      VARIANTARG * c481_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c481_ret = GetHandlerProperty2new(c477_a0, c13_a0, c481_a2);
     
    
    /* Harness function #482 */
      VARIANTARG * c482_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c482_ret = GetHandlerProperty2new(c477_a0, c34_a0, c482_a2);
     
    
    /* Harness function #483 */
      VARIANTARG * c483_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c483_ret = GetHandlerProperty2new(c477_a0, c37_a0, c483_a2);
     
    
    /* Harness function #484 */
      VARIANTARG * c484_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c484_ret = GetHandlerProperty2new(c477_a0, c19_a0, c484_a2);
     
    
    /* Harness function #485 */
      VARIANTARG * c485_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c485_ret = GetHandlerProperty2new(c477_a0, c22_a0, c485_a2);
     
    
    /* Harness function #486 */
      VARIANTARG * c486_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c486_ret = GetHandlerProperty2new(c477_a0, c25_a0, c486_a2);
     
    
    /* Harness function #487 */    
    int c487_ret = GetIsArcnew(c477_a0, c82_a1);
     
    
    /* Harness function #488 */
    int c488_a0 = 0x28;  VARIANTARG * c488_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c488_ret = GetHandlerProperty2new(c488_a0, c1_a0, c488_a2);
     
    
    /* Harness function #489 */
      VARIANTARG * c489_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c489_ret = GetHandlerProperty2new(c488_a0, c4_a0, c489_a2);
     
    
    /* Harness function #490 */
      VARIANTARG * c490_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c490_ret = GetHandlerProperty2new(c488_a0, c2_a1, c490_a2);
     
    
    /* Harness function #491 */
      VARIANTARG * c491_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c491_ret = GetHandlerProperty2new(c488_a0, c1_a1, c491_a2);
     
    
    /* Harness function #492 */
      VARIANTARG * c492_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c492_ret = GetHandlerProperty2new(c488_a0, c13_a0, c492_a2);
     
    
    /* Harness function #493 */
      VARIANTARG * c493_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c493_ret = GetHandlerProperty2new(c488_a0, c34_a0, c493_a2);
     
    
    /* Harness function #494 */
      VARIANTARG * c494_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c494_ret = GetHandlerProperty2new(c488_a0, c37_a0, c494_a2);
     
    
    /* Harness function #495 */
      VARIANTARG * c495_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c495_ret = GetHandlerProperty2new(c488_a0, c19_a0, c495_a2);
     
    
    /* Harness function #496 */
      VARIANTARG * c496_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c496_ret = GetHandlerProperty2new(c488_a0, c25_a0, c496_a2);
     
    
    /* Harness function #497 */    
    int c497_ret = GetIsArcnew(c488_a0, c82_a1);
     
    
    /* Harness function #498 */
    int c498_a0 = 0x29;  VARIANTARG * c498_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c498_ret = GetHandlerProperty2new(c498_a0, c1_a0, c498_a2);
     
    
    /* Harness function #499 */
      VARIANTARG * c499_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c499_ret = GetHandlerProperty2new(c498_a0, c4_a0, c499_a2);
     
    
    /* Harness function #500 */
      VARIANTARG * c500_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c500_ret = GetHandlerProperty2new(c498_a0, c2_a1, c500_a2);
     
    
    /* Harness function #501 */
      VARIANTARG * c501_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c501_ret = GetHandlerProperty2new(c498_a0, c1_a1, c501_a2);
     
    
    /* Harness function #502 */
      VARIANTARG * c502_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c502_ret = GetHandlerProperty2new(c498_a0, c13_a0, c502_a2);
     
    
    /* Harness function #503 */
      VARIANTARG * c503_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c503_ret = GetHandlerProperty2new(c498_a0, c34_a0, c503_a2);
     
    
    /* Harness function #504 */
      VARIANTARG * c504_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c504_ret = GetHandlerProperty2new(c498_a0, c37_a0, c504_a2);
     
    
    /* Harness function #505 */
      VARIANTARG * c505_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c505_ret = GetHandlerProperty2new(c498_a0, c19_a0, c505_a2);
     
    
    /* Harness function #506 */
      VARIANTARG * c506_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c506_ret = GetHandlerProperty2new(c498_a0, c25_a0, c506_a2);
     
    
    /* Harness function #507 */    
    int c507_ret = GetIsArcnew(c498_a0, c82_a1);
     
    
    /* Harness function #508 */
    int c508_a0 = 0x2a;  VARIANTARG * c508_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c508_ret = GetHandlerProperty2new(c508_a0, c1_a0, c508_a2);
     
    
    /* Harness function #509 */
      VARIANTARG * c509_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c509_ret = GetHandlerProperty2new(c508_a0, c4_a0, c509_a2);
     
    
    /* Harness function #510 */
      VARIANTARG * c510_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c510_ret = GetHandlerProperty2new(c508_a0, c2_a1, c510_a2);
     
    
    /* Harness function #511 */
      VARIANTARG * c511_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c511_ret = GetHandlerProperty2new(c508_a0, c1_a1, c511_a2);
     
    
    /* Harness function #512 */
      VARIANTARG * c512_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c512_ret = GetHandlerProperty2new(c508_a0, c13_a0, c512_a2);
     
    
    /* Harness function #513 */
      VARIANTARG * c513_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c513_ret = GetHandlerProperty2new(c508_a0, c34_a0, c513_a2);
     
    
    /* Harness function #514 */
      VARIANTARG * c514_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c514_ret = GetHandlerProperty2new(c508_a0, c37_a0, c514_a2);
     
    
    /* Harness function #515 */
      VARIANTARG * c515_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c515_ret = GetHandlerProperty2new(c508_a0, c19_a0, c515_a2);
     
    
    /* Harness function #516 */
      VARIANTARG * c516_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c516_ret = GetHandlerProperty2new(c508_a0, c25_a0, c516_a2);
     
    
    /* Harness function #517 */    
    int c517_ret = GetIsArcnew(c508_a0, c82_a1);
     
    
    /* Harness function #518 */
    int c518_a0 = 0x2b;  VARIANTARG * c518_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c518_ret = GetHandlerProperty2new(c518_a0, c1_a0, c518_a2);
     
    
    /* Harness function #519 */
      VARIANTARG * c519_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c519_ret = GetHandlerProperty2new(c518_a0, c4_a0, c519_a2);
     
    
    /* Harness function #520 */
      VARIANTARG * c520_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c520_ret = GetHandlerProperty2new(c518_a0, c2_a1, c520_a2);
     
    
    /* Harness function #521 */
      VARIANTARG * c521_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c521_ret = GetHandlerProperty2new(c518_a0, c1_a1, c521_a2);
     
    
    /* Harness function #522 */
      VARIANTARG * c522_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c522_ret = GetHandlerProperty2new(c518_a0, c13_a0, c522_a2);
     
    
    /* Harness function #523 */
      VARIANTARG * c523_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c523_ret = GetHandlerProperty2new(c518_a0, c34_a0, c523_a2);
     
    
    /* Harness function #524 */
      VARIANTARG * c524_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c524_ret = GetHandlerProperty2new(c518_a0, c37_a0, c524_a2);
     
    
    /* Harness function #525 */
      VARIANTARG * c525_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c525_ret = GetHandlerProperty2new(c518_a0, c19_a0, c525_a2);
     
    
    /* Harness function #526 */
      VARIANTARG * c526_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c526_ret = GetHandlerProperty2new(c518_a0, c25_a0, c526_a2);
     
    
    /* Harness function #527 */    
    int c527_ret = GetIsArcnew(c518_a0, c82_a1);
     
    
    /* Harness function #528 */
    int c528_a0 = 0x2c;  VARIANTARG * c528_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c528_ret = GetHandlerProperty2new(c528_a0, c1_a0, c528_a2);
     
    
    /* Harness function #529 */
      VARIANTARG * c529_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c529_ret = GetHandlerProperty2new(c528_a0, c4_a0, c529_a2);
     
    
    /* Harness function #530 */
      VARIANTARG * c530_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c530_ret = GetHandlerProperty2new(c528_a0, c2_a1, c530_a2);
     
    
    /* Harness function #531 */
      VARIANTARG * c531_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c531_ret = GetHandlerProperty2new(c528_a0, c1_a1, c531_a2);
     
    
    /* Harness function #532 */
      VARIANTARG * c532_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c532_ret = GetHandlerProperty2new(c528_a0, c13_a0, c532_a2);
     
    
    /* Harness function #533 */
      VARIANTARG * c533_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c533_ret = GetHandlerProperty2new(c528_a0, c34_a0, c533_a2);
     
    
    /* Harness function #534 */
      VARIANTARG * c534_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c534_ret = GetHandlerProperty2new(c528_a0, c37_a0, c534_a2);
     
    
    /* Harness function #535 */
      VARIANTARG * c535_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c535_ret = GetHandlerProperty2new(c528_a0, c19_a0, c535_a2);
     
    
    /* Harness function #536 */
      VARIANTARG * c536_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c536_ret = GetHandlerProperty2new(c528_a0, c25_a0, c536_a2);
     
    
    /* Harness function #537 */    
    int c537_ret = GetIsArcnew(c528_a0, c82_a1);
     
    
    /* Harness function #538 */
    int c538_a0 = 0x2d;  VARIANTARG * c538_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c538_ret = GetHandlerProperty2new(c538_a0, c1_a0, c538_a2);
     
    
    /* Harness function #539 */
      VARIANTARG * c539_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c539_ret = GetHandlerProperty2new(c538_a0, c4_a0, c539_a2);
     
    
    /* Harness function #540 */
      VARIANTARG * c540_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c540_ret = GetHandlerProperty2new(c538_a0, c2_a1, c540_a2);
     
    
    /* Harness function #541 */
      VARIANTARG * c541_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c541_ret = GetHandlerProperty2new(c538_a0, c1_a1, c541_a2);
     
    
    /* Harness function #542 */
      VARIANTARG * c542_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c542_ret = GetHandlerProperty2new(c538_a0, c13_a0, c542_a2);
     
    
    /* Harness function #543 */
      VARIANTARG * c543_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c543_ret = GetHandlerProperty2new(c538_a0, c34_a0, c543_a2);
     
    
    /* Harness function #544 */
      VARIANTARG * c544_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c544_ret = GetHandlerProperty2new(c538_a0, c37_a0, c544_a2);
     
    
    /* Harness function #545 */
      VARIANTARG * c545_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c545_ret = GetHandlerProperty2new(c538_a0, c19_a0, c545_a2);
     
    
    /* Harness function #546 */
      VARIANTARG * c546_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c546_ret = GetHandlerProperty2new(c538_a0, c25_a0, c546_a2);
     
    
    /* Harness function #547 */    
    int c547_ret = GetIsArcnew(c538_a0, c82_a1);
     
    
    /* Harness function #548 */
    int c548_a0 = 0x2e;  VARIANTARG * c548_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c548_ret = GetHandlerProperty2new(c548_a0, c1_a0, c548_a2);
     
    
    /* Harness function #549 */
      VARIANTARG * c549_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c549_ret = GetHandlerProperty2new(c548_a0, c4_a0, c549_a2);
     
    
    /* Harness function #550 */
      VARIANTARG * c550_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c550_ret = GetHandlerProperty2new(c548_a0, c2_a1, c550_a2);
     
    
    /* Harness function #551 */
      VARIANTARG * c551_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c551_ret = GetHandlerProperty2new(c548_a0, c1_a1, c551_a2);
     
    
    /* Harness function #552 */
      VARIANTARG * c552_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c552_ret = GetHandlerProperty2new(c548_a0, c13_a0, c552_a2);
     
    
    /* Harness function #553 */
      VARIANTARG * c553_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c553_ret = GetHandlerProperty2new(c548_a0, c34_a0, c553_a2);
     
    
    /* Harness function #554 */
      VARIANTARG * c554_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c554_ret = GetHandlerProperty2new(c548_a0, c37_a0, c554_a2);
     
    
    /* Harness function #555 */
      VARIANTARG * c555_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c555_ret = GetHandlerProperty2new(c548_a0, c19_a0, c555_a2);
     
    
    /* Harness function #556 */
      VARIANTARG * c556_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c556_ret = GetHandlerProperty2new(c548_a0, c25_a0, c556_a2);
     
    
    /* Harness function #557 */    
    int c557_ret = GetIsArcnew(c548_a0, c82_a1);
     
    
    /* Harness function #558 */
    int c558_a0 = 0x2f;  VARIANTARG * c558_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c558_ret = GetHandlerProperty2new(c558_a0, c1_a0, c558_a2);
     
    
    /* Harness function #559 */
      VARIANTARG * c559_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c559_ret = GetHandlerProperty2new(c558_a0, c4_a0, c559_a2);
     
    
    /* Harness function #560 */
      VARIANTARG * c560_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c560_ret = GetHandlerProperty2new(c558_a0, c2_a1, c560_a2);
     
    
    /* Harness function #561 */
      VARIANTARG * c561_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c561_ret = GetHandlerProperty2new(c558_a0, c1_a1, c561_a2);
     
    
    /* Harness function #562 */
      VARIANTARG * c562_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c562_ret = GetHandlerProperty2new(c558_a0, c13_a0, c562_a2);
     
    
    /* Harness function #563 */
      VARIANTARG * c563_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c563_ret = GetHandlerProperty2new(c558_a0, c34_a0, c563_a2);
     
    
    /* Harness function #564 */
      VARIANTARG * c564_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c564_ret = GetHandlerProperty2new(c558_a0, c37_a0, c564_a2);
     
    
    /* Harness function #565 */
      VARIANTARG * c565_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c565_ret = GetHandlerProperty2new(c558_a0, c19_a0, c565_a2);
     
    
    /* Harness function #566 */
      VARIANTARG * c566_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c566_ret = GetHandlerProperty2new(c558_a0, c25_a0, c566_a2);
     
    
    /* Harness function #567 */    
    int c567_ret = GetIsArcnew(c558_a0, c82_a1);
     
    
    /* Harness function #568 */
    int c568_a0 = 0x30;  VARIANTARG * c568_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c568_ret = GetHandlerProperty2new(c568_a0, c1_a0, c568_a2);
     
    
    /* Harness function #569 */
      VARIANTARG * c569_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c569_ret = GetHandlerProperty2new(c568_a0, c4_a0, c569_a2);
     
    
    /* Harness function #570 */
      VARIANTARG * c570_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c570_ret = GetHandlerProperty2new(c568_a0, c2_a1, c570_a2);
     
    
    /* Harness function #571 */
      VARIANTARG * c571_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c571_ret = GetHandlerProperty2new(c568_a0, c1_a1, c571_a2);
     
    
    /* Harness function #572 */
      VARIANTARG * c572_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c572_ret = GetHandlerProperty2new(c568_a0, c13_a0, c572_a2);
     
    
    /* Harness function #573 */
      VARIANTARG * c573_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c573_ret = GetHandlerProperty2new(c568_a0, c34_a0, c573_a2);
     
    
    /* Harness function #574 */
      VARIANTARG * c574_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c574_ret = GetHandlerProperty2new(c568_a0, c37_a0, c574_a2);
     
    
    /* Harness function #575 */
      VARIANTARG * c575_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c575_ret = GetHandlerProperty2new(c568_a0, c19_a0, c575_a2);
     
    
    /* Harness function #576 */
      VARIANTARG * c576_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c576_ret = GetHandlerProperty2new(c568_a0, c25_a0, c576_a2);
     
    
    /* Harness function #577 */    
    int c577_ret = GetIsArcnew(c568_a0, c82_a1);
     
    
    /* Harness function #578 */
    int c578_a0 = 0x31;  VARIANTARG * c578_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c578_ret = GetHandlerProperty2new(c578_a0, c1_a0, c578_a2);
     
    
    /* Harness function #579 */
      VARIANTARG * c579_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c579_ret = GetHandlerProperty2new(c578_a0, c4_a0, c579_a2);
     
    
    /* Harness function #580 */
      VARIANTARG * c580_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c580_ret = GetHandlerProperty2new(c578_a0, c2_a1, c580_a2);
     
    
    /* Harness function #581 */
      VARIANTARG * c581_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c581_ret = GetHandlerProperty2new(c578_a0, c1_a1, c581_a2);
     
    
    /* Harness function #582 */
      VARIANTARG * c582_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c582_ret = GetHandlerProperty2new(c578_a0, c13_a0, c582_a2);
     
    
    /* Harness function #583 */
      VARIANTARG * c583_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c583_ret = GetHandlerProperty2new(c578_a0, c34_a0, c583_a2);
     
    
    /* Harness function #584 */
      VARIANTARG * c584_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c584_ret = GetHandlerProperty2new(c578_a0, c37_a0, c584_a2);
     
    
    /* Harness function #585 */
      VARIANTARG * c585_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c585_ret = GetHandlerProperty2new(c578_a0, c19_a0, c585_a2);
     
    
    /* Harness function #586 */
      VARIANTARG * c586_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c586_ret = GetHandlerProperty2new(c578_a0, c25_a0, c586_a2);
     
    
    /* Harness function #587 */    
    int c587_ret = GetIsArcnew(c578_a0, c82_a1);
     
    
    /* Harness function #588 */
    int c588_a0 = 0x32;  VARIANTARG * c588_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c588_ret = GetHandlerProperty2new(c588_a0, c1_a0, c588_a2);
     
    
    /* Harness function #589 */
      VARIANTARG * c589_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c589_ret = GetHandlerProperty2new(c588_a0, c4_a0, c589_a2);
     
    
    /* Harness function #590 */
      VARIANTARG * c590_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c590_ret = GetHandlerProperty2new(c588_a0, c2_a1, c590_a2);
     
    
    /* Harness function #591 */
      VARIANTARG * c591_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c591_ret = GetHandlerProperty2new(c588_a0, c1_a1, c591_a2);
     
    
    /* Harness function #592 */
      VARIANTARG * c592_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c592_ret = GetHandlerProperty2new(c588_a0, c13_a0, c592_a2);
     
    
    /* Harness function #593 */
      VARIANTARG * c593_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c593_ret = GetHandlerProperty2new(c588_a0, c34_a0, c593_a2);
     
    
    /* Harness function #594 */
      VARIANTARG * c594_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c594_ret = GetHandlerProperty2new(c588_a0, c37_a0, c594_a2);
     
    
    /* Harness function #595 */
      VARIANTARG * c595_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c595_ret = GetHandlerProperty2new(c588_a0, c19_a0, c595_a2);
     
    
    /* Harness function #596 */
      VARIANTARG * c596_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c596_ret = GetHandlerProperty2new(c588_a0, c25_a0, c596_a2);
     
    
    /* Harness function #597 */    
    int c597_ret = GetIsArcnew(c588_a0, c82_a1);
     
    
    /* Harness function #598 */
    int c598_a0 = 0x33;  VARIANTARG * c598_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c598_ret = GetHandlerProperty2new(c598_a0, c1_a0, c598_a2);
     
    
    /* Harness function #599 */
      VARIANTARG * c599_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c599_ret = GetHandlerProperty2new(c598_a0, c4_a0, c599_a2);
     
    
    /* Harness function #600 */
      VARIANTARG * c600_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c600_ret = GetHandlerProperty2new(c598_a0, c2_a1, c600_a2);
     
    
    /* Harness function #601 */
      VARIANTARG * c601_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c601_ret = GetHandlerProperty2new(c598_a0, c1_a1, c601_a2);
     
    
    /* Harness function #602 */
      VARIANTARG * c602_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c602_ret = GetHandlerProperty2new(c598_a0, c13_a0, c602_a2);
     
    
    /* Harness function #603 */
      VARIANTARG * c603_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c603_ret = GetHandlerProperty2new(c598_a0, c34_a0, c603_a2);
     
    
    /* Harness function #604 */
      VARIANTARG * c604_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c604_ret = GetHandlerProperty2new(c598_a0, c37_a0, c604_a2);
     
    
    /* Harness function #605 */
      VARIANTARG * c605_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c605_ret = GetHandlerProperty2new(c598_a0, c19_a0, c605_a2);
     
    
    /* Harness function #606 */
      VARIANTARG * c606_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c606_ret = GetHandlerProperty2new(c598_a0, c25_a0, c606_a2);
     
    
    /* Harness function #607 */    
    int c607_ret = GetIsArcnew(c598_a0, c82_a1);
     
    
    /* Harness function #608 */
    int c608_a0 = 0x34;  VARIANTARG * c608_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c608_ret = GetHandlerProperty2new(c608_a0, c1_a0, c608_a2);
     
    
    /* Harness function #609 */
      VARIANTARG * c609_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c609_ret = GetHandlerProperty2new(c608_a0, c4_a0, c609_a2);
     
    
    /* Harness function #610 */
      VARIANTARG * c610_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c610_ret = GetHandlerProperty2new(c608_a0, c2_a1, c610_a2);
     
    
    /* Harness function #611 */
      VARIANTARG * c611_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c611_ret = GetHandlerProperty2new(c608_a0, c1_a1, c611_a2);
     
    
    /* Harness function #612 */
      VARIANTARG * c612_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c612_ret = GetHandlerProperty2new(c608_a0, c13_a0, c612_a2);
     
    
    /* Harness function #613 */
      VARIANTARG * c613_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c613_ret = GetHandlerProperty2new(c608_a0, c34_a0, c613_a2);
     
    
    /* Harness function #614 */
      VARIANTARG * c614_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c614_ret = GetHandlerProperty2new(c608_a0, c37_a0, c614_a2);
     
    
    /* Harness function #615 */
      VARIANTARG * c615_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c615_ret = GetHandlerProperty2new(c608_a0, c19_a0, c615_a2);
     
    
    /* Harness function #616 */
      VARIANTARG * c616_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c616_ret = GetHandlerProperty2new(c608_a0, c25_a0, c616_a2);
     
    
    /* Harness function #617 */    
    int c617_ret = GetIsArcnew(c608_a0, c82_a1);
     
    
    /* Harness function #618 */
    int c618_a0 = 0x35;  VARIANTARG * c618_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c618_ret = GetHandlerProperty2new(c618_a0, c1_a0, c618_a2);
     
    
    /* Harness function #619 */
      VARIANTARG * c619_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c619_ret = GetHandlerProperty2new(c618_a0, c4_a0, c619_a2);
     
    
    /* Harness function #620 */
      VARIANTARG * c620_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c620_ret = GetHandlerProperty2new(c618_a0, c2_a1, c620_a2);
     
    
    /* Harness function #621 */
      VARIANTARG * c621_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c621_ret = GetHandlerProperty2new(c618_a0, c1_a1, c621_a2);
     
    
    /* Harness function #622 */
      VARIANTARG * c622_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c622_ret = GetHandlerProperty2new(c618_a0, c13_a0, c622_a2);
     
    
    /* Harness function #623 */
      VARIANTARG * c623_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c623_ret = GetHandlerProperty2new(c618_a0, c34_a0, c623_a2);
     
    
    /* Harness function #624 */
      VARIANTARG * c624_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c624_ret = GetHandlerProperty2new(c618_a0, c37_a0, c624_a2);
     
    
    /* Harness function #625 */
      VARIANTARG * c625_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c625_ret = GetHandlerProperty2new(c618_a0, c19_a0, c625_a2);
     
    
    /* Harness function #626 */
      VARIANTARG * c626_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c626_ret = GetHandlerProperty2new(c618_a0, c25_a0, c626_a2);
     
    
    /* Harness function #627 */    
    int c627_ret = GetIsArcnew(c618_a0, c82_a1);
     
    
    /* Harness function #628 */
    int c628_a0 = 0x36;  VARIANTARG * c628_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c628_ret = GetHandlerProperty2new(c628_a0, c1_a0, c628_a2);
     
    
    /* Harness function #629 */
      VARIANTARG * c629_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c629_ret = GetHandlerProperty2new(c628_a0, c4_a0, c629_a2);
     
    
    /* Harness function #630 */
      VARIANTARG * c630_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c630_ret = GetHandlerProperty2new(c628_a0, c2_a1, c630_a2);
     
    
    /* Harness function #631 */
      VARIANTARG * c631_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c631_ret = GetHandlerProperty2new(c628_a0, c1_a1, c631_a2);
     
    
    /* Harness function #632 */
      VARIANTARG * c632_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c632_ret = GetHandlerProperty2new(c628_a0, c13_a0, c632_a2);
     
    
    /* Harness function #633 */
      VARIANTARG * c633_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c633_ret = GetHandlerProperty2new(c628_a0, c34_a0, c633_a2);
     
    
    /* Harness function #634 */
      VARIANTARG * c634_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c634_ret = GetHandlerProperty2new(c628_a0, c37_a0, c634_a2);
     
    
    /* Harness function #635 */
      VARIANTARG * c635_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c635_ret = GetHandlerProperty2new(c628_a0, c19_a0, c635_a2);
     
    
    /* Harness function #636 */
      VARIANTARG * c636_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c636_ret = GetHandlerProperty2new(c628_a0, c25_a0, c636_a2);
     
    
    /* Harness function #637 */    
    int c637_ret = GetIsArcnew(c628_a0, c82_a1);
     
    
    /* Harness function #638 */
    int c638_a0 = 0x37;  VARIANTARG * c638_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c638_ret = GetHandlerProperty2new(c638_a0, c1_a0, c638_a2);
     
    
    /* Harness function #639 */
      VARIANTARG * c639_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c639_ret = GetHandlerProperty2new(c638_a0, c4_a0, c639_a2);
     
    
    /* Harness function #640 */
      VARIANTARG * c640_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c640_ret = GetHandlerProperty2new(c638_a0, c2_a1, c640_a2);
     
    
    /* Harness function #641 */
      VARIANTARG * c641_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c641_ret = GetHandlerProperty2new(c638_a0, c1_a1, c641_a2);
     
    
    /* Harness function #642 */
      VARIANTARG * c642_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c642_ret = GetHandlerProperty2new(c638_a0, c13_a0, c642_a2);
     
    
    /* Harness function #643 */
      VARIANTARG * c643_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c643_ret = GetHandlerProperty2new(c638_a0, c34_a0, c643_a2);
     
    
    /* Harness function #644 */
      VARIANTARG * c644_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c644_ret = GetHandlerProperty2new(c638_a0, c37_a0, c644_a2);
     
    
    /* Harness function #645 */
      VARIANTARG * c645_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c645_ret = GetHandlerProperty2new(c638_a0, c19_a0, c645_a2);
     
    
    /* Harness function #646 */
      VARIANTARG * c646_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c646_ret = GetHandlerProperty2new(c638_a0, c25_a0, c646_a2);
     
    
    /* Harness function #647 */    
    int c647_ret = GetIsArcnew(c638_a0, c82_a1);
     
    
    /* Harness function #648 */
    int c648_a0 = 0x38;  VARIANTARG * c648_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c648_ret = GetHandlerProperty2new(c648_a0, c1_a0, c648_a2);
     
    
    /* Harness function #649 */
      VARIANTARG * c649_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c649_ret = GetHandlerProperty2new(c648_a0, c4_a0, c649_a2);
     
    
    /* Harness function #650 */
      VARIANTARG * c650_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c650_ret = GetHandlerProperty2new(c648_a0, c2_a1, c650_a2);
     
    
    /* Harness function #651 */
      VARIANTARG * c651_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c651_ret = GetHandlerProperty2new(c648_a0, c1_a1, c651_a2);
     
    
    /* Harness function #652 */
      VARIANTARG * c652_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c652_ret = GetHandlerProperty2new(c648_a0, c13_a0, c652_a2);
     
    
    /* Harness function #653 */
      VARIANTARG * c653_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c653_ret = GetHandlerProperty2new(c648_a0, c34_a0, c653_a2);
     
    
    /* Harness function #654 */
      VARIANTARG * c654_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c654_ret = GetHandlerProperty2new(c648_a0, c37_a0, c654_a2);
     
    
    /* Harness function #655 */
      VARIANTARG * c655_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c655_ret = GetHandlerProperty2new(c648_a0, c19_a0, c655_a2);
     
    
    /* Harness function #656 */
      VARIANTARG * c656_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c656_ret = GetHandlerProperty2new(c648_a0, c25_a0, c656_a2);
     
    
    /* Harness function #657 */    
    int c657_ret = GetIsArcnew(c648_a0, c82_a1);
     
    
    /* Harness function #658 */
    int c658_a0 = 0x39;  VARIANTARG * c658_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c658_ret = GetHandlerProperty2new(c658_a0, c1_a0, c658_a2);
     
    
    /* Harness function #659 */
      VARIANTARG * c659_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c659_ret = GetHandlerProperty2new(c658_a0, c4_a0, c659_a2);
     
    
    /* Harness function #660 */
      VARIANTARG * c660_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c660_ret = GetHandlerProperty2new(c658_a0, c2_a1, c660_a2);
     
    
    /* Harness function #661 */
      VARIANTARG * c661_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c661_ret = GetHandlerProperty2new(c658_a0, c1_a1, c661_a2);
     
    
    /* Harness function #662 */
      VARIANTARG * c662_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c662_ret = GetHandlerProperty2new(c658_a0, c13_a0, c662_a2);
     
    
    /* Harness function #663 */
      VARIANTARG * c663_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c663_ret = GetHandlerProperty2new(c658_a0, c34_a0, c663_a2);
     
    
    /* Harness function #664 */
      VARIANTARG * c664_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c664_ret = GetHandlerProperty2new(c658_a0, c37_a0, c664_a2);
     
    
    /* Harness function #665 */
      VARIANTARG * c665_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c665_ret = GetHandlerProperty2new(c658_a0, c19_a0, c665_a2);
     
    
    /* Harness function #666 */
      VARIANTARG * c666_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c666_ret = GetHandlerProperty2new(c658_a0, c25_a0, c666_a2);
     
    
    /* Harness function #667 */    
    int c667_ret = GetIsArcnew(c658_a0, c82_a1);
     
    
    /* Harness function #668 */
    int c668_a0 = 0x3a;  VARIANTARG * c668_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c668_ret = GetHandlerProperty2new(c668_a0, c1_a0, c668_a2);
     
    
    /* Harness function #669 */
      VARIANTARG * c669_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c669_ret = GetHandlerProperty2new(c668_a0, c4_a0, c669_a2);
     
    
    /* Harness function #670 */
      VARIANTARG * c670_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c670_ret = GetHandlerProperty2new(c668_a0, c2_a1, c670_a2);
     
    
    /* Harness function #671 */
      VARIANTARG * c671_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c671_ret = GetHandlerProperty2new(c668_a0, c1_a1, c671_a2);
     
    
    /* Harness function #672 */
      VARIANTARG * c672_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c672_ret = GetHandlerProperty2new(c668_a0, c13_a0, c672_a2);
     
    
    /* Harness function #673 */
      VARIANTARG * c673_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c673_ret = GetHandlerProperty2new(c668_a0, c34_a0, c673_a2);
     
    
    /* Harness function #674 */
      VARIANTARG * c674_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c674_ret = GetHandlerProperty2new(c668_a0, c37_a0, c674_a2);
     
    
    /* Harness function #675 */
      VARIANTARG * c675_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c675_ret = GetHandlerProperty2new(c668_a0, c19_a0, c675_a2);
     
    
    /* Harness function #676 */
      VARIANTARG * c676_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c676_ret = GetHandlerProperty2new(c668_a0, c22_a0, c676_a2);
     
    
    /* Harness function #677 */
      VARIANTARG * c677_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c677_ret = GetHandlerProperty2new(c668_a0, c25_a0, c677_a2);
     
    
    /* Harness function #678 */    
    int c678_ret = GetIsArcnew(c668_a0, c82_a1);
     
    
    /* Harness function #679 */
      VARIANTARG * c679_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c679_ret = GetMethodPropertynew(c1_a0, c1_a0, c679_a2);
     
    
    /* Harness function #680 */
      VARIANTARG * c680_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c680_ret = GetMethodPropertynew(c1_a0, c4_a0, c680_a2);
     
    
    /* Harness function #681 */
      VARIANTARG * c681_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c681_ret = GetMethodPropertynew(c1_a0, c13_a0, c681_a2);
     
    
    /* Harness function #682 */
      VARIANTARG * c682_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c682_ret = GetMethodPropertynew(c1_a0, c16_a0, c682_a2);
     
    
    /* Harness function #683 */
      VARIANTARG * c683_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c683_ret = GetMethodPropertynew(c4_a0, c1_a0, c683_a2);
     
    
    /* Harness function #684 */
      VARIANTARG * c684_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c684_ret = GetMethodPropertynew(c4_a0, c4_a0, c684_a2);
     
    
    /* Harness function #685 */
      VARIANTARG * c685_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c685_ret = GetMethodPropertynew(c4_a0, c13_a0, c685_a2);
     
    
    /* Harness function #686 */
      VARIANTARG * c686_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c686_ret = GetMethodPropertynew(c4_a0, c16_a0, c686_a2);
     
    
    /* Harness function #687 */
      VARIANTARG * c687_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c687_ret = GetMethodPropertynew(c2_a1, c1_a0, c687_a2);
     
    
    /* Harness function #688 */
      VARIANTARG * c688_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c688_ret = GetMethodPropertynew(c2_a1, c4_a0, c688_a2);
     
    
    /* Harness function #689 */
      VARIANTARG * c689_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c689_ret = GetMethodPropertynew(c2_a1, c13_a0, c689_a2);
     
    
    /* Harness function #690 */
      VARIANTARG * c690_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c690_ret = GetMethodPropertynew(c2_a1, c16_a0, c690_a2);
     
    
    /* Harness function #691 */
      VARIANTARG * c691_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c691_ret = GetMethodPropertynew(c1_a1, c1_a0, c691_a2);
     
    
    /* Harness function #692 */
      VARIANTARG * c692_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c692_ret = GetMethodPropertynew(c1_a1, c4_a0, c692_a2);
     
    
    /* Harness function #693 */
      VARIANTARG * c693_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c693_ret = GetMethodPropertynew(c1_a1, c13_a0, c693_a2);
     
    
    /* Harness function #694 */
      VARIANTARG * c694_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c694_ret = GetMethodPropertynew(c1_a1, c16_a0, c694_a2);
     
    
    /* Harness function #695 */
      VARIANTARG * c695_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c695_ret = GetMethodPropertynew(c13_a0, c1_a0, c695_a2);
     
    
    /* Harness function #696 */
      VARIANTARG * c696_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c696_ret = GetMethodPropertynew(c13_a0, c4_a0, c696_a2);
     
    
    /* Harness function #697 */
      VARIANTARG * c697_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c697_ret = GetMethodPropertynew(c13_a0, c13_a0, c697_a2);
     
    
    /* Harness function #698 */
      VARIANTARG * c698_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c698_ret = GetMethodPropertynew(c13_a0, c16_a0, c698_a2);
     
    
    /* Harness function #699 */
      VARIANTARG * c699_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c699_ret = GetMethodPropertynew(c16_a0, c1_a0, c699_a2);
     
    
    /* Harness function #700 */
      VARIANTARG * c700_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c700_ret = GetMethodPropertynew(c16_a0, c4_a0, c700_a2);
     
    
    /* Harness function #701 */
      VARIANTARG * c701_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c701_ret = GetMethodPropertynew(c16_a0, c13_a0, c701_a2);
     
    
    /* Harness function #702 */
      VARIANTARG * c702_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c702_ret = GetMethodPropertynew(c16_a0, c16_a0, c702_a2);
     
    
    /* Harness function #703 */
      VARIANTARG * c703_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c703_ret = GetMethodPropertynew(c19_a0, c1_a0, c703_a2);
     
    
    /* Harness function #704 */
      VARIANTARG * c704_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c704_ret = GetMethodPropertynew(c19_a0, c4_a0, c704_a2);
     
    
    /* Harness function #705 */
      VARIANTARG * c705_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c705_ret = GetMethodPropertynew(c19_a0, c13_a0, c705_a2);
     
    
    /* Harness function #706 */
      VARIANTARG * c706_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c706_ret = GetMethodPropertynew(c19_a0, c16_a0, c706_a2);
     
    
    /* Harness function #707 */
      VARIANTARG * c707_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c707_ret = GetMethodPropertynew(c22_a0, c1_a0, c707_a2);
     
    
    /* Harness function #708 */
      VARIANTARG * c708_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c708_ret = GetMethodPropertynew(c22_a0, c4_a0, c708_a2);
     
    
    /* Harness function #709 */
      VARIANTARG * c709_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c709_ret = GetMethodPropertynew(c22_a0, c13_a0, c709_a2);
     
    
    /* Harness function #710 */
      VARIANTARG * c710_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c710_ret = GetMethodPropertynew(c22_a0, c16_a0, c710_a2);
     
    
    /* Harness function #711 */
      VARIANTARG * c711_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c711_ret = GetMethodPropertynew(c25_a0, c1_a0, c711_a2);
     
    
    /* Harness function #712 */
      VARIANTARG * c712_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c712_ret = GetMethodPropertynew(c25_a0, c4_a0, c712_a2);
     
    
    /* Harness function #713 */
      VARIANTARG * c713_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c713_ret = GetMethodPropertynew(c25_a0, c13_a0, c713_a2);
     
    
    /* Harness function #714 */
      VARIANTARG * c714_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c714_ret = GetMethodPropertynew(c25_a0, c16_a0, c714_a2);
     
    
    /* Harness function #715 */
      VARIANTARG * c715_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c715_ret = GetMethodPropertynew(c28_a0, c1_a0, c715_a2);
     
    
    /* Harness function #716 */
      VARIANTARG * c716_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c716_ret = GetMethodPropertynew(c28_a0, c4_a0, c716_a2);
     
    
    /* Harness function #717 */
      VARIANTARG * c717_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c717_ret = GetMethodPropertynew(c28_a0, c13_a0, c717_a2);
     
    
    /* Harness function #718 */
      VARIANTARG * c718_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c718_ret = GetMethodPropertynew(c28_a0, c16_a0, c718_a2);
     
    
    /* Harness function #719 */
      VARIANTARG * c719_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c719_ret = GetMethodPropertynew(c3_a1, c1_a0, c719_a2);
     
    
    /* Harness function #720 */
      VARIANTARG * c720_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c720_ret = GetMethodPropertynew(c3_a1, c4_a0, c720_a2);
     
    
    /* Harness function #721 */
      VARIANTARG * c721_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c721_ret = GetMethodPropertynew(c3_a1, c13_a0, c721_a2);
     
    
    /* Harness function #722 */
      VARIANTARG * c722_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c722_ret = GetMethodPropertynew(c3_a1, c16_a0, c722_a2);
     
    
    /* Harness function #723 */
      VARIANTARG * c723_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c723_ret = GetMethodPropertynew(c34_a0, c1_a0, c723_a2);
     
    
    /* Harness function #724 */
      VARIANTARG * c724_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c724_ret = GetMethodPropertynew(c34_a0, c4_a0, c724_a2);
     
    
    /* Harness function #725 */
      VARIANTARG * c725_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c725_ret = GetMethodPropertynew(c34_a0, c13_a0, c725_a2);
     
    
    /* Harness function #726 */
      VARIANTARG * c726_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c726_ret = GetMethodPropertynew(c34_a0, c16_a0, c726_a2);
     
    
    /* Harness function #727 */
      VARIANTARG * c727_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c727_ret = GetMethodPropertynew(c37_a0, c1_a0, c727_a2);
     
    
    /* Harness function #728 */
      VARIANTARG * c728_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c728_ret = GetMethodPropertynew(c37_a0, c4_a0, c728_a2);
     
    
    /* Harness function #729 */
      VARIANTARG * c729_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c729_ret = GetMethodPropertynew(c37_a0, c13_a0, c729_a2);
     
    
    /* Harness function #730 */
      VARIANTARG * c730_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c730_ret = GetMethodPropertynew(c37_a0, c16_a0, c730_a2);
     
    
    /* Harness function #731 */
      VARIANTARG * c731_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c731_ret = GetMethodPropertynew(c40_a0, c1_a0, c731_a2);
     
    
    /* Harness function #732 */
      VARIANTARG * c732_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c732_ret = GetMethodPropertynew(c40_a0, c4_a0, c732_a2);
     
    
    /* Harness function #733 */
      VARIANTARG * c733_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c733_ret = GetMethodPropertynew(c40_a0, c13_a0, c733_a2);
     
    
    /* Harness function #734 */
      VARIANTARG * c734_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c734_ret = GetMethodPropertynew(c40_a0, c16_a0, c734_a2);
     
    
    /* Harness function #735 */
      VARIANTARG * c735_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c735_ret = GetMethodPropertynew(c43_a0, c1_a0, c735_a2);
     
    
    /* Harness function #736 */
      VARIANTARG * c736_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c736_ret = GetMethodPropertynew(c43_a0, c4_a0, c736_a2);
     
    
    /* Harness function #737 */
      VARIANTARG * c737_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c737_ret = GetMethodPropertynew(c43_a0, c13_a0, c737_a2);
     
    
    /* Harness function #738 */
      VARIANTARG * c738_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c738_ret = GetMethodPropertynew(c43_a0, c16_a0, c738_a2);
     
    
    /* Harness function #739 */
      VARIANTARG * c739_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c739_ret = GetMethodPropertynew(c46_a0, c1_a0, c739_a2);
     
    
    /* Harness function #740 */
      VARIANTARG * c740_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c740_ret = GetMethodPropertynew(c46_a0, c4_a0, c740_a2);
     
    
    /* Harness function #741 */
      VARIANTARG * c741_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c741_ret = GetMethodPropertynew(c46_a0, c13_a0, c741_a2);
     
    
    /* Harness function #742 */
      VARIANTARG * c742_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c742_ret = GetMethodPropertynew(c46_a0, c16_a0, c742_a2);
     
    
    /* Harness function #743 */
      VARIANTARG * c743_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c743_ret = GetMethodPropertynew(c49_a0, c1_a0, c743_a2);
     
    
    /* Harness function #744 */
      VARIANTARG * c744_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c744_ret = GetMethodPropertynew(c49_a0, c4_a0, c744_a2);
     
    
    /* Harness function #745 */
      VARIANTARG * c745_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c745_ret = GetMethodPropertynew(c49_a0, c13_a0, c745_a2);
     
    
    /* Harness function #746 */
      VARIANTARG * c746_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c746_ret = GetMethodPropertynew(c49_a0, c16_a0, c746_a2);
     
    
    /* Harness function #747 */
      VARIANTARG * c747_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c747_ret = GetMethodPropertynew(c52_a0, c1_a0, c747_a2);
     
    
    /* Harness function #748 */
      VARIANTARG * c748_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c748_ret = GetMethodPropertynew(c52_a0, c4_a0, c748_a2);
     
    
    /* Harness function #749 */
      VARIANTARG * c749_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c749_ret = GetMethodPropertynew(c52_a0, c13_a0, c749_a2);
     
    
    /* Harness function #750 */
      VARIANTARG * c750_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c750_ret = GetMethodPropertynew(c52_a0, c16_a0, c750_a2);
     
    
    /* Harness function #751 */
      VARIANTARG * c751_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c751_ret = GetMethodPropertynew(c55_a0, c1_a0, c751_a2);
     
    
    /* Harness function #752 */
      VARIANTARG * c752_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c752_ret = GetMethodPropertynew(c55_a0, c4_a0, c752_a2);
     
    
    /* Harness function #753 */
      VARIANTARG * c753_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c753_ret = GetMethodPropertynew(c55_a0, c13_a0, c753_a2);
     
    
    /* Harness function #754 */
      VARIANTARG * c754_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c754_ret = GetMethodPropertynew(c55_a0, c16_a0, c754_a2);
     
    
    /* Harness function #755 */
      VARIANTARG * c755_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c755_ret = GetMethodPropertynew(c58_a0, c1_a0, c755_a2);
     
    
    /* Harness function #756 */
      VARIANTARG * c756_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c756_ret = GetMethodPropertynew(c58_a0, c4_a0, c756_a2);
     
    
    /* Harness function #757 */
      VARIANTARG * c757_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c757_ret = GetMethodPropertynew(c58_a0, c13_a0, c757_a2);
     
    
    /* Harness function #758 */
      VARIANTARG * c758_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c758_ret = GetMethodPropertynew(c58_a0, c16_a0, c758_a2);
     
    
    /* Harness function #759 */
      VARIANTARG * c759_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c759_ret = GetMethodPropertynew(c61_a0, c1_a0, c759_a2);
     
    
    /* Harness function #760 */
      VARIANTARG * c760_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c760_ret = GetMethodPropertynew(c61_a0, c4_a0, c760_a2);
     
    
    /* Harness function #761 */
      VARIANTARG * c761_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c761_ret = GetMethodPropertynew(c61_a0, c13_a0, c761_a2);
     
    
    /* Harness function #762 */
      VARIANTARG * c762_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c762_ret = GetMethodPropertynew(c61_a0, c16_a0, c762_a2);
     
    
    /* Harness function #763 */
      VARIANTARG * c763_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c763_ret = GetMethodPropertynew(c64_a0, c1_a0, c763_a2);
     
    
    /* Harness function #764 */
      VARIANTARG * c764_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c764_ret = GetMethodPropertynew(c64_a0, c4_a0, c764_a2);
     
    
    /* Harness function #765 */
      VARIANTARG * c765_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c765_ret = GetMethodPropertynew(c64_a0, c13_a0, c765_a2);
     
    
    /* Harness function #766 */
      VARIANTARG * c766_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c766_ret = GetMethodPropertynew(c64_a0, c16_a0, c766_a2);
     
    
    /* Harness function #767 */
      VARIANTARG * c767_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c767_ret = GetMethodPropertynew(c67_a0, c1_a0, c767_a2);
     
    
    /* Harness function #768 */
      VARIANTARG * c768_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c768_ret = GetMethodPropertynew(c67_a0, c4_a0, c768_a2);
     
    
    /* Harness function #769 */
      VARIANTARG * c769_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c769_ret = GetMethodPropertynew(c67_a0, c13_a0, c769_a2);
     
    
    /* Harness function #770 */
      VARIANTARG * c770_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c770_ret = GetMethodPropertynew(c67_a0, c16_a0, c770_a2);
     
    
    /* Harness function #771 */
       VARIANTARG * c771_a3 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c771_ret = sub_100BFD60new(c71_a0, c1_a0, c1_a0, c771_a3);
     
    
    /* Harness function #772 */
       VARIANTARG * c772_a3 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c772_ret = sub_100BFD60new(c71_a0, c1_a0, c4_a0, c772_a3);
     
    
    /* Harness function #773 */
       VARIANTARG * c773_a3 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c773_ret = sub_100BFD60new(c71_a0, c4_a0, c1_a0, c773_a3);
     
    
    /* Harness function #774 */
       VARIANTARG * c774_a3 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c774_ret = sub_100BFD60new(c71_a0, c4_a0, c4_a0, c774_a3);
     
    
    /* Harness function #775 */
       VARIANTARG * c775_a3 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c775_ret = sub_100BFD60new(c71_a0, c2_a1, c1_a0, c775_a3);
     
    
    /* Harness function #776 */
       VARIANTARG * c776_a3 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c776_ret = sub_100BFD60new(c71_a0, c2_a1, c4_a0, c776_a3);
     
    
    /* Harness function #777 */
       VARIANTARG * c777_a3 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c777_ret = sub_100BFD60new(c71_a0, c1_a1, c1_a0, c777_a3);
     
    
    /* Harness function #778 */
       VARIANTARG * c778_a3 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c778_ret = sub_100BFD60new(c71_a0, c1_a1, c4_a0, c778_a3);
     
    
    /* Harness function #779 */
       VARIANTARG * c779_a3 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c779_ret = sub_100BFD60new(c71_a0, c13_a0, c1_a0, c779_a3);
     
    
    /* Harness function #780 */
       VARIANTARG * c780_a3 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c780_ret = sub_100BFD60new(c71_a0, c13_a0, c4_a0, c780_a3);
     
    
    /* Harness function #781 */
    int c781_a0 = 0xf01bcb0; void * c781_a1 = 0x23170f69; int c781_a2 = 0x19f334;    
    int c781_ret = CreateObjectnew(c781_a0, c781_a1, c781_a2);
     
    
    /* Harness function #782 */
    int c782_a0 = 0xfc611c8; int c782_a1 = 0xfc60f10; int c782_a2 = 0x19f25c; int c782_a3 = 0xfc60850;    
    int c782_ret = sub_10093329new(c782_a0, c782_a1, c782_a2, c782_a3);
     
    
    /* Harness function #783 */
     int c783_a1 = 0x47; VARIANTARG * c783_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c783_ret = sub_10092680new(c782_a0, c783_a1, c783_a2);
     
    
    /* Harness function #784 */
     int c784_a1 = 0x48; VARIANTARG * c784_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c784_ret = sub_10092680new(c782_a0, c784_a1, c784_a2);
     
    
    /* Harness function #785 */
      VARIANTARG * c785_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c785_ret = sub_10092680new(c782_a0, c638_a0, c785_a2);
     
    
    /* Harness function #786 */
     int c786_a1 = 0x49; VARIANTARG * c786_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c786_ret = sub_10092680new(c782_a0, c786_a1, c786_a2);
     
    
    /* Harness function #787 */
      VARIANTARG * c787_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c787_ret = sub_10092680new(c782_a0, c528_a0, c787_a2);
     
    
    /* Harness function #788 */
      VARIANTARG * c788_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c788_ret = sub_10092680new(c782_a0, c445_a0, c788_a2);
     
    
    /* Harness function #789 */    
    int c789_ret = sub_100145E6new(c782_a0);
     
    
    /* Harness function #790 */
    void * c790_a0 = (void *) calloc (4096, sizeof(void ));    
    int c790_ret = sub_10092462new(c790_a0);
     
    
    /* Harness function #791 */
     void * c791_a1 = 0x23170f69; int c791_a2 = 0x19f420;    
    int c791_ret = sub_100923B3new(c782_a0, c791_a1, c791_a2);
     
    
    /* Harness function #792 */
     void * c792_a1 = 0x23170f69; int c792_a2 = 0x19f424;    
    int c792_ret = sub_100923B3new(c782_a0, c792_a1, c792_a2);
     
    
    /* Harness function #793 */
     int c793_a1 = 0x42; VARIANTARG * c793_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c793_ret = sub_10092680new(c782_a0, c793_a1, c793_a2);
     
    
    /* Harness function #794 */
     int c794_a1 = 0x41; VARIANTARG * c794_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c794_ret = sub_10092680new(c782_a0, c794_a1, c794_a2);
     
    
    /* Harness function #795 */
     int c795_a1 = 0x3f; VARIANTARG * c795_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c795_ret = sub_10092680new(c782_a0, c795_a1, c795_a2);
     
    
    /* Harness function #796 */
     int c796_a1 = 0x40; VARIANTARG * c796_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c796_ret = sub_10092680new(c782_a0, c796_a1, c796_a2);
     
    
    /* Harness function #797 */
     int c797_a1 = 0x5b; VARIANTARG * c797_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c797_ret = sub_10092680new(c782_a0, c797_a1, c797_a2);
     
    
    /* Harness function #798 */
     int c798_a1 = 0x5d; VARIANTARG * c798_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c798_ret = sub_10092680new(c782_a0, c798_a1, c798_a2);
     
    
    /* Harness function #799 */    
    int c799_ret = sub_100145E6new(c782_a0);
     
    
    /* Harness function #800 */
    void * c800_a0 = (void *) calloc (4096, sizeof(void ));    
    int c800_ret = sub_10092462new(c800_a0);
     
    
    /* Harness function #801 */
      VARIANTARG * c801_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c801_ret = sub_10092680new(c782_a0, c4_a0, c801_a2);
     
    
    /* Harness function #802 */
      VARIANTARG * c802_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c802_ret = sub_10092680new(c782_a0, c528_a0, c802_a2);
     
    
    /* Harness function #803 */
     int c803_a1 = 0x19f694;    
    int c803_ret = sub_10092639new(c782_a0, c803_a1);
     
    
    /* Harness function #804 */
      int c804_a2 = 0x19f6a0;  int c804_a4 = 0x19f6aa;    
    int c804_ret = sub_10092648new(c782_a0, c1_a0, c804_a2, *((int*)c802_a2[108]), c804_a4);
     
    
    /* Harness function #805 */
     int c805_a1 = 0x58; VARIANTARG * c805_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c805_ret = sub_10092680new(c782_a0, c805_a1, c805_a2);
     
    
    /* Harness function #806 */    
    int c806_ret = sub_10092648new(c782_a0, c4_a0, c804_a2, *((int*)c802_a2[108]), c804_a4);
     
    
    /* Harness function #807 */
      VARIANTARG * c807_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c807_ret = sub_10092680new(c782_a0, c498_a0, c807_a2);
     
    
    /* Harness function #808 */    
    int c808_ret = sub_10092648new(c782_a0, c2_a1, c804_a2, *((int*)c802_a2[108]), c804_a4);
     
    
    /* Harness function #809 */
      VARIANTARG * c809_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c809_ret = sub_10092680new(c782_a0, c362_a0, c809_a2);
     
    
    /* Harness function #810 */    
    int c810_ret = sub_10092648new(c782_a0, c1_a1, c804_a2, *((int*)c802_a2[108]), c804_a4);
     
    
    /* Harness function #811 */
      VARIANTARG * c811_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c811_ret = sub_10092680new(c782_a0, c558_a0, c811_a2);
     
    
    /* Harness function #812 */    
    int c812_ret = sub_10092648new(c782_a0, c13_a0, c804_a2, *((int*)c802_a2[108]), c804_a4);
     
    
    /* Harness function #813 */
     int c813_a1 = 0x4f; VARIANTARG * c813_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c813_ret = sub_10092680new(c782_a0, c813_a1, c813_a2);
     
    
    /* Harness function #814 */    
    int c814_ret = sub_10092648new(c782_a0, c16_a0, c804_a2, *((int*)c802_a2[108]), c804_a4);
     
    
    /* Harness function #815 */
      VARIANTARG * c815_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c815_ret = sub_10092680new(c782_a0, c434_a0, c815_a2);
     
    
    /* Harness function #816 */    
    int c816_ret = sub_10092648new(c782_a0, c19_a0, c804_a2, *((int*)c802_a2[108]), c804_a4);
     
    
    /* Harness function #817 */
     int c817_a1 = 0x50; VARIANTARG * c817_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c817_ret = sub_10092680new(c782_a0, c817_a1, c817_a2);
     
    
    /* Harness function #818 */    
    int c818_ret = sub_10092648new(c782_a0, c22_a0, c804_a2, *((int*)c802_a2[108]), c804_a4);
     
    
    /* Harness function #819 */
      VARIANTARG * c819_a2 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c819_ret = sub_10092680new(c782_a0, c477_a0, c819_a2);
     
    
    /* Harness function #820 */
     int c820_a1 = 0x19f6c8;    
    int c820_ret = sub_1003167Enew(c782_a0, c820_a1);
     
    
    /* Harness function #821 */    
    int c821_ret = sub_10094E10new(c782_a0, *((int*)c809_a2[4]), c4_a0, c1_a0, *((int*)c783_a2[1724]));
     
    
    /* Harness function #822 */
       VARIANTARG * c822_a3 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c822_ret = sub_10092BB3new(c782_a0, c1_a0, c19_a0, c822_a3);
     
    
    /* Harness function #823 */
       VARIANTARG * c823_a3 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c823_ret = sub_10092BB3new(c782_a0, c1_a0, c1_a1, c823_a3);
     
    
    /* Harness function #824 */
       VARIANTARG * c824_a3 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c824_ret = sub_10092BB3new(c782_a0, c1_a0, c373_a0, c824_a3);
     
    
    /* Harness function #825 */
      int c825_a2 = 0x5a; VARIANTARG * c825_a3 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c825_ret = sub_10092BB3new(c782_a0, c1_a0, c825_a2, c825_a3);
     
    
    /* Harness function #826 */
       VARIANTARG * c826_a3 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c826_ret = sub_10092BB3new(c782_a0, c1_a0, c628_a0, c826_a3);
     
    
    /* Harness function #827 */
       VARIANTARG * c827_a3 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c827_ret = sub_10092BB3new(c782_a0, c1_a0, c46_a0, c827_a3);
     
    
    /* Harness function #828 */
       VARIANTARG * c828_a3 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c828_ret = sub_10092BB3new(c782_a0, c1_a0, c22_a0, c828_a3);
     
    
    /* Harness function #829 */
       VARIANTARG * c829_a3 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c829_ret = sub_10092BB3new(c782_a0, c1_a0, c618_a0, c829_a3);
     
    
    /* Harness function #830 */
       VARIANTARG * c830_a3 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c830_ret = sub_10092BB3new(c782_a0, c1_a0, c28_a0, c830_a3);
     
    
    /* Harness function #831 */
       VARIANTARG * c831_a3 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c831_ret = sub_10092BB3new(c782_a0, c1_a0, c3_a1, c831_a3);
     
    
    /* Harness function #832 */
       VARIANTARG * c832_a3 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c832_ret = sub_10092BB3new(c782_a0, c1_a0, c34_a0, c832_a3);
     
    
    /* Harness function #833 */
       VARIANTARG * c833_a3 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c833_ret = sub_10092BB3new(c782_a0, c1_a0, c37_a0, c833_a3);
     
    
    /* Harness function #834 */
       VARIANTARG * c834_a3 = (VARIANTARG *) calloc (4096, sizeof(VARIANTARG ));    
    int c834_ret = sub_10092BB3new(c782_a0, c1_a0, c64_a0, c834_a3);
     
    
    /* Harness function #835 */    
    int c835_ret = sub_10092462new(c782_a0);
     
    
    /* Harness function #836 */    
    int c836_ret = sub_100A12F0new(c71_a0);
     

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
