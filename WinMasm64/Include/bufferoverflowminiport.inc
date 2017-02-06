IFNDEF BUFFEROVERFLOWMINIPORT_INC
BUFFEROVERFLOWMINIPORT_INC equ <1>

PROTO64 external,DriverEntry, :QWORD,:QWORD
PROTO64 external,GsDriverEntry, :QWORD,:QWORD
PROTO64 external,_security_check_cookie, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file bufferoverflowminiport.inc
echo -----------------------------------------
ENDIF

