/* equates.h for Chez Scheme Version 9.6.3 */

/* Do not edit this file.  It is automatically generated and */
/* specifically tailored to the version of Chez Scheme named */
/* above.  Always be certain that you have the correct version */
/* of this file for the version of Chez Scheme you are using. */

/* Warning: Some macros may evaluate arguments more than once. */

/* Integer typedefs */
typedef char I8;
typedef unsigned char U8;
typedef short I16;
typedef unsigned short U16;
typedef int I32;
typedef unsigned int U32;
typedef long long I64;
typedef unsigned long long U64;

/* constants from cmacros.ss */
#define $c_func_closure_index 0x4
#define $c_func_closure_record_index 0x3
#define $c_func_code_object_index 0x2
#define $c_func_code_record_index 0x1
#define COMPRESS_FORMAT_BITS 0x3
#define COMPRESS_GZIP 0x0
#define COMPRESS_HIGH 0x3
#define COMPRESS_LOW 0x1
#define COMPRESS_LZ4 0x1
#define COMPRESS_MAX 0x4
#define COMPRESS_MEDIUM 0x2
#define COMPRESS_MIN 0x0
#define ERROR_CALL_ARGUMENT_COUNT 0x4
#define ERROR_CALL_NONPROCEDURE 0x3
#define ERROR_CALL_NONPROCEDURE_SYMBOL 0x2
#define ERROR_CALL_UNBOUND 0x1
#define ERROR_MVLET 0x8
#define ERROR_NONCONTINUABLE_INTERRUPT 0x6
#define ERROR_OTHER 0x0
#define ERROR_RESET 0x5
#define ERROR_VALUES 0x7
#define OPEN_ERROR_EXISTS 0x2
#define OPEN_ERROR_EXISTSNOT 0x3
#define OPEN_ERROR_OTHER 0x0
#define OPEN_ERROR_PROTECTION 0x1
#define PORT_FLAG_BINARY 0x400
#define PORT_FLAG_BLOCK_BUFFERED 0x20000
#define PORT_FLAG_BOL 0x8000
#define PORT_FLAG_CHAR_POSITIONS 0x100000
#define PORT_FLAG_CLOSED 0x800
#define PORT_FLAG_COMPRESSED 0x2000
#define PORT_FLAG_EOF 0x10000
#define PORT_FLAG_EXCLUSIVE 0x4000
#define PORT_FLAG_FILE 0x1000
#define PORT_FLAG_FOLD_CASE 0x400000
#define PORT_FLAG_INPUT 0x100
#define PORT_FLAG_INPUT_MODE 0x80000
#define PORT_FLAG_LINE_BUFFERED 0x40000
#define PORT_FLAG_NO_FOLD_CASE 0x800000
#define PORT_FLAG_OUTPUT 0x200
#define PORT_FLAG_R6RS 0x200000
#define SAPPEND 0x3
#define SDEFAULT 0x4
#define SEOF -0x1
#define SERROR 0x0
#define SICONV_DUNNO 0x0
#define SICONV_INCOMPLETE 0x2
#define SICONV_INVALID 0x1
#define SICONV_NOROOM 0x3
#define SREPLACE 0x2
#define STRVNCATE 0x1
#define address_bits 0x20
#define alloc_waste_maximum 0x400
#define annotation_all 0x3
#define annotation_debug 0x1
#define annotation_profile 0x2
#define architecture x86
#define asm_arg_reg_cnt 0x1
#define asm_arg_reg_max 0x1
#define bigit_bits 0x20
#define bigit_bytes 0x4
#define bignum_data_disp 0x5
#define bignum_length_factor 0x40
#define bignum_length_offset 0x6
#define bignum_sign_offset 0x5
#define bignum_type_disp 0x1
#define black_hole (ptr)0x46
#define box_ref_disp 0x5
#define box_type_disp 0x1
#define byte_alignment 0x8
#define byte_constant_mask 0xFFFFFFFF
#define bytes_per_card 0x100
#define bytes_per_segment 0x2000
#define bytevector_data_disp 0x9
#define bytevector_immutable_flag 0x4
#define bytevector_length_factor 0x8
#define bytevector_length_offset 0x3
#define bytevector_pad_disp 0x5
#define bytevector_type_disp 0x1
#define c_entry_name_vector #(thread-context get-thread-context handle-apply-overflood handle-docall-error handle-overflow handle-overflood handle-nonprocedure-symbol thread-list split-and-resize raw-collect-cond raw-tc-mutex activate-thread deactivate-thread unactivate-thread handle-values-error handle-mvlet-error handle-arg-error foreign-entry install-library-entry get-more-room scan-remembered-set instantiate-code-object Sreturn Scall-one-result Scall-any-results)
#define c_entry_vector_size 0x19
#define cached_stack_link_disp 0x4
#define cached_stack_size_disp 0x0
#define card_offset_bits 0x8
#define cards_per_segment 0x20
#define char_data_offset 0x8
#define char_factor 0x100
#define closure_code_disp 0x3
#define closure_data_disp 0x7
#define code_arity_mask_disp 0x11
#define code_closure_length_disp 0x15
#define code_data_disp 0x21
#define code_flag_continuation 0x2
#define code_flag_guardian 0x8
#define code_flag_system 0x1
#define code_flag_template 0x4
#define code_flags_offset 0x8
#define code_info_disp 0x19
#define code_length_disp 0x5
#define code_name_disp 0xD
#define code_pinfos_disp 0x1D
#define code_reloc_disp 0x9
#define code_type_disp 0x1
#define collect_interrupt_index 0x1
#define continuation_code_disp 0x3
#define continuation_link_disp 0x13
#define continuation_return_address_disp 0x17
#define continuation_stack_clength_disp 0xF
#define continuation_stack_disp 0x7
#define continuation_stack_length_disp 0xB
#define continuation_winders_disp 0x1B
#define countof_bignum 0x5
#define countof_box 0x9
#define countof_bytevector 0x15
#define countof_closure 0x3
#define countof_code 0xB
#define countof_continuation 0x4
#define countof_ephemeron 0x19
#define countof_exactnum 0x8
#define countof_flonum 0x2
#define countof_fxvector 0x14
#define countof_guardian 0x17
#define countof_inexactnum 0x7
#define countof_locked 0x16
#define countof_oblist 0x18
#define countof_pair 0x0
#define countof_port 0xA
#define countof_ratnum 0x6
#define countof_relocation_table 0x10
#define countof_rtd_counts 0xE
#define countof_stack 0xF
#define countof_string 0x13
#define countof_symbol 0x1
#define countof_thread 0xC
#define countof_tlc 0xD
#define countof_types 0x1A
#define countof_vector 0x12
#define countof_weakpair 0x11
#define default_collect_trip_bytes 0x400000
#define default_heap_reserve_ratio 1.0
#define default_max_nonstatic_generation 0x4
#define default_stack_size 0x7FF8
#define default_timer_ticks 0x3E8
#define dtvec_hour 0x3
#define dtvec_isdst 0x9
#define dtvec_mday 0x4
#define dtvec_min 0x2
#define dtvec_mon 0x5
#define dtvec_nsec 0x0
#define dtvec_sec 0x1
#define dtvec_size 0xC
#define dtvec_tzname 0xB
#define dtvec_tzoff 0xA
#define dtvec_wday 0x7
#define dtvec_yday 0x8
#define dtvec_year 0x6
#define ephemeron_car_disp 0x7
#define ephemeron_cdr_disp 0xB
#define ephemeron_next_disp 0xF
#define ephemeron_trigger_next_disp 0x13
#define eq_hashtable_subtype_ephemeron 0x2
#define eq_hashtable_subtype_normal 0x0
#define eq_hashtable_subtype_weak 0x1
#define exactnum_imag_disp 0x9
#define exactnum_real_disp 0x5
#define exactnum_type_disp 0x1
#define fasl_fld_double 0xA
#define fasl_fld_i16 0x2
#define fasl_fld_i24 0x3
#define fasl_fld_i32 0x4
#define fasl_fld_i40 0x5
#define fasl_fld_i48 0x6
#define fasl_fld_i56 0x7
#define fasl_fld_i64 0x8
#define fasl_fld_ptr 0x0
#define fasl_fld_single 0x9
#define fasl_fld_u8 0x1
#define fasl_header #vu8(0 0 0 0 99 104 101 122)
#define fasl_type_base_rtd 0x1A
#define fasl_type_box 0x1
#define fasl_type_bytevector 0x1D
#define fasl_type_closure 0x6
#define fasl_type_code 0xB
#define fasl_type_entry 0xD
#define fasl_type_ephemeron 0x1C
#define fasl_type_eq_hashtable 0x1F
#define fasl_type_exactnum 0x14
#define fasl_type_flonum 0x8
#define fasl_type_fxvector 0x1B
#define fasl_type_gensym 0x13
#define fasl_type_graph 0x10
#define fasl_type_graph_def 0x11
#define fasl_type_graph_ref 0x12
#define fasl_type_gzip 0x2B
#define fasl_type_header 0x0
#define fasl_type_immediate 0xC
#define fasl_type_immutable_box 0x29
#define fasl_type_immutable_bytevector 0x28
#define fasl_type_immutable_fxvector 0x27
#define fasl_type_immutable_string 0x26
#define fasl_type_immutable_vector 0x25
#define fasl_type_inexactnum 0x5
#define fasl_type_large_integer 0xA
#define fasl_type_library 0xE
#define fasl_type_library_code 0xF
#define fasl_type_lz4 0x2C
#define fasl_type_pair 0x7
#define fasl_type_ratnum 0x3
#define fasl_type_record 0x17
#define fasl_type_revisit 0x23
#define fasl_type_rtd 0x18
#define fasl_type_small_integer 0x19
#define fasl_type_string 0x9
#define fasl_type_symbol 0x2
#define fasl_type_symbol_hashtable 0x20
#define fasl_type_uncompressed 0x2A
#define fasl_type_vector 0x4
#define fasl_type_visit 0x22
#define fasl_type_visit_revisit 0x24
#define fasl_type_weak_pair 0x1E
#define fixnum_bits 0x1E
#define fixnum_factor 0x4
#define fixnum_offset 0x2
#define fld_byte_index 0x4
#define fld_mutablep_index 0x2
#define fld_name_index 0x1
#define fld_type_index 0x3
#define flonum_data_disp 0x6
#define forward_address_disp 0x4
#define forward_marker (ptr)0x2E
#define forward_marker_disp 0x0
#define ftype_guardian_rep (ptr)0x56
#define fxvector_data_disp 0x5
#define fxvector_immutable_flag 0x8
#define fxvector_length_factor 0x10
#define fxvector_length_offset 0x4
#define fxvector_type_disp 0x1
#define guardian_entry_next_disp 0xC
#define guardian_entry_obj_disp 0x0
#define guardian_entry_rep_disp 0x4
#define guardian_entry_tconc_disp 0x8
#define hashtable_default_size 0x8
#define header_size_bignum 0x4
#define header_size_bytevector 0x8
#define header_size_closure 0x4
#define header_size_code 0x20
#define header_size_fxvector 0x4
#define header_size_record 0x4
#define header_size_reloc_table 0x8
#define header_size_string 0x4
#define header_size_vector 0x4
#define ignore_event_flag 0x0
#define inexactnum_imag_disp 0x11
#define inexactnum_pad_disp 0x5
#define inexactnum_real_disp 0x9
#define inexactnum_type_disp 0x1
#define int_bits 0x20
#define integer_divide_instruction 1
#define keyboard_interrupt_index 0x3
#define library_entry_vector_size 0x210
#define libspec_closure_index 0xD
#define libspec_does_not_expect_headroom_index 0x0
#define libspec_error_index 0xE
#define libspec_fake_index 0x10
#define libspec_flags_index 0x2
#define libspec_has_does_not_expect_headroom_version_index 0xF
#define libspec_index_base_offset 0x1
#define libspec_index_base_size 0x9
#define libspec_index_offset 0x0
#define libspec_index_size 0xA
#define libspec_interface_offset 0xA
#define libspec_interface_size 0x3
#define libspec_name_index 0x1
#define log2_ptr_bytes 0x2
#define long_bits 0x20
#define long_long_bits 0x40
#define machine_type 0x9
#define machine_type_a6fb 0x15
#define machine_type_a6le 0xB
#define machine_type_a6nb 0x19
#define machine_type_a6nt 0x1B
#define machine_type_a6ob 0xF
#define machine_type_a6osx 0xD
#define machine_type_a6s2 0x11
#define machine_type_alist ((0 . any) (1 . i3le) (2 . ti3le) (3 . i3nt) (4 . ti3nt) (5 . i3fb) (6 . ti3fb) (7 . i3ob) (8 . ti3ob) (9 . i3osx) (10 . ti3osx) (11 . a6le) (12 . ta6le) (13 . a6osx) (14 . ta6osx) (15 . a6ob) (16 . ta6ob) (17 . a6s2) (18 . ta6s2) (19 . i3s2) (20 . ti3s2) (21 . a6fb) (22 . ta6fb) (23 . i3nb) (24 . ti3nb) (25 . a6nb) (26 . ta6nb) (27 . a6nt) (28 . ta6nt) (29 . i3qnx) (30 . ti3qnx) (31 . arm32le) (32 . tarm32le) (33 . ppc32le) (34 . tppc32le))
#define machine_type_any 0x0
#define machine_type_arm32le 0x1F
#define machine_type_i3fb 0x5
#define machine_type_i3le 0x1
#define machine_type_i3nb 0x17
#define machine_type_i3nt 0x3
#define machine_type_i3ob 0x7
#define machine_type_i3osx 0x9
#define machine_type_i3qnx 0x1D
#define machine_type_i3s2 0x13
#define machine_type_limit 0x23
#define machine_type_name i3osx
#define machine_type_ppc32le 0x21
#define machine_type_ta6fb 0x16
#define machine_type_ta6le 0xC
#define machine_type_ta6nb 0x1A
#define machine_type_ta6nt 0x1C
#define machine_type_ta6ob 0x10
#define machine_type_ta6osx 0xE
#define machine_type_ta6s2 0x12
#define machine_type_tarm32le 0x20
#define machine_type_ti3fb 0x6
#define machine_type_ti3le 0x2
#define machine_type_ti3nb 0x18
#define machine_type_ti3nt 0x4
#define machine_type_ti3ob 0x8
#define machine_type_ti3osx 0xA
#define machine_type_ti3qnx 0x1E
#define machine_type_ti3s2 0x14
#define machine_type_tppc32le 0x22
#define mask_bignum 0x1F
#define mask_bignum_sign 0x20
#define mask_binary_input_port 0x5FF
#define mask_binary_output_port 0x6FF
#define mask_binary_port 0x4FF
#define mask_boolean 0xF7
#define mask_box 0x7F
#define mask_bwp 0xFFFFFFFF
#define mask_bytevector 0x3
#define mask_char 0xFF
#define mask_closure 0x7
#define mask_code 0xFF
#define mask_continuation_code 0x2FF
#define mask_eof 0xFFFFFFFF
#define mask_exactnum 0xFFFFFFFF
#define mask_false 0xFFFFFFFF
#define mask_fixnum 0x3
#define mask_flonum 0x7
#define mask_fxvector 0x7
#define mask_guardian_code 0x8FF
#define mask_immediate 0x7
#define mask_inexactnum 0xFFFFFFFF
#define mask_input_port 0x1FF
#define mask_mutable_box 0xFFFFFFFF
#define mask_mutable_bytevector 0x7
#define mask_mutable_fxvector 0xF
#define mask_mutable_string 0xF
#define mask_mutable_vector 0x7
#define mask_nil 0xFFFFFFFF
#define mask_octet -0x3FD
#define mask_other_number 0xF
#define mask_output_port 0x2FF
#define mask_pair 0x7
#define mask_port 0xFF
#define mask_ratnum 0xFFFFFFFF
#define mask_record 0x7
#define mask_rtd_counts 0xFFFFFFFF
#define mask_signed_bignum 0x3F
#define mask_string 0x7
#define mask_symbol 0x7
#define mask_system_code 0x1FF
#define mask_textual_input_port 0x5FF
#define mask_textual_output_port 0x6FF
#define mask_textual_port 0x4FF
#define mask_thread 0xFFFFFFFF
#define mask_tlc 0xFFFFFFFF
#define mask_typed_object 0x7
#define mask_unbound 0xFFFFFFFF
#define mask_vector 0x3
#define max_float_alignment 0x4
#define max_integer_alignment 0x4
#define max_real_space 0xB
#define max_space 0xC
#define max_sweep_space 0xA
#define maximum_bignum_length (iptr)0x3FFFFFF
#define maximum_bytevector_length (iptr)0x1FFFFFFF
#define maximum_fxvector_length (iptr)0xFFFFFFF
#define maximum_interrupt_index 0x4
#define maximum_string_length (iptr)0xFFFFFFF
#define maximum_vector_length (iptr)0x1FFFFFFF
#define minimum_segment_request 0x80
#define most_negative_fixnum (iptr)-0x20000000
#define most_positive_fixnum (iptr)0x1FFFFFFF
#define native_endianness little
#define one_shot_headroom 0x600
#define ordinary_type_bits 0x8
#define pair_car_disp 0x7
#define pair_cdr_disp 0xB
#define pair_shift 0x3
#define port_flag_binary 0x4
#define port_flag_block_buffered 0x200
#define port_flag_bol 0x80
#define port_flag_char_positions 0x1000
#define port_flag_closed 0x8
#define port_flag_compressed 0x20
#define port_flag_eof 0x100
#define port_flag_exclusive 0x40
#define port_flag_file 0x10
#define port_flag_fold_case 0x4000
#define port_flag_input 0x1
#define port_flag_input_mode 0x800
#define port_flag_line_buffered 0x400
#define port_flag_no_fold_case 0x8000
#define port_flag_output 0x2
#define port_flag_r6rs 0x2000
#define port_flags_offset 0x8
#define port_handler_disp 0x5
#define port_ibuffer_disp 0x1D
#define port_icount_disp 0xD
#define port_ilast_disp 0x19
#define port_info_disp 0x21
#define port_name_disp 0x25
#define port_obuffer_disp 0x15
#define port_ocount_disp 0x9
#define port_olast_disp 0x11
#define port_type_disp 0x1
#define prelex_is_flags_offset 0x8
#define prelex_is_mask 0xFF00
#define prelex_sticky_mask 0xFF
#define prelex_was_flags_offset 0x10
#define primary_type_bits 0x3
#define ptr_bits 0x20
#define ptr_bytes 0x4
#define ptrdiff_t_bits 0x20
#define ratnum_denominator_disp 0x9
#define ratnum_numerator_disp 0x5
#define ratnum_type_disp 0x1
#define real_space_alist ((new . 0) (impure . 1) (symbol . 2) (port . 3) (weakpair . 4) (ephemeron . 5) (pure . 6) (continuation . 7) (code . 8) (pure-typed-object . 9) (impure-record . 10) (data . 11))
#define record_data_disp 0x5
#define record_type_counts_disp 0x25
#define record_type_disp 0x1
#define record_type_flags_disp 0x1D
#define record_type_flds_disp 0x19
#define record_type_mpm_disp 0x11
#define record_type_name_disp 0x15
#define record_type_parent_disp 0x5
#define record_type_pm_disp 0xD
#define record_type_size_disp 0x9
#define record_type_type_disp 0x1
#define record_type_uid_disp 0x21
#define reloc_abs 0x0
#define reloc_code_offset_index 0x3
#define reloc_code_offset_mask 0x3FF
#define reloc_code_offset_offset 0x4
#define reloc_extended_format 0x1
#define reloc_item_offset_index 0x2
#define reloc_item_offset_mask 0x3FFFF
#define reloc_item_offset_offset 0xE
#define reloc_longp_index 0x4
#define reloc_rel 0x1
#define reloc_table_code_disp 0x4
#define reloc_table_data_disp 0x8
#define reloc_table_size_disp 0x0
#define reloc_type_index 0x1
#define reloc_type_mask 0x7
#define reloc_type_offset 0x1
#define return_address_frame_size_disp -0x8
#define return_address_livemask_disp -0x10
#define return_address_mv_return_address_disp -0x4
#define return_address_toplink_disp -0xC
#define rp_header_frame_size_disp 0x8
#define rp_header_livemask_disp 0x0
#define rp_header_mv_return_address_disp 0xC
#define rp_header_toplink_disp 0x4
#define rtd_counts_data_disp 0xD
#define rtd_counts_timestamp_disp 0x5
#define rtd_counts_type_disp 0x1
#define rtd_generative 0x1
#define rtd_opaque 0x2
#define rtd_sealed 0x4
#define sbwp (ptr)0x4E
#define scaled_shot_1_shot_flag -0x4
#define scheme_version 0x90603
#define segment_card_offset_bits 0x5
#define segment_offset_bits 0xD
#define segment_t1_bits 0x13
#define segment_table_levels 0x1
#define seof (ptr)0x36
#define sfalse (ptr)0x6
#define short_bits 0x10
#define signal_interrupt_index 0x4
#define size_box 0x8
#define size_cached_stack 0x8
#define size_continuation 0x20
#define size_ephemeron 0x10
#define size_exactnum 0x10
#define size_flonum 0x8
#define size_forward 0x8
#define size_guardian_entry 0x10
#define size_inexactnum 0x18
#define size_pair 0x8
#define size_port 0x28
#define size_ratnum 0x10
#define size_record_type 0x28
#define size_rp_header 0x10
#define size_rtd_counts 0x410
#define size_symbol 0x18
#define size_tc 0x158
#define size_thread 0x8
#define size_tlc 0x10
#define size_typed_object 0x8
#define size_t_bits 0x20
#define snil (ptr)0x26
#define space_char_list (#\n #\i #\x #\q #\w #\e #\p #\k #\c #\r #\s #\d #\e)
#define space_cname_list ("new" "impure" "symbol" "port" "weakpr" "emph" "pure" "cont" "code" "p-tobj" "ip-rec" "data" "empty")
#define space_code 0x8
#define space_continuation 0x7
#define space_data 0xB
#define space_empty 0xC
#define space_ephemeron 0x5
#define space_impure 0x1
#define space_impure_record 0xA
#define space_locked 0x20
#define space_new 0x0
#define space_old 0x40
#define space_port 0x3
#define space_pure 0x6
#define space_pure_typed_object 0x9
#define space_symbol 0x2
#define space_weakpair 0x4
#define stack_frame_limit 0x100
#define stack_slop 0x200
#define static_generation 0xFF
#define string_char_bits 0x20
#define string_char_bytes 0x4
#define string_char_offset 0x2
#define string_data_disp 0x5
#define string_immutable_flag 0x8
#define string_length_factor 0x10
#define string_length_offset 0x4
#define string_type_disp 0x1
#define strue (ptr)0xE
#define sunbound (ptr)0x1E
#define svoid (ptr)0x3E
#define symbol_hash_disp 0x19
#define symbol_name_disp 0x11
#define symbol_plist_disp 0xD
#define symbol_pvalue_disp 0x9
#define symbol_splist_disp 0x15
#define symbol_value_disp 0x5
#define tc_DSTBV_disp 0x150
#define tc_SRCBV_disp 0x154
#define tc_U_disp 0xA4
#define tc_V_disp 0xA8
#define tc_W_disp 0xAC
#define tc_X_disp 0xB0
#define tc_Y_disp 0xB4
#define tc_ac0_disp 0x4
#define tc_ac1_disp 0x8
#define tc_active_disp 0x8C
#define tc_alloc_counter_disp 0x144
#define tc_ap_disp 0x18
#define tc_arg_regs_disp 0x0
#define tc_block_counter_disp 0xE0
#define tc_cchain_disp 0x80
#define tc_code_ranges_to_flush_disp 0x84
#define tc_compile_profile_disp 0x10C
#define tc_compress_format_disp 0x130
#define tc_compress_level_disp 0x134
#define tc_cp_disp 0x10
#define tc_current_error_disp 0xDC
#define tc_current_input_disp 0xD4
#define tc_current_mso_disp 0xE8
#define tc_current_output_disp 0xD8
#define tc_default_record_equal_procedure_disp 0x128
#define tc_default_record_hash_procedure_disp 0x12C
#define tc_disable_count_disp 0xC0
#define tc_eap_disp 0x1C
#define tc_esp_disp 0x14
#define tc_fxfirst_bit_set_bv_disp 0xF4
#define tc_fxlength_bv_disp 0xF0
#define tc_generate_inspector_information_disp 0x110
#define tc_generate_procedure_source_information_disp 0x114
#define tc_generate_profile_forms_disp 0x118
#define tc_guardian_entries_disp 0x7C
#define tc_instr_counter_disp 0x13C
#define tc_keyboard_interrupt_pending_disp 0xCC
#define tc_lz4_out_buffer_disp 0x138
#define tc_meta_level_disp 0x108
#define tc_null_immutable_bytevector_disp 0x100
#define tc_null_immutable_fxvector_disp 0xFC
#define tc_null_immutable_string_disp 0x104
#define tc_null_immutable_vector_disp 0xF8
#define tc_optimize_level_disp 0x11C
#define tc_parameters_disp 0x14C
#define tc_random_seed_disp 0x88
#define tc_real_eap_disp 0x38
#define tc_ret_disp 0x20
#define tc_scheme_stack_disp 0x90
#define tc_scheme_stack_size_disp 0x9C
#define tc_sfd_disp 0xE4
#define tc_sfp_disp 0xC
#define tc_signal_interrupt_pending_disp 0xC4
#define tc_signal_interrupt_queue_disp 0xC8
#define tc_something_pending_disp 0xB8
#define tc_stack_cache_disp 0x94
#define tc_stack_link_disp 0x98
#define tc_subset_mode_disp 0x120
#define tc_suppress_primitive_inlining_disp 0x124
#define tc_target_machine_disp 0xEC
#define tc_td_disp 0x34
#define tc_threadno_disp 0xD0
#define tc_timer_ticks_disp 0xBC
#define tc_trap_disp 0x24
#define tc_ts_disp 0x30
#define tc_virtual_registers_disp 0x3C
#define tc_winders_disp 0xA0
#define tc_xp_disp 0x28
#define tc_yp_disp 0x2C
#define thread_tc_disp 0x5
#define thread_type_disp 0x1
#define time_collector_cpu 0x5
#define time_collector_real 0x6
#define time_duration 0x2
#define time_monotonic 0x3
#define time_process 0x0
#define time_t_bits 0x20
#define time_thread 0x1
#define time_utc 0x4
#define timer_interrupt_index 0x2
#define tlc_ht_disp 0x9
#define tlc_keyval_disp 0x5
#define tlc_next_disp 0xD
#define tlc_type_disp 0x1
#define type_bignum 0x6
#define type_binary_input_port 0x51E
#define type_binary_output_port 0x61E
#define type_binary_port 0x41E
#define type_boolean 0x6
#define type_box 0xE
#define type_bytevector 0x1
#define type_char 0x16
#define type_closure 0x5
#define type_code 0x3E
#define type_continuation_code 0x23E
#define type_exactnum 0x56
#define type_fixnum 0x0
#define type_flonum 0x2
#define type_fxvector 0x3
#define type_guardian_code 0x83E
#define type_immediate 0x6
#define type_immutable_box 0x8E
#define type_immutable_bytevector 0x5
#define type_immutable_fxvector 0xB
#define type_immutable_string 0xA
#define type_immutable_vector 0x4
#define type_inexactnum 0x36
#define type_input_port 0x11E
#define type_io_port 0x31E
#define type_mutable_box 0xE
#define type_mutable_bytevector 0x1
#define type_mutable_fxvector 0x3
#define type_mutable_string 0x2
#define type_mutable_vector 0x0
#define type_negative_bignum 0x26
#define type_octet 0x0
#define type_other_number 0x6
#define type_output_port 0x21E
#define type_pair 0x1
#define type_port 0x1E
#define type_positive_bignum 0x6
#define type_ratnum 0x16
#define type_record 0x7
#define type_rtd_counts 0x6E
#define type_string 0x2
#define type_symbol 0x3
#define type_system_code 0x13E
#define type_textual_input_port 0x11E
#define type_textual_output_port 0x21E
#define type_textual_port 0x1E
#define type_thread 0x4E
#define type_tlc 0x5E
#define type_typed_object 0x7
#define type_vector 0x0
#define typed_object_type_disp 0x1
#define typedef_i16 "short"
#define typedef_i32 "int"
#define typedef_i64 "long long"
#define typedef_i8 "char"
#define typedef_iptr "int"
#define typedef_ptr "void *"
#define typedef_string_char "unsigned int"
#define typedef_u16 "unsigned short"
#define typedef_u32 "unsigned int"
#define typedef_u64 "unsigned long long"
#define typedef_u8 "unsigned char"
#define typedef_uptr "unsigned int"
#define typemod 0x8
#define unactivate_mode_deactivate 0x1
#define unactivate_mode_destroy 0x2
#define unactivate_mode_noop 0x0
#define unaligned_floats 1
#define unaligned_integers 1
#define underflow_limit 0x40
#define unscaled_shot_1_shot_flag -0x1
#define vector_data_disp 0x5
#define vector_immutable_flag 0x4
#define vector_length_factor 0x8
#define vector_length_offset 0x3
#define vector_type_disp 0x1
#define virtual_register_count 0x10
#define wchar_bits 0x20

