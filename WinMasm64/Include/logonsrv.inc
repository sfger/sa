IFNDEF LOGONSRV_INC
LOGONSRV_INC equ <1>

PROTO64 external,DsGetDcCloseW, :QWORD
PROTO64 external,DsGetDcNameA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DsGetDcNameW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DsGetDcNameWithAccountA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DsGetDcNameWithAccountW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DsGetDcNextA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DsGetDcNextW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DsGetDcOpenA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DsGetDcOpenW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetApiBufferFree, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file logonsrv.inc
echo -----------------------------------------
ENDIF

