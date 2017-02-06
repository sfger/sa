IFNDEF DSETUP_INC
DSETUP_INC equ <1>

PROTO64 external,DirectXDeviceDriverSetupA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DirectXDeviceDriverSetupW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DirectXLoadString, :QWORD,:QWORD,:QWORD
PROTO64 external,DirectXRegisterApplicationA, :QWORD,:QWORD
PROTO64 external,DirectXRegisterApplicationW, :QWORD,:QWORD
PROTO64 external,DirectXSetupA, :QWORD,:QWORD,:QWORD
PROTO64 external,DirectXSetupCallback, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DirectXSetupGetFileVersion, :QWORD,:QWORD,:QWORD
PROTO64 external,DirectXSetupGetVersion, :QWORD,:QWORD
PROTO64 external,DirectXSetupIsEng, 
PROTO64 external,DirectXSetupIsJapan, 
PROTO64 external,DirectXSetupIsJapanNec, 
PROTO64 external,DirectXSetupSetCallback, :QWORD
PROTO64 external,DirectXSetupShowEULA, :QWORD
PROTO64 external,DirectXSetupW, :QWORD,:QWORD,:QWORD
PROTO64 external,DirectXUnRegisterApplication, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file dsetup.inc
echo -----------------------------------------
ENDIF

