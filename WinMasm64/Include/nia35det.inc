IFNDEF NIA35DET_INC
NIA35DET_INC equ <1>

PROTO64 external,FindAdapterHandler, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file nia35det.inc
echo -----------------------------------------
ENDIF

