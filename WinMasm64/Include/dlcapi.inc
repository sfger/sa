IFNDEF DLCAPI_INC
DLCAPI_INC equ <1>

PROTO64 external,AcsLan, :QWORD,:QWORD
PROTO64 external,DlcCallDriver, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetAdapterNameFromNumber, :QWORD,:QWORD
PROTO64 external,GetAdapterNumberFromName, :QWORD,:QWORD
PROTO64 external,NtAcsLan, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file dlcapi.inc
echo -----------------------------------------
ENDIF

