IFNDEF RASSAPI_INC
RASSAPI_INC equ <1>

PROTO64 external,RasAdminCompressPhoneNumber, :QWORD,:QWORD
PROTO64 external,RasAdminFreeBuffer, :QWORD
PROTO64 external,RasAdminGetErrorString, :QWORD,:QWORD,:QWORD
PROTO64 external,RasAdminGetUserAccountServer, :QWORD,:QWORD,:QWORD
PROTO64 external,RasAdminGetUserParms, :QWORD,:QWORD
PROTO64 external,RasAdminPortClearStatistics, :QWORD,:QWORD
PROTO64 external,RasAdminPortDisconnect, :QWORD,:QWORD
PROTO64 external,RasAdminPortEnum, :QWORD,:QWORD,:QWORD
PROTO64 external,RasAdminPortGetInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RasAdminServerGetInfo, :QWORD,:QWORD
PROTO64 external,RasAdminSetUserParms, :QWORD,:QWORD,:QWORD
PROTO64 external,RasAdminUserGetInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,RasAdminUserSetInfo, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file rassapi.inc
echo -----------------------------------------
ENDIF

