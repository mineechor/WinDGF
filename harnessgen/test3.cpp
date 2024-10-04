
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 
#include <windows.h>
#include <tchar.h>
#include <iostream>


wchar_t* charToWChar(const char* text);
void fuzz_me(HINSTANCE hinstLib, wchar_t* pathfile);
typedef int (__cdecl *fz_new_context_imp)(int, int, int, int);
typedef int (__cdecl *fz_device_rgb)(int);
typedef int (__cdecl *fz_new_pixmap)(int, int, int, int, int, int);
typedef int (__cdecl *fz_new_buffer_from_copied_data)(int, int, int);
typedef int (__cdecl *fz_new_image_from_svg)(int, int, int, int);
typedef int (__cdecl *fz_get_pixmap_from_image)(int, int, int, int, int, int);
typedef int (__cdecl *pdf_drop_pattern)();
typedef int (__cdecl *fz_drop_image)(int, int);
typedef int (__cdecl *fz_drop_buffer)(int, int);
typedef int (__cdecl *fz_drop_context)(int);
typedef int (__cdecl *fz_set_warning_callback)(int, int, int);
typedef int (__cdecl *fz_set_error_callback)(int, int, int);
typedef int (__cdecl *pdf_install_load_system_font_funcs)(int);
typedef int (__cdecl *fz_register_document_handlers)(int);
typedef int (__cdecl *fz_var_imp)();
typedef int (__cdecl *fz_push_try)(int);
typedef int (__cdecl *fz_do_try)(int);
typedef int (__cdecl *fz_malloc_no_throw)(int, int);
typedef int (__cdecl *fz_new_buffer_from_data)(int, int, int);
typedef int (__cdecl *fz_open_buffer)(int, int);
typedef int (__cdecl *fz_do_always)(int);
typedef int (__cdecl *fz_do_catch)(int);
typedef int (__cdecl *fz_open_document_with_stream)(int, int, int);
typedef int (__cdecl *pdf_specifics)();
typedef int (__cdecl *fz_layout_document)(int, int, int, int, int);
typedef int (__cdecl *fz_drop_stream)(int, int);
typedef int (__cdecl *fz_needs_password)(int, int);
typedef int (__cdecl *fz_count_pages)(int, int);
typedef int (__cdecl *pdf_trailer)(int, int);
typedef int (__cdecl *pdf_dict_gets)(int, int, int);
typedef int (__cdecl *pdf_to_name)(int, int);
typedef int (__cdecl *fz_has_permission)(int, int, int);
typedef int (__cdecl *pdf_load_page_tree)(int, int);
typedef int (__cdecl *pdf_load_object)(int, int, int);
typedef int (__cdecl *pdf_page_obj_transform)(int, int, int, int);
typedef int (__cdecl *fz_transform_rect)(int, int, int, int, int, int, int, int, int, int, int);
typedef int (__cdecl *pdf_drop_obj)(int, int);
typedef int (__cdecl *fz_load_outline)(int, int);
typedef int (__cdecl *pdf_load_name_tree)(int, int, int);
typedef int (__cdecl *pdf_copy_dict)(int, int);
typedef int (__cdecl *pdf_dict_len)(int, int);
typedef int (__cdecl *pdf_dict_get_val)(int, int, int);
typedef int (__cdecl *pdf_is_indirect)(int, int);
typedef int (__cdecl *pdf_doc_was_linearized)(int, int);
typedef int (__cdecl *pdf_dict_getp)(int, int, int);
typedef int (__cdecl *pdf_to_bool)(int, int);
typedef int (__cdecl *pdf_is_array)(int, int);
typedef int (__cdecl *pdf_js_supported)(int, int);
typedef int (__cdecl *fz_rotate)();
typedef int (__cdecl *fz_pre_scale)(int, int, int, int, int, int, int, int, int);
typedef int (__cdecl *fz_matrix_expansion)(int, int, int, int);
typedef int (__cdecl *fz_lookup_metadata)(int, int, int, int, int);
typedef int (__cdecl *pdf_new_utf8_from_pdf_string_obj)(int, int);
typedef int (__cdecl *fz_free)(int, int);
typedef int (__cdecl *fz_invert_matrix)(int, int, int, int, int, int, int);
typedef int (__cdecl *fz_load_page)(int, int, int);
typedef int (__cdecl *pdf_page_from_fz_page)(int, int);
typedef int (__cdecl *pdf_first_annot)(int, int);
typedef int (__cdecl *fz_drop_page)(int, int);
typedef int (__cdecl *fz_drop_outline)(int, int);
typedef int (__cdecl *pdf_drop_page_tree)(int, int);
typedef int (__cdecl *fz_drop_document)(int, int);
typedef int (__cdecl *drop_cached_fonts_for_ctx)(int);


