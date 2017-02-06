IFNDEF DPWSOCKX_INC
DPWSOCKX_INC equ <1>

PROTO64 external,DPWS_BuildIPMessageHeader, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DPWS_GetEnumPort, :QWORD,:QWORD
PROTO64 external,SPInit, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file dpwsockx.inc
echo -----------------------------------------
ENDIF