/* constants from declare-c-entries */
#define CENTRY_Scall_any_results 24
#define CENTRY_Scall_one_result 23
#define CENTRY_Sreturn 22
#define CENTRY_activate_thread 11
#define CENTRY_deactivate_thread 12
#define CENTRY_foreign_entry 17
#define CENTRY_get_more_room 19
#define CENTRY_get_thread_context 1
#define CENTRY_handle_apply_overflood 2
#define CENTRY_handle_arg_error 16
#define CENTRY_handle_docall_error 3
#define CENTRY_handle_mvlet_error 15
#define CENTRY_handle_nonprocedure_symbol 6
#define CENTRY_handle_overflood 5
#define CENTRY_handle_overflow 4
#define CENTRY_handle_values_error 14
#define CENTRY_install_library_entry 18
#define CENTRY_instantiate_code_object 21
#define CENTRY_raw_collect_cond 9
#define CENTRY_raw_tc_mutex 10
#define CENTRY_scan_remembered_set 20
#define CENTRY_split_and_resize 8
#define CENTRY_thread_context 0
#define CENTRY_thread_list 7
#define CENTRY_unactivate_thread 13

/* displacements for records */
#define eq_hashtable_rtd_disp 1
#define eq_hashtable_type_disp 5
#define eq_hashtable_mutablep_disp 9
#define eq_hashtable_vec_disp 13
#define eq_hashtable_minlen_disp 17
#define eq_hashtable_size_disp 21
#define eq_hashtable_subtype_disp 25
#define symbol_hashtable_rtd_disp 1
#define symbol_hashtable_type_disp 5
#define symbol_hashtable_mutablep_disp 9
#define symbol_hashtable_vec_disp 13
#define symbol_hashtable_minlen_disp 17
#define symbol_hashtable_size_disp 21
#define symbol_hashtable_equivp_disp 25
#define code_info_rtd_disp 1
#define code_info_src_disp 5
#define code_info_sexpr_disp 9
#define code_info_free_disp 13
#define code_info_live_disp 17
#define code_info_rpis_disp 21

