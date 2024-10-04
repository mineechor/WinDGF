
ASCII_BYTE = ' !"#\\$%&\'\\(\\)\\*\\+,-\\./0123456789:;<=>\\?@ABCDEFGHIJKLMNOPQRSTUVWXYZ\\[\\]\\^_`abcdefghijklmnopqrstuvwxyz\\{\\|\\}\\\\~\t'

# Directory structure
MAIN_TRACE   = 'cor1_1'
SECOND_TRACE = 'cor1_2'
DIFF_TRACE   = 'cor2_1'
INPUT1       = 'input1'
INPUT2       = 'input2'
FUNCTYPE     = 'functype'

HEADER = """
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 
#include <windows.h>
#include <tchar.h>
#include <iostream>


wchar_t* charToWChar(const char* text);
void fuzz_me(HINSTANCE hinstLib, wchar_t* pathfile);
{typedef}

"""

FUZZME = """
void fuzz_me(HINSTANCE hinstLib,wchar_t* filename){

{funcdef}

{loaddef}

{harness}

}
"""

MAIN = """
int main(int argc, char ** argv)
{
    if (argc < 2) {
        printf("Usage %s: <input file>\\n", argv[0]);
        printf("  e.g., harness.exe input\\n");
        exit(1);
    }
    HINSTANCE hinstLib;
    BOOL fFreeResult = FALSE;
    hinstLib = LoadLibraryA("%s");
    if (hinstLib == NULL){
        printf("failed to load library, gle = %d\\n", GetLastError());
        exit(1);
    }
    wchar_t * filename = charToWChar(argv[1]);   
    fuzz_me(hinstLib,filename); 
    fFreeResult = FreeLibrary(hinstLib);   
    return 0;
}
""" 
F = """
wchar_t* charToWChar(const char* text)
{
	size_t size = strlen(text) + 1;
	wchar_t* wa = new wchar_t[size];
	mbstowcs(wa, text, size);
	return wa;
}
"""
"""
    LOAD_FUNC(dlllib, avformat_open_input);
    int ret_avformat_open_input = avformat_open_input_func(&ctx_org, filename, 0, &avformat_open_input_arg3);  // zeros: if pointer one page ==> copy original page to that page ==> if error
    dbg_printf("avformat_open_input: ret = %d\n", ret_avformat_open_input); // @jinho: check crash / progress
"""

FUNC = """    
    {print_cid}    
    {ret_statement}{funcname}new({arguments});
     """

FUNC_WO = """    
    {print_cid}
    {ret_statement}{funcname}new({arguments});
     """