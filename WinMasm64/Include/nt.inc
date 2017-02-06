IFNDEF NT_INC
NT_INC equ <1>

PROTO64 external,DbgBreakPoint, 
PROTO64 external,NtCurrentTeb, 
PROTO64 external,NtProcessStartup, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file nt.inc
echo -----------------------------------------
ENDIF

