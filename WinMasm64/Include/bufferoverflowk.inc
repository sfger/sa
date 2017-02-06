IFNDEF BUFFEROVERFLOWK_INC
BUFFEROVERFLOWK_INC equ <1>

PROTO64 external,DriverEntry, :QWORD,:QWORD
PROTO64 external,GsDriverEntry, :QWORD,:QWORD
PROTO64 external,_GsDriverEntry, :QWORD,:QWORD
PROTO64 external,_security_check_cookie, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file bufferoverflowk.inc
echo -----------------------------------------
ENDIF

