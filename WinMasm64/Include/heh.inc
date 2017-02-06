IFNDEF HEH_INC
HEH_INC equ <1>

PROTO64 external,yMsgBox, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetProcAddr, :QWORD, :LPSTR

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file heh.inc
echo -----------------------------------------
ENDIF