/* predicates */
#define Simmediatep(x) (((uptr)(x)&0x7)==0x6)
#define Sportp(x) ((((uptr)(x)&0x7)==0x7) &&\
    (((uptr)((*((ptr *)((uptr)(x)+1))))&0xFF)==0x1E))
#define Scodep(x) ((((uptr)(x)&0x7)==0x7) &&\
    (((uptr)((*((ptr *)((uptr)(x)+1))))&0xFF)==0x3E))

/* structure accessors */
#define INITCAR(x) (*((ptr *)((uptr)(x)+7)))
#define INITCDR(x) (*((ptr *)((uptr)(x)+11)))
#define SETCAR(x,y) DIRTYSET(((ptr *)((uptr)(x)+7)),(y))
#define SETCDR(x,y) DIRTYSET(((ptr *)((uptr)(x)+11)),(y))
#define BOXTYPE(x) (*((iptr *)((uptr)(x)+1)))
#define INITBOXREF(x) (*((ptr *)((uptr)(x)+5)))
#define SETBOXREF(x,y) DIRTYSET(((ptr *)((uptr)(x)+5)),(y))
#define EPHEMERONNEXT(x) (*((ptr *)((uptr)(x)+15)))
#define INITEPHEMERONNEXT(x) (*((ptr *)((uptr)(x)+15)))
#define EPHEMERONTRIGGERNEXT(x) (*((ptr *)((uptr)(x)+19)))
#define INITEPHEMERONTRIGGERNEXT(x) (*((ptr *)((uptr)(x)+19)))
#define TLCTYPE(x) (*((iptr *)((uptr)(x)+1)))
#define TLCKEYVAL(x) (*((ptr *)((uptr)(x)+5)))
#define TLCHT(x) (*((ptr *)((uptr)(x)+9)))
#define TLCNEXT(x) (*((ptr *)((uptr)(x)+13)))
#define INITTLCKEYVAL(x) (*((ptr *)((uptr)(x)+5)))
#define INITTLCHT(x) (*((ptr *)((uptr)(x)+9)))
#define INITTLCNEXT(x) (*((ptr *)((uptr)(x)+13)))
#define SETTLCNEXT(x,y) DIRTYSET(((ptr *)((uptr)(x)+13)),(y))
#define SYMVAL(x) (*((ptr *)((uptr)(x)+5)))
#define SYMPVAL(x) (*((ptr *)((uptr)(x)+9)))
#define SYMPLIST(x) (*((ptr *)((uptr)(x)+13)))
#define SYMNAME(x) (*((ptr *)((uptr)(x)+17)))
#define SYMSPLIST(x) (*((ptr *)((uptr)(x)+21)))
#define SYMHASH(x) (*((ptr *)((uptr)(x)+25)))
#define INITSYMVAL(x) (*((ptr *)((uptr)(x)+5)))
#define INITSYMPVAL(x) (*((ptr *)((uptr)(x)+9)))
#define INITSYMPLIST(x) (*((ptr *)((uptr)(x)+13)))
#define INITSYMNAME(x) (*((ptr *)((uptr)(x)+17)))
#define INITSYMSPLIST(x) (*((ptr *)((uptr)(x)+21)))
#define INITSYMHASH(x) (*((ptr *)((uptr)(x)+25)))
#define SETSYMVAL(x,y) DIRTYSET(((ptr *)((uptr)(x)+5)),(y))
#define SETSYMPVAL(x,y) DIRTYSET(((ptr *)((uptr)(x)+9)),(y))
#define SETSYMPLIST(x,y) DIRTYSET(((ptr *)((uptr)(x)+13)),(y))
#define SETSYMNAME(x,y) DIRTYSET(((ptr *)((uptr)(x)+17)),(y))
#define SETSYMSPLIST(x,y) DIRTYSET(((ptr *)((uptr)(x)+21)),(y))
#define SETSYMHASH(x,y) DIRTYSET(((ptr *)((uptr)(x)+25)),(y))
#define VECTTYPE(x) (*((iptr *)((uptr)(x)+1)))
#define INITVECTIT(x,i) (((ptr *)((uptr)(x)+5))[i])
#define SETVECTIT(x,i,y) DIRTYSET((((ptr *)((uptr)(x)+5))+i),(y))
#define FXVECTOR_TYPE(x) (*((iptr *)((uptr)(x)+1)))
#define FXVECTIT(x,i) (((ptr *)((uptr)(x)+5))[i])
#define BYTEVECTOR_TYPE(x) (*((iptr *)((uptr)(x)+1)))
#define BVIT(x,i) (((octet *)((uptr)(x)+9))[i])
#define INEXACTNUM_TYPE(x) (*((iptr *)((uptr)(x)+1)))
#define INEXACTNUM_REAL_PART(x) (*((double *)((uptr)(x)+9)))
#define INEXACTNUM_IMAG_PART(x) (*((double *)((uptr)(x)+17)))
#define EXACTNUM_TYPE(x) (*((iptr *)((uptr)(x)+1)))
#define EXACTNUM_REAL_PART(x) (*((ptr *)((uptr)(x)+5)))
#define EXACTNUM_IMAG_PART(x) (*((ptr *)((uptr)(x)+9)))
#define RATTYPE(x) (*((iptr *)((uptr)(x)+1)))
#define RATNUM(x) (*((ptr *)((uptr)(x)+5)))
#define RATDEN(x) (*((ptr *)((uptr)(x)+9)))
#define CLOSENTRY(x) (*((ptr *)((uptr)(x)+3)))
#define CLOSIT(x,i) (((ptr *)((uptr)(x)+7))[i])
#define FLODAT(x) (*((double *)((uptr)(x)+6)))
#define PORTTYPE(x) (*((iptr *)((uptr)(x)+1)))
#define PORTNAME(x) (*((ptr *)((uptr)(x)+37)))
#define PORTHANDLER(x) (*((ptr *)((uptr)(x)+5)))
#define PORTINFO(x) (*((ptr *)((uptr)(x)+33)))
#define PORTOCNT(x) (*((iptr *)((uptr)(x)+9)))
#define PORTOLAST(x) (*((ptr *)((uptr)(x)+17)))
#define PORTOBUF(x) (*((ptr *)((uptr)(x)+21)))
#define PORTICNT(x) (*((iptr *)((uptr)(x)+13)))
#define PORTILAST(x) (*((ptr *)((uptr)(x)+25)))
#define PORTIBUF(x) (*((ptr *)((uptr)(x)+29)))
#define STRTYPE(x) (*((iptr *)((uptr)(x)+1)))
#define STRIT(x,i) (((string_char *)((uptr)(x)+5))[i])
#define BIGTYPE(x) (*((iptr *)((uptr)(x)+1)))
#define BIGIT(x,i) (((bigit *)((uptr)(x)+5))[i])
#define CODETYPE(x) (*((iptr *)((uptr)(x)+1)))
#define CODELEN(x) (*((iptr *)((uptr)(x)+5)))
#define CODERELOC(x) (*((ptr *)((uptr)(x)+9)))
#define CODENAME(x) (*((ptr *)((uptr)(x)+13)))
#define CODEARITYMASK(x) (*((ptr *)((uptr)(x)+17)))
#define CODEFREE(x) (*((iptr *)((uptr)(x)+21)))
#define CODEINFO(x) (*((ptr *)((uptr)(x)+25)))
#define CODEPINFOS(x) (*((ptr *)((uptr)(x)+29)))
#define CODEIT(x,i) (((octet *)((uptr)(x)+33))[i])
#define RELOCSIZE(x) (*((iptr *)((uptr)(x)+0)))
#define RELOCCODE(x) (*((ptr *)((uptr)(x)+4)))
#define RELOCIT(x,i) (((uptr *)((uptr)(x)+8))[i])
#define CONTSTACK(x) (*((ptr *)((uptr)(x)+7)))
#define CONTLENGTH(x) (*((iptr *)((uptr)(x)+11)))
#define CONTCLENGTH(x) (*((iptr *)((uptr)(x)+15)))
#define CONTLINK(x) (*((ptr *)((uptr)(x)+19)))
#define CONTRET(x) (*((ptr *)((uptr)(x)+23)))
#define CONTWINDERS(x) (*((ptr *)((uptr)(x)+27)))
#define RTDCOUNTSTYPE(x) (*((iptr *)((uptr)(x)+1)))
#define RTDCOUNTSTIMESTAMP(x) (*((U64 *)((uptr)(x)+5)))
#define RTDCOUNTSIT(x,i) (((uptr *)((uptr)(x)+13))[i])
#define RECORDDESCPARENT(x) (*((ptr *)((uptr)(x)+5)))
#define RECORDDESCSIZE(x) (*((ptr *)((uptr)(x)+9)))
#define RECORDDESCPM(x) (*((ptr *)((uptr)(x)+13)))
#define RECORDDESCMPM(x) (*((ptr *)((uptr)(x)+17)))
#define RECORDDESCNAME(x) (*((ptr *)((uptr)(x)+21)))
#define RECORDDESCFLDS(x) (*((ptr *)((uptr)(x)+25)))
#define RECORDDESCFLAGS(x) (*((ptr *)((uptr)(x)+29)))
#define RECORDDESCUID(x) (*((ptr *)((uptr)(x)+33)))
#define RECORDDESCCOUNTS(x) (*((ptr *)((uptr)(x)+37)))
#define RECORDINSTTYPE(x) (*((ptr *)((uptr)(x)+1)))
#define RECORDINSTIT(x,i) (((ptr *)((uptr)(x)+5))[i])
#define CLOSCODE(p) ((ptr)((uptr)CLOSENTRY(p)-code_data_disp))
#define CODEENTRYPOINT(x) ((ptr)((uptr)(x)+code_data_disp))
#define SETCLOSCODE(p,x) (CLOSENTRY(p) = CODEENTRYPOINT(x))
#define SYMCODE(p) ((ptr)((uptr)SYMPVAL(p)-code_data_disp))
#define INITSYMCODE(p,x) (INITSYMPVAL(p) = CODEENTRYPOINT(x))
#define SETSYMCODE(p,x) SETSYMPVAL(p,CODEENTRYPOINT(x))
#define BIGLEN(x) ((iptr)((uptr)BIGTYPE(x) >> bignum_length_offset))
#define BIGSIGN(x) ((BIGTYPE(x) & mask_bignum_sign) >> bignum_sign_offset)
#define SETBIGLENANDSIGN(x,xl,xs) BIGTYPE(x) = (uptr)(xl) << bignum_length_offset | (xs) << bignum_sign_offset | type_bignum
#define CLOSLEN(p) CODEFREE(CLOSCODE(p))
#define GUARDIANOBJ(x) (*((ptr *)((uptr)(x)+0)))
#define GUARDIANREP(x) (*((ptr *)((uptr)(x)+4)))
#define GUARDIANTCONC(x) (*((ptr *)((uptr)(x)+8)))
#define GUARDIANNEXT(x) (*((ptr *)((uptr)(x)+12)))
#define INITGUARDIANOBJ(x) (*((ptr *)((uptr)(x)+0)))
#define INITGUARDIANREP(x) (*((ptr *)((uptr)(x)+4)))
#define INITGUARDIANTCONC(x) (*((ptr *)((uptr)(x)+8)))
#define INITGUARDIANNEXT(x) (*((ptr *)((uptr)(x)+12)))
#define FORWARDMARKER(x) (*((ptr *)((uptr)(x)+0)))
#define FORWARDADDRESS(x) (*((ptr *)((uptr)(x)+4)))
#define CACHEDSTACKSIZE(x) (*((iptr *)((uptr)(x)+0)))
#define CACHEDSTACKLINK(x) (*((ptr *)((uptr)(x)+4)))
#define RPHEADERFRAMESIZE(x) (*((iptr *)((uptr)(x)+8)))
#define RPHEADERLIVEMASK(x) (*((ptr *)((uptr)(x)+0)))
#define RPHEADERTOPLINK(x) (*((uptr *)((uptr)(x)+4)))