void fuzz_me(HINSTANCE hinstLib,wchar_t* filename){

    fz_new_context_imp fz_new_context_impnew;
    fz_device_rgb fz_device_rgbnew;
    fz_new_pixmap fz_new_pixmapnew;
    fz_new_buffer_from_copied_data fz_new_buffer_from_copied_datanew;
    fz_new_image_from_svg fz_new_image_from_svgnew;
    fz_get_pixmap_from_image fz_get_pixmap_from_imagenew;
    pdf_drop_pattern pdf_drop_patternnew;
    fz_drop_image fz_drop_imagenew;
    fz_drop_buffer fz_drop_buffernew;
    fz_drop_context fz_drop_contextnew;
    fz_set_warning_callback fz_set_warning_callbacknew;
    fz_set_error_callback fz_set_error_callbacknew;
    pdf_install_load_system_font_funcs pdf_install_load_system_font_funcsnew;
    fz_register_document_handlers fz_register_document_handlersnew;
    fz_var_imp fz_var_impnew;
    fz_push_try fz_push_trynew;
    fz_do_try fz_do_trynew;
    fz_malloc_no_throw fz_malloc_no_thrownew;
    fz_new_buffer_from_data fz_new_buffer_from_datanew;
    fz_open_buffer fz_open_buffernew;
    fz_do_always fz_do_alwaysnew;
    fz_do_catch fz_do_catchnew;
    fz_open_document_with_stream fz_open_document_with_streamnew;
    pdf_specifics pdf_specificsnew;
    fz_layout_document fz_layout_documentnew;
    fz_drop_stream fz_drop_streamnew;
    fz_needs_password fz_needs_passwordnew;
    fz_count_pages fz_count_pagesnew;
    pdf_trailer pdf_trailernew;
    pdf_dict_gets pdf_dict_getsnew;
    pdf_to_name pdf_to_namenew;
    fz_has_permission fz_has_permissionnew;
    pdf_load_page_tree pdf_load_page_treenew;
    pdf_load_object pdf_load_objectnew;
    pdf_page_obj_transform pdf_page_obj_transformnew;
    fz_transform_rect fz_transform_rectnew;
    pdf_drop_obj pdf_drop_objnew;
    fz_load_outline fz_load_outlinenew;
    pdf_load_name_tree pdf_load_name_treenew;
    pdf_copy_dict pdf_copy_dictnew;
    pdf_dict_len pdf_dict_lennew;
    pdf_dict_get_val pdf_dict_get_valnew;
    pdf_is_indirect pdf_is_indirectnew;
    pdf_doc_was_linearized pdf_doc_was_linearizednew;
    pdf_dict_getp pdf_dict_getpnew;
    pdf_to_bool pdf_to_boolnew;
    pdf_is_array pdf_is_arraynew;
    pdf_js_supported pdf_js_supportednew;
    fz_rotate fz_rotatenew;
    fz_pre_scale fz_pre_scalenew;
    fz_matrix_expansion fz_matrix_expansionnew;
    fz_lookup_metadata fz_lookup_metadatanew;
    pdf_new_utf8_from_pdf_string_obj pdf_new_utf8_from_pdf_string_objnew;
    fz_free fz_freenew;
    fz_invert_matrix fz_invert_matrixnew;
    fz_load_page fz_load_pagenew;
    pdf_page_from_fz_page pdf_page_from_fz_pagenew;
    pdf_first_annot pdf_first_annotnew;
    fz_drop_page fz_drop_pagenew;
    fz_drop_outline fz_drop_outlinenew;
    pdf_drop_page_tree pdf_drop_page_treenew;
    fz_drop_document fz_drop_documentnew;
    drop_cached_fonts_for_ctx drop_cached_fonts_for_ctxnew;

    fz_new_context_impnew = (fz_new_context_imp)GetProcAddress(hinstLib,"fz_new_context_imp");
    fz_device_rgbnew = (fz_device_rgb)GetProcAddress(hinstLib,"fz_device_rgb");
    fz_new_pixmapnew = (fz_new_pixmap)GetProcAddress(hinstLib,"fz_new_pixmap");
    fz_new_buffer_from_copied_datanew = (fz_new_buffer_from_copied_data)GetProcAddress(hinstLib,"fz_new_buffer_from_copied_data");
    fz_new_image_from_svgnew = (fz_new_image_from_svg)GetProcAddress(hinstLib,"fz_new_image_from_svg");
    fz_get_pixmap_from_imagenew = (fz_get_pixmap_from_image)GetProcAddress(hinstLib,"fz_get_pixmap_from_image");
    pdf_drop_patternnew = (pdf_drop_pattern)GetProcAddress(hinstLib,"pdf_drop_pattern");
    fz_drop_imagenew = (fz_drop_image)GetProcAddress(hinstLib,"fz_drop_image");
    fz_drop_buffernew = (fz_drop_buffer)GetProcAddress(hinstLib,"fz_drop_buffer");
    fz_drop_contextnew = (fz_drop_context)GetProcAddress(hinstLib,"fz_drop_context");
    fz_set_warning_callbacknew = (fz_set_warning_callback)GetProcAddress(hinstLib,"fz_set_warning_callback");
    fz_set_error_callbacknew = (fz_set_error_callback)GetProcAddress(hinstLib,"fz_set_error_callback");
    pdf_install_load_system_font_funcsnew = (pdf_install_load_system_font_funcs)GetProcAddress(hinstLib,"pdf_install_load_system_font_funcs");
    fz_register_document_handlersnew = (fz_register_document_handlers)GetProcAddress(hinstLib,"fz_register_document_handlers");
    fz_var_impnew = (fz_var_imp)GetProcAddress(hinstLib,"fz_var_imp");
    fz_push_trynew = (fz_push_try)GetProcAddress(hinstLib,"fz_push_try");
    fz_do_trynew = (fz_do_try)GetProcAddress(hinstLib,"fz_do_try");
    fz_malloc_no_thrownew = (fz_malloc_no_throw)GetProcAddress(hinstLib,"fz_malloc_no_throw");
    fz_new_buffer_from_datanew = (fz_new_buffer_from_data)GetProcAddress(hinstLib,"fz_new_buffer_from_data");
    fz_open_buffernew = (fz_open_buffer)GetProcAddress(hinstLib,"fz_open_buffer");
    fz_do_alwaysnew = (fz_do_always)GetProcAddress(hinstLib,"fz_do_always");
    fz_do_catchnew = (fz_do_catch)GetProcAddress(hinstLib,"fz_do_catch");
    fz_open_document_with_streamnew = (fz_open_document_with_stream)GetProcAddress(hinstLib,"fz_open_document_with_stream");
    pdf_specificsnew = (pdf_specifics)GetProcAddress(hinstLib,"pdf_specifics");
    fz_layout_documentnew = (fz_layout_document)GetProcAddress(hinstLib,"fz_layout_document");
    fz_drop_streamnew = (fz_drop_stream)GetProcAddress(hinstLib,"fz_drop_stream");
    fz_needs_passwordnew = (fz_needs_password)GetProcAddress(hinstLib,"fz_needs_password");
    fz_count_pagesnew = (fz_count_pages)GetProcAddress(hinstLib,"fz_count_pages");
    pdf_trailernew = (pdf_trailer)GetProcAddress(hinstLib,"pdf_trailer");
    pdf_dict_getsnew = (pdf_dict_gets)GetProcAddress(hinstLib,"pdf_dict_gets");
    pdf_to_namenew = (pdf_to_name)GetProcAddress(hinstLib,"pdf_to_name");
    fz_has_permissionnew = (fz_has_permission)GetProcAddress(hinstLib,"fz_has_permission");
    pdf_load_page_treenew = (pdf_load_page_tree)GetProcAddress(hinstLib,"pdf_load_page_tree");
    pdf_load_objectnew = (pdf_load_object)GetProcAddress(hinstLib,"pdf_load_object");
    pdf_page_obj_transformnew = (pdf_page_obj_transform)GetProcAddress(hinstLib,"pdf_page_obj_transform");
    fz_transform_rectnew = (fz_transform_rect)GetProcAddress(hinstLib,"fz_transform_rect");
    pdf_drop_objnew = (pdf_drop_obj)GetProcAddress(hinstLib,"pdf_drop_obj");
    fz_load_outlinenew = (fz_load_outline)GetProcAddress(hinstLib,"fz_load_outline");
    pdf_load_name_treenew = (pdf_load_name_tree)GetProcAddress(hinstLib,"pdf_load_name_tree");
    pdf_copy_dictnew = (pdf_copy_dict)GetProcAddress(hinstLib,"pdf_copy_dict");
    pdf_dict_lennew = (pdf_dict_len)GetProcAddress(hinstLib,"pdf_dict_len");
    pdf_dict_get_valnew = (pdf_dict_get_val)GetProcAddress(hinstLib,"pdf_dict_get_val");
    pdf_is_indirectnew = (pdf_is_indirect)GetProcAddress(hinstLib,"pdf_is_indirect");
    pdf_doc_was_linearizednew = (pdf_doc_was_linearized)GetProcAddress(hinstLib,"pdf_doc_was_linearized");
    pdf_dict_getpnew = (pdf_dict_getp)GetProcAddress(hinstLib,"pdf_dict_getp");
    pdf_to_boolnew = (pdf_to_bool)GetProcAddress(hinstLib,"pdf_to_bool");
    pdf_is_arraynew = (pdf_is_array)GetProcAddress(hinstLib,"pdf_is_array");
    pdf_js_supportednew = (pdf_js_supported)GetProcAddress(hinstLib,"pdf_js_supported");
    fz_rotatenew = (fz_rotate)GetProcAddress(hinstLib,"fz_rotate");
    fz_pre_scalenew = (fz_pre_scale)GetProcAddress(hinstLib,"fz_pre_scale");
    fz_matrix_expansionnew = (fz_matrix_expansion)GetProcAddress(hinstLib,"fz_matrix_expansion");
    fz_lookup_metadatanew = (fz_lookup_metadata)GetProcAddress(hinstLib,"fz_lookup_metadata");
    pdf_new_utf8_from_pdf_string_objnew = (pdf_new_utf8_from_pdf_string_obj)GetProcAddress(hinstLib,"pdf_new_utf8_from_pdf_string_obj");
    fz_freenew = (fz_free)GetProcAddress(hinstLib,"fz_free");
    fz_invert_matrixnew = (fz_invert_matrix)GetProcAddress(hinstLib,"fz_invert_matrix");
    fz_load_pagenew = (fz_load_page)GetProcAddress(hinstLib,"fz_load_page");
    pdf_page_from_fz_pagenew = (pdf_page_from_fz_page)GetProcAddress(hinstLib,"pdf_page_from_fz_page");
    pdf_first_annotnew = (pdf_first_annot)GetProcAddress(hinstLib,"pdf_first_annot");
    fz_drop_pagenew = (fz_drop_page)GetProcAddress(hinstLib,"fz_drop_page");
    fz_drop_outlinenew = (fz_drop_outline)GetProcAddress(hinstLib,"fz_drop_outline");
    pdf_drop_page_treenew = (pdf_drop_page_tree)GetProcAddress(hinstLib,"pdf_drop_page_tree");
    fz_drop_documentnew = (fz_drop_document)GetProcAddress(hinstLib,"fz_drop_document");
    drop_cached_fonts_for_ctxnew = (drop_cached_fonts_for_ctx)GetProcAddress(hinstLib,"drop_cached_fonts_for_ctx");

    
    /* Harness function #0 */    
    int c0_ret = fz_new_context_impnew();
     
    
    /* Harness function #1 */    
    int c1_ret = fz_device_rgbnew();
     
    
    /* Harness function #2 */    
    int c2_ret = fz_new_pixmapnew();
     
    
    /* Harness function #3 */    
    int c3_ret = fz_new_buffer_from_copied_datanew();
     
    
    /* Harness function #4 */    
    int c4_ret = fz_new_image_from_svgnew();
     
    
    /* Harness function #5 */    
    int c5_ret = fz_get_pixmap_from_imagenew();
     
    
    /* Harness function #6 */    
    int c6_ret = pdf_drop_patternnew();
     
    
    /* Harness function #7 */    
    int c7_ret = fz_drop_imagenew();
     
    
    /* Harness function #8 */    
    int c8_ret = fz_drop_buffernew();
     
    
    /* Harness function #9 */
    int c9_a0 = c0_ret; int c9_a1 = 0x4dc758; int c9_a2 = 0x1fa;    
    int c9_ret = fz_new_buffer_from_copied_datanew(c9_a0, c9_a1, c9_a2);
     
    
    /* Harness function #10 */
     int c10_a1 = c3_ret; int c10_a2 = c6_ret;     
    int c10_ret = fz_new_image_from_svgnew(c9_a0, c10_a1, c10_a2, c10_a2);
     
    
    /* Harness function #11 */
     int c11_a1 = c4_ret;        
    int c11_ret = fz_get_pixmap_from_imagenew(c9_a0, c11_a1, c10_a2, c10_a2, c10_a2, c10_a2);
     
    
    /* Harness function #12 */    
    int c12_ret = pdf_drop_patternnew();
     
    
    /* Harness function #13 */    
    int c13_ret = fz_drop_imagenew(c9_a0, c11_a1);
     
    
    /* Harness function #14 */    
    int c14_ret = fz_drop_buffernew(c9_a0, c10_a1);
     
    
    /* Harness function #15 */
     int c15_a1 = 0x4dcc98; int c15_a2 = 0x1aa;    
    int c15_ret = fz_new_buffer_from_copied_datanew(c9_a0, c15_a1, c15_a2);
     
    
    /* Harness function #16 */    
    int c16_ret = fz_new_image_from_svgnew(c9_a0, c10_a1, c10_a2, c10_a2);
     
    
    /* Harness function #17 */    
    int c17_ret = fz_get_pixmap_from_imagenew(c9_a0, c11_a1, c10_a2, c10_a2, c10_a2, c10_a2);
     
    
    /* Harness function #18 */    
    int c18_ret = pdf_drop_patternnew();
     
    
    /* Harness function #19 */    
    int c19_ret = fz_drop_imagenew(c9_a0, c11_a1);
     
    
    /* Harness function #20 */    
    int c20_ret = fz_drop_buffernew(c9_a0, c10_a1);
     
    
    /* Harness function #21 */
     int c21_a1 = 0x4dcae8; int c21_a2 = 0x1ad;    
    int c21_ret = fz_new_buffer_from_copied_datanew(c9_a0, c21_a1, c21_a2);
     
    
    /* Harness function #22 */
     int c22_a1 = c21_ret;      
    int c22_ret = fz_new_image_from_svgnew(c9_a0, c22_a1, c10_a2, c10_a2);
     
    
    /* Harness function #23 */    
    int c23_ret = fz_get_pixmap_from_imagenew(c9_a0, c11_a1, c10_a2, c10_a2, c10_a2, c10_a2);
     
    
    /* Harness function #24 */    
    int c24_ret = pdf_drop_patternnew();
     
    
    /* Harness function #25 */    
    int c25_ret = fz_drop_imagenew(c9_a0, c11_a1);
     
    
    /* Harness function #26 */    
    int c26_ret = fz_drop_buffernew(c9_a0, c22_a1);
     
    
    /* Harness function #27 */
     int c27_a1 = 0x4dcfa8; int c27_a2 = 0x18d;    
    int c27_ret = fz_new_buffer_from_copied_datanew(c9_a0, c27_a1, c27_a2);
     
    
    /* Harness function #28 */    
    int c28_ret = fz_new_image_from_svgnew(c9_a0, c10_a1, c10_a2, c10_a2);
     
    
    /* Harness function #29 */    
    int c29_ret = fz_get_pixmap_from_imagenew(c9_a0, c11_a1, c10_a2, c10_a2, c10_a2, c10_a2);
     
    
    /* Harness function #30 */    
    int c30_ret = pdf_drop_patternnew();
     
    
    /* Harness function #31 */    
    int c31_ret = fz_drop_imagenew(c9_a0, c11_a1);
     
    
    /* Harness function #32 */    
    int c32_ret = fz_drop_buffernew(c9_a0, c10_a1);
     
    
    /* Harness function #33 */
     int c33_a1 = 0x4dce48; int c33_a2 = 0x15e;    
    int c33_ret = fz_new_buffer_from_copied_datanew(c9_a0, c33_a1, c33_a2);
     
    
    /* Harness function #34 */    
    int c34_ret = fz_new_image_from_svgnew(c9_a0, c10_a1, c10_a2, c10_a2);
     
    
    /* Harness function #35 */    
    int c35_ret = fz_get_pixmap_from_imagenew(c9_a0, c11_a1, c10_a2, c10_a2, c10_a2, c10_a2);
     
    
    /* Harness function #36 */    
    int c36_ret = pdf_drop_patternnew();
     
    
    /* Harness function #37 */    
    int c37_ret = fz_drop_imagenew(c9_a0, c11_a1);
     
    
    /* Harness function #38 */    
    int c38_ret = fz_drop_buffernew(c9_a0, c10_a1);
     
    
    /* Harness function #39 */
     int c39_a1 = 0x4dd920; int c39_a2 = 0x1a3;    
    int c39_ret = fz_new_buffer_from_copied_datanew(c9_a0, c39_a1, c39_a2);
     
    
    /* Harness function #40 */    
    int c40_ret = fz_new_image_from_svgnew(c9_a0, c22_a1, c10_a2, c10_a2);
     
    
    /* Harness function #41 */    
    int c41_ret = fz_get_pixmap_from_imagenew(c9_a0, c11_a1, c10_a2, c10_a2, c10_a2, c10_a2);
     
    
    /* Harness function #42 */    
    int c42_ret = pdf_drop_patternnew();
     
    
    /* Harness function #43 */    
    int c43_ret = fz_drop_imagenew(c9_a0, c11_a1);
     
    
    /* Harness function #44 */    
    int c44_ret = fz_drop_buffernew(c9_a0, c22_a1);
     
    
    /* Harness function #45 */
     int c45_a1 = 0x4dd3e8; int c45_a2 = 0x1cc;    
    int c45_ret = fz_new_buffer_from_copied_datanew(c9_a0, c45_a1, c45_a2);
     
    
    /* Harness function #46 */    
    int c46_ret = fz_new_image_from_svgnew(c9_a0, c10_a1, c10_a2, c10_a2);
     
    
    /* Harness function #47 */    
    int c47_ret = fz_get_pixmap_from_imagenew(c9_a0, c11_a1, c10_a2, c10_a2, c10_a2, c10_a2);
     
    
    /* Harness function #48 */    
    int c48_ret = pdf_drop_patternnew();
     
    
    /* Harness function #49 */    
    int c49_ret = fz_drop_imagenew(c9_a0, c11_a1);
     
    
    /* Harness function #50 */    
    int c50_ret = fz_drop_buffernew(c9_a0, c10_a1);
     
    
    /* Harness function #51 */
     int c51_a1 = 0x4dd290; int c51_a2 = 0x157;    
    int c51_ret = fz_new_buffer_from_copied_datanew(c9_a0, c51_a1, c51_a2);
     
    
    /* Harness function #52 */
     int c52_a1 = c51_ret;      
    int c52_ret = fz_new_image_from_svgnew(c9_a0, c52_a1, c10_a2, c10_a2);
     
    
    /* Harness function #53 */    
    int c53_ret = fz_get_pixmap_from_imagenew(c9_a0, c11_a1, c10_a2, c10_a2, c10_a2, c10_a2);
     
    
    /* Harness function #54 */    
    int c54_ret = pdf_drop_patternnew();
     
    
    /* Harness function #55 */    
    int c55_ret = fz_drop_imagenew(c9_a0, c11_a1);
     
    
    /* Harness function #56 */    
    int c56_ret = fz_drop_buffernew(c9_a0, c52_a1);
     
    
    /* Harness function #57 */
     int c57_a1 = 0x4dd138;     
    int c57_ret = fz_new_buffer_from_copied_datanew(c9_a0, c57_a1, c51_a2);
     
    
    /* Harness function #58 */    
    int c58_ret = fz_new_image_from_svgnew(c9_a0, c10_a1, c10_a2, c10_a2);
     
    
    /* Harness function #59 */    
    int c59_ret = fz_get_pixmap_from_imagenew(c9_a0, c11_a1, c10_a2, c10_a2, c10_a2, c10_a2);
     
    
    /* Harness function #60 */    
    int c60_ret = pdf_drop_patternnew();
     
    
    /* Harness function #61 */    
    int c61_ret = fz_drop_imagenew(c9_a0, c11_a1);
     
    
    /* Harness function #62 */    
    int c62_ret = fz_drop_buffernew(c9_a0, c10_a1);
     
    
    /* Harness function #63 */
     int c63_a1 = 0x4dd5b8; int c63_a2 = 0x1af;    
    int c63_ret = fz_new_buffer_from_copied_datanew(c9_a0, c63_a1, c63_a2);
     
    
    /* Harness function #64 */    
    int c64_ret = fz_new_image_from_svgnew(c9_a0, c22_a1, c10_a2, c10_a2);
     
    
    /* Harness function #65 */    
    int c65_ret = fz_get_pixmap_from_imagenew(c9_a0, c11_a1, c10_a2, c10_a2, c10_a2, c10_a2);
     
    
    /* Harness function #66 */    
    int c66_ret = pdf_drop_patternnew();
     
    
    /* Harness function #67 */    
    int c67_ret = fz_drop_imagenew(c9_a0, c11_a1);
     
    
    /* Harness function #68 */    
    int c68_ret = fz_drop_buffernew(c9_a0, c22_a1);
     
    
    /* Harness function #69 */    
    int c69_ret = fz_new_buffer_from_copied_datanew(c9_a0, c63_a1, c63_a2);
     
    
    /* Harness function #70 */    
    int c70_ret = fz_new_image_from_svgnew(c9_a0, c52_a1, c10_a2, c10_a2);
     
    
    /* Harness function #71 */
     int c71_a1 = c70_ret;        
    int c71_ret = fz_get_pixmap_from_imagenew(c9_a0, c71_a1, c10_a2, c10_a2, c10_a2, c10_a2);
     
    
    /* Harness function #72 */    
    int c72_ret = pdf_drop_patternnew();
     
    
    /* Harness function #73 */    
    int c73_ret = fz_drop_imagenew(c9_a0, c71_a1);
     
    
    /* Harness function #74 */    
    int c74_ret = fz_drop_buffernew(c9_a0, c52_a1);
     
    
    /* Harness function #75 */
     int c75_a1 = 0x4dd768; int c75_a2 = 0x1b4;    
    int c75_ret = fz_new_buffer_from_copied_datanew(c9_a0, c75_a1, c75_a2);
     
    
    /* Harness function #76 */    
    int c76_ret = fz_new_image_from_svgnew(c9_a0, c22_a1, c10_a2, c10_a2);
     
    
    /* Harness function #77 */    
    int c77_ret = fz_get_pixmap_from_imagenew(c9_a0, c71_a1, c10_a2, c10_a2, c10_a2, c10_a2);
     
    
    /* Harness function #78 */    
    int c78_ret = pdf_drop_patternnew();
     
    
    /* Harness function #79 */    
    int c79_ret = fz_drop_imagenew(c9_a0, c71_a1);
     
    
    /* Harness function #80 */    
    int c80_ret = fz_drop_buffernew(c9_a0, c22_a1);
     
    
    /* Harness function #81 */
     int c81_a1 = 0x4ddcf8; int c81_a2 = 0x225;    
    int c81_ret = fz_new_buffer_from_copied_datanew(c9_a0, c81_a1, c81_a2);
     
    
    /* Harness function #82 */    
    int c82_ret = fz_new_image_from_svgnew(c9_a0, c10_a1, c10_a2, c10_a2);
     
    
    /* Harness function #83 */
     int c83_a1 = c82_ret;        
    int c83_ret = fz_get_pixmap_from_imagenew(c9_a0, c83_a1, c10_a2, c10_a2, c10_a2, c10_a2);
     
    
    /* Harness function #84 */    
    int c84_ret = pdf_drop_patternnew();
     
    
    /* Harness function #85 */    
    int c85_ret = fz_drop_imagenew(c9_a0, c83_a1);
     
    
    /* Harness function #86 */    
    int c86_ret = fz_drop_buffernew(c9_a0, c10_a1);
     
    
    /* Harness function #87 */
     int c87_a1 = 0x4ddac8; int c87_a2 = 0x228;    
    int c87_ret = fz_new_buffer_from_copied_datanew(c9_a0, c87_a1, c87_a2);
     
    
    /* Harness function #88 */
     int c88_a1 = c87_ret;      
    int c88_ret = fz_new_image_from_svgnew(c9_a0, c88_a1, c10_a2, c10_a2);
     
    
    /* Harness function #89 */    
    int c89_ret = fz_get_pixmap_from_imagenew(c9_a0, c83_a1, c10_a2, c10_a2, c10_a2, c10_a2);
     
    
    /* Harness function #90 */    
    int c90_ret = pdf_drop_patternnew();
     
    
    /* Harness function #91 */    
    int c91_ret = fz_drop_imagenew(c9_a0, c83_a1);
     
    
    /* Harness function #92 */    
    int c92_ret = fz_drop_buffernew(c9_a0, c88_a1);
     
    
    /* Harness function #93 */    
    int c93_ret = pdf_drop_patternnew();
     
    
    /* Harness function #94 */    
    int c94_ret = fz_drop_contextnew();
     
    
    /* Harness function #95 */
     int c95_a1 = 0x23649f20; int c95_a2 = 0x10000000; int c95_a3 = 0x4d50cc;    
    int c95_ret = fz_new_context_impnew(c10_a2, c95_a1, c95_a2, c95_a3);
     
    
    /* Harness function #96 */    
    int c96_ret = fz_set_warning_callbacknew();
     
    
    /* Harness function #97 */    
    int c97_ret = fz_set_error_callbacknew();
     
    
    /* Harness function #98 */    
    int c98_ret = pdf_install_load_system_font_funcsnew();
     
    
    /* Harness function #99 */    
    int c99_ret = fz_register_document_handlersnew();
     
    
    /* Harness function #100 */    
    int c100_ret = fz_var_impnew();
     
    
    /* Harness function #101 */    
    int c101_ret = fz_push_trynew();
     
    
    /* Harness function #102 */    
    int c102_ret = fz_do_trynew();
     
    
    /* Harness function #103 */    
    int c103_ret = fz_malloc_no_thrownew();
     
    
    /* Harness function #104 */    
    int c104_ret = fz_new_buffer_from_datanew();
     
    
    /* Harness function #105 */    
    int c105_ret = fz_var_impnew();
     
    
    /* Harness function #106 */
    int c106_a0 = c95_ret;    
    int c106_ret = fz_push_trynew(c106_a0);
     
    
    /* Harness function #107 */    
    int c107_ret = fz_do_trynew(c106_a0);
     
    
    /* Harness function #108 */    
    int c108_ret = fz_open_buffernew();
     
    
    /* Harness function #109 */    
    int c109_ret = fz_do_alwaysnew();
     
    
    /* Harness function #110 */
     int c110_a1 = c104_ret;    
    int c110_ret = fz_drop_buffernew(c106_a0, c110_a1);
     
    
    /* Harness function #111 */    
    int c111_ret = fz_do_catchnew();
     
    
    /* Harness function #112 */    
    int c112_ret = fz_do_catchnew(c106_a0);
     
    
    /* Harness function #113 */    
    int c113_ret = fz_var_impnew();
     
    
    /* Harness function #114 */    
    int c114_ret = fz_var_impnew();
     
    
    /* Harness function #115 */    
    int c115_ret = fz_var_impnew();
     
    
    /* Harness function #116 */    
    int c116_ret = fz_push_trynew(c106_a0);
     
    
    /* Harness function #117 */    
    int c117_ret = fz_do_trynew(c106_a0);
     
    
    /* Harness function #118 */    
    int c118_ret = fz_open_document_with_streamnew();
     
    
    /* Harness function #119 */    
    int c119_ret = pdf_specificsnew();
     
    
    /* Harness function #120 */    
    int c120_ret = fz_layout_documentnew();
     
    
    /* Harness function #121 */    
    int c121_ret = fz_do_alwaysnew(c106_a0);
     
    
    /* Harness function #122 */    
    int c122_ret = fz_drop_streamnew();
     
    
    /* Harness function #123 */    
    int c123_ret = fz_do_catchnew(c106_a0);
     
    
    /* Harness function #124 */    
    int c124_ret = fz_needs_passwordnew();
     
    
    /* Harness function #125 */    
    int c125_ret = pdf_specificsnew();
     
    
    /* Harness function #126 */    
    int c126_ret = fz_var_impnew();
     
    
    /* Harness function #127 */    
    int c127_ret = fz_push_trynew(c106_a0);
     
    
    /* Harness function #128 */    
    int c128_ret = fz_do_trynew(c106_a0);
     
    
    /* Harness function #129 */    
    int c129_ret = fz_count_pagesnew();
     
    
    /* Harness function #130 */    
    int c130_ret = fz_do_catchnew(c106_a0);
     
    
    /* Harness function #131 */    
    int c131_ret = pdf_specificsnew();
     
    
    /* Harness function #132 */    
    int c132_ret = fz_var_impnew();
     
    
    /* Harness function #133 */    
    int c133_ret = fz_push_trynew(c106_a0);
     
    
    /* Harness function #134 */    
    int c134_ret = fz_do_trynew(c106_a0);
     
    
    /* Harness function #135 */    
    int c135_ret = pdf_trailernew();
     
    
    /* Harness function #136 */    
    int c136_ret = pdf_dict_getsnew();
     
    
    /* Harness function #137 */    
    int c137_ret = fz_do_catchnew(c106_a0);
     
    
    /* Harness function #138 */    
    int c138_ret = fz_var_impnew();
     
    
    /* Harness function #139 */    
    int c139_ret = fz_push_trynew(c106_a0);
     
    
    /* Harness function #140 */    
    int c140_ret = fz_do_trynew(c106_a0);
     
    
    /* Harness function #141 */
     int c141_a1 = c136_ret; int c141_a2 = 0x4e300c;    
    int c141_ret = pdf_dict_getsnew(c106_a0, c141_a1, c141_a2);
     
    
    /* Harness function #142 */    
    int c142_ret = pdf_to_namenew();
     
    
    /* Harness function #143 */    
    int c143_ret = fz_do_catchnew(c106_a0);
     
    
    /* Harness function #144 */    
    int c144_ret = fz_var_impnew();
     
    
    /* Harness function #145 */    
    int c145_ret = fz_var_impnew();
     
    
    /* Harness function #146 */    
    int c146_ret = fz_push_trynew(c106_a0);
     
    
    /* Harness function #147 */    
    int c147_ret = fz_do_trynew(c106_a0);
     
    
    /* Harness function #148 */
      int c148_a2 = 0x4e2ff0;    
    int c148_ret = pdf_dict_getsnew(c106_a0, c141_a1, c148_a2);
     
    
    /* Harness function #149 */
      int c149_a2 = 0x4e3054;    
    int c149_ret = pdf_dict_getsnew(c106_a0, c10_a2, c149_a2);
     
    
    /* Harness function #150 */    
    int c150_ret = pdf_to_namenew(c106_a0, c10_a2);
     
    
    /* Harness function #151 */    
    int c151_ret = fz_do_catchnew(c106_a0);
     
    
    /* Harness function #152 */    
    int c152_ret = fz_has_permissionnew();
     
    
    /* Harness function #153 */    
    int c153_ret = fz_has_permissionnew();
     
    
    /* Harness function #154 */    
    int c154_ret = fz_push_trynew(c106_a0);
     
    
    /* Harness function #155 */    
    int c155_ret = fz_do_trynew(c106_a0);
     
    
    /* Harness function #156 */    
    int c156_ret = pdf_load_page_treenew();
     
    
    /* Harness function #157 */    
    int c157_ret = fz_do_catchnew(c106_a0);
     
    
    /* Harness function #158 */    
    int c158_ret = fz_var_impnew();
     
    
    /* Harness function #159 */    
    int c159_ret = fz_var_impnew();
     
    
    /* Harness function #160 */    
    int c160_ret = fz_push_trynew(c106_a0);
     
    
    /* Harness function #161 */    
    int c161_ret = fz_do_trynew(c106_a0);
     
    
    /* Harness function #162 */    
    int c162_ret = pdf_load_objectnew();
     
    
    /* Harness function #163 */    
    int c163_ret = pdf_page_obj_transformnew();
     
    
    /* Harness function #164 */    
    int c164_ret = fz_transform_rectnew();
     
    
    /* Harness function #165 */    
    int c165_ret = pdf_drop_objnew();
     
    
    /* Harness function #166 */    
    int c166_ret = fz_do_catchnew(c106_a0);
     
    
    /* Harness function #167 */    
    int c167_ret = fz_push_trynew(c106_a0);
     
    
    /* Harness function #168 */    
    int c168_ret = fz_do_trynew(c106_a0);
     
    
    /* Harness function #169 */    
    int c169_ret = fz_load_outlinenew();
     
    
    /* Harness function #170 */    
    int c170_ret = fz_do_catchnew(c106_a0);
     
    
    /* Harness function #171 */    
    int c171_ret = fz_push_trynew(c106_a0);
     
    
    /* Harness function #172 */    
    int c172_ret = fz_do_trynew(c106_a0);
     
    
    /* Harness function #173 */    
    int c173_ret = pdf_load_name_treenew();
     
    
    /* Harness function #174 */    
    int c174_ret = fz_do_catchnew(c106_a0);
     
    
    /* Harness function #175 */    
    int c175_ret = fz_var_impnew();
     
    
    /* Harness function #176 */    
    int c176_ret = fz_push_trynew(c106_a0);
     
    
    /* Harness function #177 */    
    int c177_ret = fz_do_trynew(c106_a0);
     
    
    /* Harness function #178 */
     int c178_a1 = c118_ret;    
    int c178_ret = pdf_trailernew(c106_a0, c178_a1);
     
    
    /* Harness function #179 */
     int c179_a1 = c135_ret; int c179_a2 = 0x4e3110;    
    int c179_ret = pdf_dict_getsnew(c106_a0, c179_a1, c179_a2);
     
    
    /* Harness function #180 */    
    int c180_ret = pdf_copy_dictnew();
     
    
    /* Harness function #181 */    
    int c181_ret = pdf_dict_lennew();
     
    
    /* Harness function #182 */    
    int c182_ret = pdf_dict_get_valnew();
     
    
    /* Harness function #183 */    
    int c183_ret = pdf_is_indirectnew();
     
    
    /* Harness function #184 */
     int c184_a1 = c180_ret;    
    int c184_ret = pdf_dict_lennew(c106_a0, c184_a1);
     
    
    /* Harness function #185 */
      int c185_a2 = c94_ret;    
    int c185_ret = pdf_dict_get_valnew(c106_a0, c184_a1, c185_a2);
     
    
    /* Harness function #186 */
     int c186_a1 = c185_ret;    
    int c186_ret = pdf_is_indirectnew(c106_a0, c186_a1);
     
    
    /* Harness function #187 */    
    int c187_ret = pdf_dict_lennew(c106_a0, c184_a1);
     
    
    /* Harness function #188 */
      int c188_a2 = 0x2;    
    int c188_ret = pdf_dict_get_valnew(c106_a0, c184_a1, c188_a2);
     
    
    /* Harness function #189 */
     int c189_a1 = c188_ret;    
    int c189_ret = pdf_is_indirectnew(c106_a0, c189_a1);
     
    
    /* Harness function #190 */    
    int c190_ret = pdf_dict_lennew(c106_a0, c184_a1);
     
    
    /* Harness function #191 */
      int c191_a2 = 0x3;    
    int c191_ret = pdf_dict_get_valnew(c106_a0, c184_a1, c191_a2);
     
    
    /* Harness function #192 */
     int c192_a1 = c191_ret;    
    int c192_ret = pdf_is_indirectnew(c106_a0, c192_a1);
     
    
    /* Harness function #193 */    
    int c193_ret = pdf_dict_lennew(c106_a0, c184_a1);
     
    
    /* Harness function #194 */
      int c194_a2 = 0x4;    
    int c194_ret = pdf_dict_get_valnew(c106_a0, c184_a1, c194_a2);
     
    
    /* Harness function #195 */
     int c195_a1 = c194_ret;    
    int c195_ret = pdf_is_indirectnew(c106_a0, c195_a1);
     
    
    /* Harness function #196 */    
    int c196_ret = pdf_dict_lennew(c106_a0, c184_a1);
     
    
    /* Harness function #197 */
      int c197_a2 = 0x5;    
    int c197_ret = pdf_dict_get_valnew(c106_a0, c184_a1, c197_a2);
     
    
    /* Harness function #198 */
     int c198_a1 = c197_ret;    
    int c198_ret = pdf_is_indirectnew(c106_a0, c198_a1);
     
    
    /* Harness function #199 */    
    int c199_ret = pdf_dict_lennew(c106_a0, c184_a1);
     
    
    /* Harness function #200 */
      int c200_a2 = 0x6;    
    int c200_ret = pdf_dict_get_valnew(c106_a0, c184_a1, c200_a2);
     
    
    /* Harness function #201 */
     int c201_a1 = c200_ret;    
    int c201_ret = pdf_is_indirectnew(c106_a0, c201_a1);
     
    
    /* Harness function #202 */    
    int c202_ret = pdf_dict_lennew(c106_a0, c184_a1);
     
    
    /* Harness function #203 */
      int c203_a2 = 0x7;    
    int c203_ret = pdf_dict_get_valnew(c106_a0, c184_a1, c203_a2);
     
    
    /* Harness function #204 */
     int c204_a1 = c203_ret;    
    int c204_ret = pdf_is_indirectnew(c106_a0, c204_a1);
     
    
    /* Harness function #205 */    
    int c205_ret = pdf_dict_lennew(c106_a0, c184_a1);
     
    
    /* Harness function #206 */
      int c206_a2 = 0x8;    
    int c206_ret = pdf_dict_get_valnew(c106_a0, c184_a1, c206_a2);
     
    
    /* Harness function #207 */
     int c207_a1 = c206_ret;    
    int c207_ret = pdf_is_indirectnew(c106_a0, c207_a1);
     
    
    /* Harness function #208 */    
    int c208_ret = pdf_dict_lennew(c106_a0, c184_a1);
     
    
    /* Harness function #209 */
      int c209_a2 = 0x9;    
    int c209_ret = pdf_dict_get_valnew(c106_a0, c184_a1, c209_a2);
     
    
    /* Harness function #210 */
     int c210_a1 = c209_ret;    
    int c210_ret = pdf_is_indirectnew(c106_a0, c210_a1);
     
    
    /* Harness function #211 */    
    int c211_ret = pdf_dict_lennew(c106_a0, c184_a1);
     
    
    /* Harness function #212 */
      int c212_a2 = 0xa;    
    int c212_ret = pdf_dict_get_valnew(c106_a0, c184_a1, c212_a2);
     
    
    /* Harness function #213 */
     int c213_a1 = c212_ret;    
    int c213_ret = pdf_is_indirectnew(c106_a0, c213_a1);
     
    
    /* Harness function #214 */    
    int c214_ret = pdf_dict_lennew(c106_a0, c184_a1);
     
    
    /* Harness function #215 */
      int c215_a2 = 0xb;    
    int c215_ret = pdf_dict_get_valnew(c106_a0, c184_a1, c215_a2);
     
    
    /* Harness function #216 */
     int c216_a1 = c215_ret;    
    int c216_ret = pdf_is_indirectnew(c106_a0, c216_a1);
     
    
    /* Harness function #217 */    
    int c217_ret = pdf_dict_lennew(c106_a0, c184_a1);
     
    
    /* Harness function #218 */    
    int c218_ret = fz_push_trynew(c106_a0);
     
    
    /* Harness function #219 */    
    int c219_ret = fz_do_trynew(c106_a0);
     
    
    /* Harness function #220 */    
    int c220_ret = pdf_doc_was_linearizednew();
     
    
    /* Harness function #221 */    
    int c221_ret = fz_do_catchnew(c106_a0);
     
    
    /* Harness function #222 */    
    int c222_ret = pdf_trailernew(c106_a0, c178_a1);
     
    
    /* Harness function #223 */    
    int c223_ret = pdf_dict_getpnew();
     
    
    /* Harness function #224 */    
    int c224_ret = pdf_to_boolnew();
     
    
    /* Harness function #225 */
      int c225_a2 = 0x4e3148;    
    int c225_ret = pdf_dict_getpnew(c106_a0, c179_a1, c225_a2);
     
    
    /* Harness function #226 */    
    int c226_ret = pdf_is_arraynew();
     
    
    /* Harness function #227 */    
    int c227_ret = pdf_trailernew(c106_a0, c178_a1);
     
    
    /* Harness function #228 */
      int c228_a2 = 0x4e3134;    
    int c228_ret = pdf_dict_getpnew(c106_a0, c179_a1, c228_a2);
     
    
    /* Harness function #229 */    
    int c229_ret = pdf_is_arraynew(c106_a0, c10_a2);
     
    
    /* Harness function #230 */    
    int c230_ret = fz_do_catchnew(c106_a0);
     
    
    /* Harness function #231 */    
    int c231_ret = fz_var_impnew();
     
    
    /* Harness function #232 */    
    int c232_ret = fz_push_trynew(c106_a0);
     
    
    /* Harness function #233 */    
    int c233_ret = fz_do_trynew(c106_a0);
     
    
    /* Harness function #234 */    
    int c234_ret = pdf_trailernew(c106_a0, c178_a1);
     
    
    /* Harness function #235 */
      int c235_a2 = 0x4e3164;    
    int c235_ret = pdf_dict_getpnew(c106_a0, c179_a1, c235_a2);
     
    
    /* Harness function #236 */    
    int c236_ret = fz_do_catchnew(c106_a0);
     
    
    /* Harness function #237 */    
    int c237_ret = pdf_js_supportednew();
     
    
    /* Harness function #238 */    
    int c238_ret = fz_rotatenew();
     
    
    /* Harness function #239 */    
    int c239_ret = fz_pre_scalenew();
     
    
    /* Harness function #240 */    
    int c240_ret = fz_matrix_expansionnew();
     
    
    /* Harness function #241 */
    int c241_a0 = 0x3f800000;  int c241_a2 = 0x80000000;     
    int c241_ret = fz_matrix_expansionnew(c241_a0, c10_a2, c241_a2, c241_a0);
     
    
    /* Harness function #242 */
    int c242_a0 = c242_ret;   int c242_a3 = 0x4414d1aa; int c242_a4 = 0x445278f6;         
    int c242_ret = fz_transform_rectnew(c242_a0, c10_a2, c10_a2, c242_a3, c242_a4, c241_a0, c10_a2, c241_a2, c241_a0, c10_a2);
     
    
    /* Harness function #243 */    
    int c243_ret = fz_rotatenew();
     
    
    /* Harness function #244 */
    int c244_a0 = c244_ret;            
    int c244_ret = fz_pre_scalenew(c244_a0, c241_a0, c10_a2, c241_a2, c241_a0, c10_a2, c10_a2, c241_a0, c241_a0);
     
    
    /* Harness function #245 */    
    int c245_ret = fz_matrix_expansionnew(c241_a0, c10_a2, c241_a2, c241_a0);
     
    
    /* Harness function #246 */    
    int c246_ret = fz_matrix_expansionnew(c241_a0, c10_a2, c241_a2, c241_a0);
     
    
    /* Harness function #247 */
    int c247_a0 = c247_ret;             
    int c247_ret = fz_transform_rectnew(c247_a0, c10_a2, c10_a2, c242_a3, c242_a4, c241_a0, c10_a2, c241_a2, c241_a0, c10_a2);
     
    
    /* Harness function #248 */    
    int c248_ret = fz_lookup_metadatanew();
     
    
    /* Harness function #249 */
      int c249_a2 = 0x4e2bb8;    
    int c249_ret = pdf_dict_getsnew(c106_a0, c184_a1, c249_a2);
     
    
    /* Harness function #250 */    
    int c250_ret = pdf_new_utf8_from_pdf_string_objnew();
     
    
    /* Harness function #251 */    
    int c251_ret = fz_freenew();
     
    
    /* Harness function #252 */    
    int c252_ret = fz_rotatenew();
     
    
    /* Harness function #253 */
    int c253_a0 = c253_ret;       int c253_a7 = 0x3f8e75de;     
    int c253_ret = fz_pre_scalenew(c253_a0, c241_a0, c10_a2, c241_a2, c241_a0, c10_a2, c10_a2, c253_a7, c253_a7);
     
    
    /* Harness function #254 */    
    int c254_ret = fz_matrix_expansionnew(c253_a7, c10_a2, c241_a2, c253_a7);
     
    
    /* Harness function #255 */    
    int c255_ret = fz_matrix_expansionnew(c253_a7, c10_a2, c241_a2, c253_a7);
     
    
    /* Harness function #256 */    
    int c256_ret = fz_invert_matrixnew();
     
    
    /* Harness function #257 */
    int c257_a0 = c256_ret; int c257_a1 = 0xbeff7cee;    int c257_a5 = 0x3f6603c8;        
    int c257_ret = fz_transform_rectnew(c257_a0, c257_a1, c257_a1, c257_a1, c257_a1, c257_a5, c241_a2, c10_a2, c257_a5, c241_a2);
     
    
    /* Harness function #258 */    
    int c258_ret = fz_push_trynew(c106_a0);
     
    
    /* Harness function #259 */    
    int c259_ret = fz_do_trynew(c106_a0);
     
    
    /* Harness function #260 */    
    int c260_ret = fz_load_pagenew();
     
    
    /* Harness function #261 */    
    int c261_ret = fz_do_catchnew(c106_a0);
     
    
    /* Harness function #262 */    
    int c262_ret = pdf_page_from_fz_pagenew();
     
    
    /* Harness function #263 */    
    int c263_ret = pdf_first_annotnew();
     
    
    /* Harness function #264 */
     int c264_a1 = c260_ret;    
    int c264_ret = pdf_page_from_fz_pagenew(c106_a0, c264_a1);
     
    
    /* Harness function #265 */    
    int c265_ret = pdf_first_annotnew(c106_a0, c264_a1);
     
    
    /* Harness function #266 */    
    int c266_ret = fz_rotatenew();
     
    
    /* Harness function #267 */
    int c267_a0 = c267_ret;            
    int c267_ret = fz_pre_scalenew(c267_a0, c241_a0, c10_a2, c241_a2, c241_a0, c10_a2, c10_a2, c253_a7, c253_a7);
     
    
    /* Harness function #268 */    
    int c268_ret = fz_matrix_expansionnew(c253_a7, c10_a2, c241_a2, c253_a7);
     
    
    /* Harness function #269 */    
    int c269_ret = fz_matrix_expansionnew(c253_a7, c10_a2, c241_a2, c253_a7);
     
    
    /* Harness function #270 */
    int c270_a0 = c270_ret;             
    int c270_ret = fz_transform_rectnew(c270_a0, c10_a2, c10_a2, c242_a3, c242_a4, c253_a7, c10_a2, c241_a2, c253_a7, c10_a2);
     
    
    /* Harness function #271 */    
    int c271_ret = fz_rotatenew();
     
    
    /* Harness function #272 */
    int c272_a0 = c272_ret;            
    int c272_ret = fz_pre_scalenew(c272_a0, c241_a0, c10_a2, c241_a2, c241_a0, c10_a2, c10_a2, c253_a7, c253_a7);
     
    
    /* Harness function #273 */    
    int c273_ret = fz_matrix_expansionnew(c253_a7, c10_a2, c241_a2, c253_a7);
     
    
    /* Harness function #274 */    
    int c274_ret = fz_matrix_expansionnew(c253_a7, c10_a2, c241_a2, c253_a7);
     
    
    /* Harness function #275 */
    int c275_a0 = c275_ret;             
    int c275_ret = fz_transform_rectnew(c275_a0, c10_a2, c10_a2, c242_a3, c242_a4, c253_a7, c10_a2, c241_a2, c253_a7, c10_a2);
     
    
    /* Harness function #276 */    
    int c276_ret = fz_rotatenew();
     
    
    /* Harness function #277 */
    int c277_a0 = c277_ret;            
    int c277_ret = fz_pre_scalenew(c277_a0, c241_a0, c10_a2, c241_a2, c241_a0, c10_a2, c10_a2, c253_a7, c253_a7);
     
    
    /* Harness function #278 */    
    int c278_ret = fz_matrix_expansionnew(c253_a7, c10_a2, c241_a2, c253_a7);
     
    
    /* Harness function #279 */    
    int c279_ret = fz_matrix_expansionnew(c253_a7, c10_a2, c241_a2, c253_a7);
     
    
    /* Harness function #280 */
    int c280_a0 = c144_ret;          
    int c280_ret = fz_invert_matrixnew(c280_a0, c253_a7, c10_a2, c241_a2, c253_a7, c10_a2, c10_a2);
     
    
    /* Harness function #281 */
       int c281_a3 = 0x4425c000; int c281_a4 = 0x446a8000;         
    int c281_ret = fz_transform_rectnew(c280_a0, c10_a2, c10_a2, c281_a3, c281_a4, c257_a5, c241_a2, c10_a2, c257_a5, c241_a2);
     
    
    /* Harness function #282 */    
    int c282_ret = fz_rotatenew();
     
    
    /* Harness function #283 */    
    int c283_ret = fz_pre_scalenew(c267_a0, c241_a0, c10_a2, c241_a2, c241_a0, c10_a2, c10_a2, c253_a7, c253_a7);
     
    
    /* Harness function #284 */    
    int c284_ret = fz_matrix_expansionnew(c253_a7, c10_a2, c241_a2, c253_a7);
     
    
    /* Harness function #285 */    
    int c285_ret = fz_matrix_expansionnew(c253_a7, c10_a2, c241_a2, c253_a7);
     
    
    /* Harness function #286 */    
    int c286_ret = fz_transform_rectnew(c270_a0, c10_a2, c10_a2, c242_a3, c242_a4, c253_a7, c10_a2, c241_a2, c253_a7, c10_a2);
     
    
    /* Harness function #287 */    
    int c287_ret = fz_rotatenew();
     
    
    /* Harness function #288 */
    int c288_a0 = c288_ret;            
    int c288_ret = fz_pre_scalenew(c288_a0, c241_a0, c10_a2, c241_a2, c241_a0, c10_a2, c10_a2, c253_a7, c253_a7);
     
    
    /* Harness function #289 */    
    int c289_ret = fz_matrix_expansionnew(c253_a7, c10_a2, c241_a2, c253_a7);
     
    
    /* Harness function #290 */    
    int c290_ret = fz_matrix_expansionnew(c253_a7, c10_a2, c241_a2, c253_a7);
     
    
    /* Harness function #291 */
    int c291_a0 = c239_ret;             
    int c291_ret = fz_transform_rectnew(c291_a0, c10_a2, c10_a2, c242_a3, c242_a4, c253_a7, c10_a2, c241_a2, c253_a7, c10_a2);
     
    
    /* Harness function #292 */
      int c292_a2 = 0x4e3190;    
    int c292_ret = pdf_dict_getsnew(c106_a0, c184_a1, c292_a2);
     
    
    /* Harness function #293 */    
    int c293_ret = pdf_to_boolnew(c106_a0, c10_a2);
     
    
    /* Harness function #294 */    
    int c294_ret = fz_rotatenew();
     
    
    /* Harness function #295 */    
    int c295_ret = fz_pre_scalenew(c257_a0, c241_a0, c10_a2, c241_a2, c241_a0, c10_a2, c10_a2, c241_a0, c241_a0);
     
    
    /* Harness function #296 */    
    int c296_ret = fz_matrix_expansionnew(c241_a0, c10_a2, c241_a2, c241_a0);
     
    
    /* Harness function #297 */    
    int c297_ret = fz_matrix_expansionnew(c241_a0, c10_a2, c241_a2, c241_a0);
     
    
    /* Harness function #298 */
    int c298_a0 = c298_ret;             
    int c298_ret = fz_transform_rectnew(c298_a0, c10_a2, c10_a2, c242_a3, c242_a4, c241_a0, c10_a2, c241_a2, c241_a0, c10_a2);
     
    
    /* Harness function #299 */    
    int c299_ret = fz_rotatenew();
     
    
    /* Harness function #300 */    
    int c300_ret = fz_pre_scalenew(c257_a0, c241_a0, c10_a2, c241_a2, c241_a0, c10_a2, c10_a2, c241_a0, c241_a0);
     
    
    /* Harness function #301 */    
    int c301_ret = fz_matrix_expansionnew(c241_a0, c10_a2, c241_a2, c241_a0);
     
    
    /* Harness function #302 */    
    int c302_ret = fz_matrix_expansionnew(c241_a0, c10_a2, c241_a2, c241_a0);
     
    
    /* Harness function #303 */    
    int c303_ret = fz_invert_matrixnew(c298_a0, c241_a0, c10_a2, c241_a2, c241_a0, c10_a2, c10_a2);
     
    
    /* Harness function #304 */
        int c304_a4 = 0x43d297c9;         
    int c304_ret = fz_transform_rectnew(c298_a0, c10_a2, c10_a2, c242_a3, c304_a4, c241_a0, c241_a2, c10_a2, c241_a0, c241_a2);
     
    
    /* Harness function #305 */    
    int c305_ret = fz_rotatenew();
     
    
    /* Harness function #306 */
    int c306_a0 = c306_ret;            
    int c306_ret = fz_pre_scalenew(c306_a0, c241_a0, c10_a2, c241_a2, c241_a0, c10_a2, c10_a2, c253_a7, c253_a7);
     
    
    /* Harness function #307 */    
    int c307_ret = fz_matrix_expansionnew(c253_a7, c10_a2, c241_a2, c253_a7);
     
    
    /* Harness function #308 */    
    int c308_ret = fz_matrix_expansionnew(c253_a7, c10_a2, c241_a2, c253_a7);
     
    
    /* Harness function #309 */
    int c309_a0 = c309_ret;          
    int c309_ret = fz_invert_matrixnew(c309_a0, c253_a7, c10_a2, c241_a2, c253_a7, c10_a2, c10_a2);
     
    
    /* Harness function #310 */
     int c310_a1 = 0x43b04021; int c310_a2 = 0x43f74021;           
    int c310_ret = fz_transform_rectnew(c309_a0, c310_a1, c310_a2, c310_a1, c310_a2, c257_a5, c241_a2, c10_a2, c257_a5, c241_a2);
     
    
    /* Harness function #311 */    
    int c311_ret = fz_rotatenew();
     
    
    /* Harness function #312 */
    int c312_a0 = c312_ret;            
    int c312_ret = fz_pre_scalenew(c312_a0, c241_a0, c10_a2, c241_a2, c241_a0, c10_a2, c10_a2, c253_a7, c253_a7);
     
    
    /* Harness function #313 */    
    int c313_ret = fz_matrix_expansionnew(c253_a7, c10_a2, c241_a2, c253_a7);
     
    
    /* Harness function #314 */    
    int c314_ret = fz_matrix_expansionnew(c253_a7, c10_a2, c241_a2, c253_a7);
     
    
    /* Harness function #315 */
    int c315_a0 = c315_ret;          
    int c315_ret = fz_invert_matrixnew(c315_a0, c253_a7, c10_a2, c241_a2, c253_a7, c10_a2, c10_a2);
     
    
    /* Harness function #316 */    
    int c316_ret = fz_transform_rectnew(c315_a0, c310_a1, c310_a2, c310_a1, c310_a2, c257_a5, c241_a2, c10_a2, c257_a5, c241_a2);
     
    
    /* Harness function #317 */    
    int c317_ret = fz_rotatenew();
     
    
    /* Harness function #318 */    
    int c318_ret = fz_pre_scalenew(c306_a0, c241_a0, c10_a2, c241_a2, c241_a0, c10_a2, c10_a2, c253_a7, c253_a7);
     
    
    /* Harness function #319 */    
    int c319_ret = fz_matrix_expansionnew(c253_a7, c10_a2, c241_a2, c253_a7);
     
    
    /* Harness function #320 */    
    int c320_ret = fz_matrix_expansionnew(c253_a7, c10_a2, c241_a2, c253_a7);
     
    
    /* Harness function #321 */    
    int c321_ret = fz_invert_matrixnew(c309_a0, c253_a7, c10_a2, c241_a2, c253_a7, c10_a2, c10_a2);
     
    
    /* Harness function #322 */    
    int c322_ret = fz_transform_rectnew(c309_a0, c310_a1, c310_a2, c310_a1, c310_a2, c257_a5, c241_a2, c10_a2, c257_a5, c241_a2);
     
    
    /* Harness function #323 */    
    int c323_ret = fz_rotatenew();
     
    
    /* Harness function #324 */    
    int c324_ret = fz_pre_scalenew(c312_a0, c241_a0, c10_a2, c241_a2, c241_a0, c10_a2, c10_a2, c253_a7, c253_a7);
     
    
    /* Harness function #325 */    
    int c325_ret = fz_matrix_expansionnew(c253_a7, c10_a2, c241_a2, c253_a7);
     
    
    /* Harness function #326 */    
    int c326_ret = fz_matrix_expansionnew(c253_a7, c10_a2, c241_a2, c253_a7);
     
    
    /* Harness function #327 */    
    int c327_ret = fz_invert_matrixnew(c315_a0, c253_a7, c10_a2, c241_a2, c253_a7, c10_a2, c10_a2);
     
    
    /* Harness function #328 */    
    int c328_ret = fz_transform_rectnew(c315_a0, c310_a1, c310_a2, c310_a1, c310_a2, c257_a5, c241_a2, c10_a2, c257_a5, c241_a2);
     
    
    /* Harness function #329 */    
    int c329_ret = fz_rotatenew();
     
    
    /* Harness function #330 */    
    int c330_ret = fz_pre_scalenew(c306_a0, c241_a0, c10_a2, c241_a2, c241_a0, c10_a2, c10_a2, c253_a7, c253_a7);
     
    
    /* Harness function #331 */    
    int c331_ret = fz_matrix_expansionnew(c253_a7, c10_a2, c241_a2, c253_a7);
     
    
    /* Harness function #332 */    
    int c332_ret = fz_matrix_expansionnew(c253_a7, c10_a2, c241_a2, c253_a7);
     
    
    /* Harness function #333 */    
    int c333_ret = fz_invert_matrixnew(c309_a0, c253_a7, c10_a2, c241_a2, c253_a7, c10_a2, c10_a2);
     
    
    /* Harness function #334 */    
    int c334_ret = fz_transform_rectnew(c309_a0, c310_a1, c310_a2, c310_a1, c310_a2, c257_a5, c241_a2, c10_a2, c257_a5, c241_a2);
     
    
    /* Harness function #335 */    
    int c335_ret = fz_rotatenew();
     
    
    /* Harness function #336 */    
    int c336_ret = fz_pre_scalenew(c312_a0, c241_a0, c10_a2, c241_a2, c241_a0, c10_a2, c10_a2, c253_a7, c253_a7);
     
    
    /* Harness function #337 */    
    int c337_ret = fz_matrix_expansionnew(c253_a7, c10_a2, c241_a2, c253_a7);
     
    
    /* Harness function #338 */    
    int c338_ret = fz_matrix_expansionnew(c253_a7, c10_a2, c241_a2, c253_a7);
     
    
    /* Harness function #339 */    
    int c339_ret = fz_invert_matrixnew(c315_a0, c253_a7, c10_a2, c241_a2, c253_a7, c10_a2, c10_a2);
     
    
    /* Harness function #340 */    
    int c340_ret = fz_transform_rectnew(c315_a0, c310_a1, c310_a2, c310_a1, c310_a2, c257_a5, c241_a2, c10_a2, c257_a5, c241_a2);
     
    
    /* Harness function #341 */    
    int c341_ret = fz_rotatenew();
     
    
    /* Harness function #342 */    
    int c342_ret = fz_pre_scalenew(c306_a0, c241_a0, c10_a2, c241_a2, c241_a0, c10_a2, c10_a2, c253_a7, c253_a7);
     
    
    /* Harness function #343 */    
    int c343_ret = fz_matrix_expansionnew(c253_a7, c10_a2, c241_a2, c253_a7);
     
    
    /* Harness function #344 */    
    int c344_ret = fz_matrix_expansionnew(c253_a7, c10_a2, c241_a2, c253_a7);
     
    
    /* Harness function #345 */    
    int c345_ret = fz_invert_matrixnew(c309_a0, c253_a7, c10_a2, c241_a2, c253_a7, c10_a2, c10_a2);
     
    
    /* Harness function #346 */    
    int c346_ret = fz_transform_rectnew(c309_a0, c310_a1, c310_a2, c310_a1, c310_a2, c257_a5, c241_a2, c10_a2, c257_a5, c241_a2);
     
    
    /* Harness function #347 */    
    int c347_ret = fz_rotatenew();
     
    
    /* Harness function #348 */    
    int c348_ret = fz_pre_scalenew(c312_a0, c241_a0, c10_a2, c241_a2, c241_a0, c10_a2, c10_a2, c253_a7, c253_a7);
     
    
    /* Harness function #349 */    
    int c349_ret = fz_matrix_expansionnew(c253_a7, c10_a2, c241_a2, c253_a7);
     
    
    /* Harness function #350 */    
    int c350_ret = fz_matrix_expansionnew(c253_a7, c10_a2, c241_a2, c253_a7);
     
    
    /* Harness function #351 */    
    int c351_ret = fz_invert_matrixnew(c315_a0, c253_a7, c10_a2, c241_a2, c253_a7, c10_a2, c10_a2);
     
    
    /* Harness function #352 */    
    int c352_ret = fz_transform_rectnew(c315_a0, c310_a1, c310_a2, c310_a1, c310_a2, c257_a5, c241_a2, c10_a2, c257_a5, c241_a2);
     
    
    /* Harness function #353 */    
    int c353_ret = fz_rotatenew();
     
    
    /* Harness function #354 */
    int c354_a0 = c354_ret;            
    int c354_ret = fz_pre_scalenew(c354_a0, c241_a0, c10_a2, c241_a2, c241_a0, c10_a2, c10_a2, c253_a7, c253_a7);
     
    
    /* Harness function #355 */    
    int c355_ret = fz_matrix_expansionnew(c253_a7, c10_a2, c241_a2, c253_a7);
     
    
    /* Harness function #356 */    
    int c356_ret = fz_matrix_expansionnew(c253_a7, c10_a2, c241_a2, c253_a7);
     
    
    /* Harness function #357 */
    int c357_a0 = c357_ret;             
    int c357_ret = fz_transform_rectnew(c357_a0, c10_a2, c10_a2, c242_a3, c242_a4, c253_a7, c10_a2, c241_a2, c253_a7, c10_a2);
     
    
    /* Harness function #358 */    
    int c358_ret = fz_rotatenew();
     
    
    /* Harness function #359 */    
    int c359_ret = fz_pre_scalenew(c354_a0, c241_a0, c10_a2, c241_a2, c241_a0, c10_a2, c10_a2, c253_a7, c253_a7);
     
    
    /* Harness function #360 */    
    int c360_ret = fz_matrix_expansionnew(c253_a7, c10_a2, c241_a2, c253_a7);
     
    
    /* Harness function #361 */    
    int c361_ret = fz_matrix_expansionnew(c253_a7, c10_a2, c241_a2, c253_a7);
     
    
    /* Harness function #362 */    
    int c362_ret = fz_transform_rectnew(c357_a0, c10_a2, c10_a2, c242_a3, c242_a4, c253_a7, c10_a2, c241_a2, c253_a7, c10_a2);
     
    
    /* Harness function #363 */    
    int c363_ret = fz_rotatenew();
     
    
    /* Harness function #364 */    
    int c364_ret = fz_pre_scalenew(c306_a0, c241_a0, c10_a2, c241_a2, c241_a0, c10_a2, c10_a2, c253_a7, c253_a7);
     
    
    /* Harness function #365 */    
    int c365_ret = fz_matrix_expansionnew(c253_a7, c10_a2, c241_a2, c253_a7);
     
    
    /* Harness function #366 */    
    int c366_ret = fz_matrix_expansionnew(c253_a7, c10_a2, c241_a2, c253_a7);
     
    
    /* Harness function #367 */    
    int c367_ret = fz_invert_matrixnew(c309_a0, c253_a7, c10_a2, c241_a2, c253_a7, c10_a2, c10_a2);
     
    
    /* Harness function #368 */
     int c368_a1 = 0x43bd4021; int c368_a2 = 0x43e6c021;           
    int c368_ret = fz_transform_rectnew(c309_a0, c368_a1, c368_a2, c368_a1, c368_a2, c257_a5, c241_a2, c10_a2, c257_a5, c241_a2);
     
    
    /* Harness function #369 */    
    int c369_ret = fz_rotatenew();
     
    
    /* Harness function #370 */    
    int c370_ret = fz_pre_scalenew(c312_a0, c241_a0, c10_a2, c241_a2, c241_a0, c10_a2, c10_a2, c253_a7, c253_a7);
     
    
    /* Harness function #371 */    
    int c371_ret = fz_matrix_expansionnew(c253_a7, c10_a2, c241_a2, c253_a7);
     
    
    /* Harness function #372 */    
    int c372_ret = fz_matrix_expansionnew(c253_a7, c10_a2, c241_a2, c253_a7);
     
    
    /* Harness function #373 */    
    int c373_ret = fz_invert_matrixnew(c315_a0, c253_a7, c10_a2, c241_a2, c253_a7, c10_a2, c10_a2);
     
    
    /* Harness function #374 */    
    int c374_ret = fz_transform_rectnew(c315_a0, c368_a1, c368_a2, c368_a1, c368_a2, c257_a5, c241_a2, c10_a2, c257_a5, c241_a2);
     
    
    /* Harness function #375 */    
    int c375_ret = fz_drop_pagenew();
     
    
    /* Harness function #376 */    
    int c376_ret = fz_drop_outlinenew();
     
    
    /* Harness function #377 */    
    int c377_ret = fz_drop_outlinenew();
     
    
    /* Harness function #378 */    
    int c378_ret = pdf_drop_objnew(c106_a0, c184_a1);
     
    
    /* Harness function #379 */    
    int c379_ret = pdf_drop_page_treenew();
     
    
    /* Harness function #380 */    
    int c380_ret = fz_drop_documentnew();
     
    
    /* Harness function #381 */    
    int c381_ret = drop_cached_fonts_for_ctxnew();
     
    
    /* Harness function #382 */    
    int c382_ret = fz_drop_contextnew(c106_a0);
     

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
