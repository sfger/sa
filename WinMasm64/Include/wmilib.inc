IFNDEF WMILIB_INC
WMILIB_INC equ <1>

PROTO64 external,WmiCompleteRequest, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WmiFireEvent, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WmiSystemControl, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file wmilib.inc
echo -----------------------------------------
ENDIF

