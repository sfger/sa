IFNDEF NWSAPLIB_INC
NWSAPLIB_INC equ <1>

PROTO64 external,SapAddAdvertise, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SapGetObjectID, :QWORD,:QWORD,:QWORD
PROTO64 external,SapGetObjectName, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SapLibInit, 
PROTO64 external,SapLibShutdown, 
PROTO64 external,SapRemoveAdvertise, :QWORD,:QWORD
PROTO64 external,SapScanObject, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,_security_check_cookie, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file nwsaplib.inc
echo -----------------------------------------
ENDIF

