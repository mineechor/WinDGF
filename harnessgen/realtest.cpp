#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 
#include <windows.h>
#include <tchar.h>
#include <iostream>
using namespace std;
int main()
{
    HINSTANCE hinstLib;
    BOOL fFreeResult = FALSE;
    hinstLib = LoadLibraryA(TEXT("D:\\2022\\final\\Winnie\\7ZIP\\7-Zip\\7z.dll"));
    if (hinstLib == NULL){
        printf("failed to load library, gle = %d\n", GetLastError());
        exit(1);
    }
    printf("%x",hinstLib);
    return 0;
}