/* machine types */
#define machine_type_names {"any", "i3le", "ti3le", "i3nt", "ti3nt", "i3fb", "ti3fb", "i3ob", "ti3ob", "i3osx", "ti3osx", "a6le", "ta6le", "a6osx", "ta6osx", "a6ob", "ta6ob", "a6s2", "ta6s2", "i3s2", "ti3s2", "a6fb", "ta6fb", "i3nb", "ti3nb", "a6nb", "ta6nb", "a6nt", "ta6nt", "i3qnx", "ti3qnx", "arm32le", "tarm32le", "ppc32le", "tppc32le"}

/* allocation-space names */
#define alloc_space_names "new", "impure", "symbol", "port", "weakpr", "emph", "pure", "cont", "code", "p-tobj", "ip-rec", "data", "empty"

/* allocation-space characters */
#define alloc_space_chars 'n', 'i', 'x', 'q', 'w', 'e', 'p', 'k', 'c', 'r', 's', 'd', 'e'

/* threads */
#define THREADTC(x) (*((uptr *)((uptr)(x)+5)))

/* thread-context data */
#define DSTBV(x) (*((ptr *)((uptr)(x)+336)))
#define SRCBV(x) (*((ptr *)((uptr)(x)+340)))
#define U(x) (*((ptr *)((uptr)(x)+164)))
#define V(x) (*((ptr *)((uptr)(x)+168)))
#define W(x) (*((ptr *)((uptr)(x)+172)))
#define X(x) (*((ptr *)((uptr)(x)+176)))
#define Y(x) (*((ptr *)((uptr)(x)+180)))
#define AC0(x) (*((void* *)((uptr)(x)+4)))
#define AC1(x) (*((void* *)((uptr)(x)+8)))
#define ACTIVE(x) (*((I32 *)((uptr)(x)+140)))
#define ALLOCCOUNTER(x) (*((U64 *)((uptr)(x)+324)))
#define AP(x) (*((void* *)((uptr)(x)+24)))
#define ARGREGS(x,i) (((void* *)((uptr)(x)+0))[i])
#define BLOCKCOUNTER(x) (*((ptr *)((uptr)(x)+224)))
#define CCHAIN(x) (*((ptr *)((uptr)(x)+128)))
#define CODERANGESTOFLUSH(x) (*((ptr *)((uptr)(x)+132)))
#define COMPILEPROFILE(x) (*((ptr *)((uptr)(x)+268)))
#define COMPRESSFORMAT(x) (*((ptr *)((uptr)(x)+304)))
#define COMPRESSLEVEL(x) (*((ptr *)((uptr)(x)+308)))
#define CP(x) (*((void* *)((uptr)(x)+16)))
#define CURRENTERROR(x) (*((ptr *)((uptr)(x)+220)))
#define CURRENTINPUT(x) (*((ptr *)((uptr)(x)+212)))
#define CURRENTMSO(x) (*((ptr *)((uptr)(x)+232)))
#define CURRENTOUTPUT(x) (*((ptr *)((uptr)(x)+216)))
#define DEFAULTRECORDEQUALPROCEDURE(x) (*((ptr *)((uptr)(x)+296)))
#define DEFAULTRECORDHASHPROCEDURE(x) (*((ptr *)((uptr)(x)+300)))
#define DISABLECOUNT(x) (*((ptr *)((uptr)(x)+192)))
#define EAP(x) (*((void* *)((uptr)(x)+28)))
#define ESP(x) (*((void* *)((uptr)(x)+20)))
#define FXFIRSTBITSETBV(x) (*((ptr *)((uptr)(x)+244)))
#define FXLENGTHBV(x) (*((ptr *)((uptr)(x)+240)))
#define GENERATEINSPECTORINFORMATION(x) (*((ptr *)((uptr)(x)+272)))
#define GENERATEPROCEDURESOURCEINFORMATION(x) (*((ptr *)((uptr)(x)+276)))
#define GENERATEPROFILEFORMS(x) (*((ptr *)((uptr)(x)+280)))
#define GUARDIANENTRIES(x) (*((ptr *)((uptr)(x)+124)))
#define INSTRCOUNTER(x) (*((U64 *)((uptr)(x)+316)))
#define KEYBOARDINTERRUPTPENDING(x) (*((ptr *)((uptr)(x)+204)))
#define LZ4OUTBUFFER(x) (*((void* *)((uptr)(x)+312)))
#define METALEVEL(x) (*((ptr *)((uptr)(x)+264)))
#define NULLIMMUTABLEBYTEVECTOR(x) (*((ptr *)((uptr)(x)+256)))
#define NULLIMMUTABLEFXVECTOR(x) (*((ptr *)((uptr)(x)+252)))
#define NULLIMMUTABLESTRING(x) (*((ptr *)((uptr)(x)+260)))
#define NULLIMMUTABLEVECTOR(x) (*((ptr *)((uptr)(x)+248)))
#define OPTIMIZELEVEL(x) (*((ptr *)((uptr)(x)+284)))
#define PARAMETERS(x) (*((ptr *)((uptr)(x)+332)))
#define RANDOMSEED(x) (*((U32 *)((uptr)(x)+136)))
#define REAL_EAP(x) (*((void* *)((uptr)(x)+56)))
#define RET(x) (*((void* *)((uptr)(x)+32)))
#define SCHEMESTACK(x) (*((void* *)((uptr)(x)+144)))
#define SCHEMESTACKSIZE(x) (*((iptr *)((uptr)(x)+156)))
#define SFD(x) (*((ptr *)((uptr)(x)+228)))
#define SFP(x) (*((void* *)((uptr)(x)+12)))
#define SIGNALINTERRUPTPENDING(x) (*((ptr *)((uptr)(x)+196)))
#define SIGNALINTERRUPTQUEUE(x) (*((ptr *)((uptr)(x)+200)))
#define SOMETHINGPENDING(x) (*((ptr *)((uptr)(x)+184)))
#define STACKCACHE(x) (*((ptr *)((uptr)(x)+148)))
#define STACKLINK(x) (*((ptr *)((uptr)(x)+152)))
#define SUBSETMODE(x) (*((ptr *)((uptr)(x)+288)))
#define SUPPRESSPRIMITIVEINLINING(x) (*((ptr *)((uptr)(x)+292)))
#define TARGETMACHINE(x) (*((ptr *)((uptr)(x)+236)))
#define TD(x) (*((void* *)((uptr)(x)+52)))
#define THREADNO(x) (*((ptr *)((uptr)(x)+208)))
#define TIMERTICKS(x) (*((ptr *)((uptr)(x)+188)))
#define TRAP(x) (*((void* *)((uptr)(x)+36)))
#define TS(x) (*((void* *)((uptr)(x)+48)))
#define VIRTUALREGISTERS(x,i) (((ptr *)((uptr)(x)+60))[i])
#define WINDERS(x) (*((ptr *)((uptr)(x)+160)))
#define XP(x) (*((void* *)((uptr)(x)+40)))
#define YP(x) (*((void* *)((uptr)(x)+44)))
#define ARGREG(x,i) (((void* *)((uptr)(x)+0))[i])
#define VIRTREG(x,i) (((ptr *)((uptr)(x)+60))[i])

/* library entries we access from C code */
#define library_nonprocedure_code 152
#define library_dounderflow 154
