IFNDEF LVCODEK_INC
LVCODEK_INC equ <1>

PROTO64 external,CodecOpen, :QWORD
PROTO64 external,DllUnload, 

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file lvcodek.inc
echo -----------------------------------------
ENDIF

