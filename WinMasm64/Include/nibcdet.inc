IFNDEF NIBCDET_INC
NIBCDET_INC equ <1>

PROTO64 external,FindAdapterHandler, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file nibcdet.inc
echo -----------------------------------------
ENDIF

