IFNDEF FDI_INC
FDI_INC equ <1>

PROTO64 external,Arith_Close, 
PROTO64 external,Arith_Decode_Bits, :QWORD
PROTO64 external,Arith_Init, 
PROTO64 external,CSUMCompute, :QWORD,:QWORD,:QWORD
PROTO64 external,DComp_Close, 
PROTO64 external,DComp_DecompressBlock, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DComp_Init, :QWORD
PROTO64 external,DComp_Reset, 
PROTO64 external,ErfSetCodes, :QWORD,:QWORD,:QWORD
PROTO64 external,FDICallEnumerate, :QWORD
PROTO64 external,FDIGetDataBlock, :QWORD
PROTO64 external,FDIGetFile, :QWORD
PROTO64 external,FDIReadCFDATAEntry, :QWORD,:QWORD
PROTO64 external,FDIReadCFFILEEntry, :QWORD
PROTO64 external,FDIReadPSZ, :QWORD,:QWORD,:QWORD
PROTO64 external,GetCount, :QWORD
PROTO64 external,HuftBuild, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InflateBlock, :QWORD
PROTO64 external,InflateCodes, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InflateDynamic, :QWORD
PROTO64 external,InflateFixed, :QWORD
PROTO64 external,InflateStored, :QWORD,:QWORD
PROTO64 external,InitFixed, 
PROTO64 external,InitFolder, :QWORD,:QWORD
PROTO64 external,Internal_Literal, :QWORD
PROTO64 external,Internal_Match, :QWORD,:QWORD
PROTO64 external,LZX_Decode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LZX_DecodeFree, :QWORD
PROTO64 external,LZX_DecodeInit, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LZX_DecodeNewGroup, :QWORD
PROTO64 external,LoginCabinet, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Lz_Bump, :QWORD
PROTO64 external,Lz_Close, 
PROTO64 external,Lz_Init, :QWORD
PROTO64 external,Lz_NextToken, 
PROTO64 external,MDICreateDecompressionGlobal, :QWORD
PROTO64 external,MDIDecompressGlobal, :QWORD,:QWORD
PROTO64 external,MDIDestroyDecompressionGlobal, :QWORD
PROTO64 external,MDIResetDecompressionGlobal, :QWORD
PROTO64 external,NFM_Decompress, :QWORD,:QWORD
PROTO64 external,NFM_Prepare, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NFMdeco_create, :QWORD
PROTO64 external,NFMdeco_destroy, :QWORD,:QWORD
PROTO64 external,ReadRepTree, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Remove_Symbol, :QWORD,:QWORD
PROTO64 external,Rtl_Free, :QWORD
PROTO64 external,Rtl_Malloc, :QWORD
PROTO64 external,SeekFolder, :QWORD,:QWORD
PROTO64 external,SetDecompressionType, :QWORD,:QWORD
PROTO64 external,StringCatWorkerA, :QWORD,:QWORD,:QWORD
PROTO64 external,StringCchCatA, :QWORD,:QWORD,:QWORD
PROTO64 external,StringCchCopyA, :QWORD,:QWORD,:QWORD
PROTO64 external,StringCopyWorkerA, :QWORD,:QWORD,:QWORD
PROTO64 external,StringLengthWorkerA, :QWORD,:QWORD,:QWORD
PROTO64 external,SwitchToNewCab, :QWORD
PROTO64 external,_security_check_cookie, :QWORD
PROTO64 external,allocate_decompression_memory, :QWORD
PROTO64 external,copy_data_to_output, :QWORD,:QWORD,:QWORD
PROTO64 external,decode_aligned_offset_block, :QWORD,:QWORD,:QWORD
PROTO64 external,decode_block, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,decode_data, :QWORD,:QWORD
PROTO64 external,decode_uncompressed_block, :QWORD,:QWORD,:QWORD
PROTO64 external,decode_verbatim_block, :QWORD,:QWORD,:QWORD
PROTO64 external,decoder_misc_init, :QWORD
PROTO64 external,decoder_translate_e8, :QWORD,:QWORD,:QWORD
PROTO64 external,doCabinetInfoNotify, :QWORD
PROTO64 external,fast_decode_aligned_offset_block, :QWORD,:QWORD,:QWORD
PROTO64 external,fast_decode_verbatim_block, :QWORD,:QWORD,:QWORD
PROTO64 external,fillbuf, :QWORD,:QWORD
PROTO64 external,free_decompression_memory, :QWORD
PROTO64 external,getbits, :QWORD,:QWORD
PROTO64 external,handle_beginning_of_uncompressed_block, :QWORD
PROTO64 external,init_decoder_input, :QWORD
PROTO64 external,init_decoder_translation, :QWORD
PROTO64 external,initialise_decoder_bitbuf, :QWORD
PROTO64 external,make_table, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,make_table_8bit, :QWORD,:QWORD,:QWORD
PROTO64 external,read_aligned_offset_tree, :QWORD
PROTO64 external,read_main_and_secondary_trees, :QWORD
PROTO64 external,reset_decoder_trees, :QWORD
PROTO64 external,special_decode_aligned_block, :QWORD,:QWORD,:QWORD
PROTO64 external,special_decode_verbatim_block, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file fdi.inc
echo -----------------------------------------
ENDIF

