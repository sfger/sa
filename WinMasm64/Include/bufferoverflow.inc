IFNDEF BUFFEROVERFLOW_INC
BUFFEROVERFLOW_INC equ <1>

PROTO64 external,NtCurrentTeb, 
PROTO64 external,NtGetTickCount, 
PROTO64 external,NtProcessStartup, :QWORD
PROTO64 external,NtProcessStartupForGS, :QWORD
PROTO64 external,NtTerminateProcess, :QWORD,:QWORD
PROTO64 external,RtlUnhandledExceptionFilter, :QWORD
PROTO64 external,_DllMainCRTStartupForGS, :QWORD,:QWORD,:QWORD
PROTO64 external,_security_check_cookie, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file bufferoverflow.inc
echo -----------------------------------------
ENDIF

