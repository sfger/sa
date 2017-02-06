IFNDEF MSPBASE_INC
MSPBASE_INC equ <1>

PROTO64 external,TraceDeregisterW, :QWORD
PROTO64 external,TraceRegisterExW, :QWORD,:QWORD
PROTO64 external,TraceVprintfExA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,_security_check_cookie, :QWORD
PROTO64 external,gfThreadProc, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file mspbase.inc
echo -----------------------------------------
ENDIF

