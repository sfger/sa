IFNDEF SCRNSAVW_INC
SCRNSAVW_INC equ <1>

PROTO64 external,DefScreenSaverProc, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DoChangePw, :QWORD
PROTO64 external,DoConfigBox, :QWORD
PROTO64 external,DoPasswordCheck, :QWORD
PROTO64 external,DoSaverPreview, :QWORD
PROTO64 external,DoScreenSave, :QWORD
PROTO64 external,DummyEntry, 
PROTO64 external,GetElapsedTime, :QWORD,:QWORD
PROTO64 external,GetSystemPowerStatus, :QWORD
PROTO64 external,HogMachine, :QWORD
PROTO64 external,InitRealScreenSave, 
PROTO64 external,LoadPwdDLL, 
PROTO64 external,RealScreenSaverProc, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegisterDialogClasses, :QWORD
PROTO64 external,ScreenSaverChangePassword, :QWORD
PROTO64 external,ScreenSaverConfigureDialog, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScreenSaverProcW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UnloadPwdDLL, 
PROTO64 external,WinMain, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinMainN, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,_security_check_cookie, :QWORD
PROTO64 external,atoui, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file scrnsavw.inc
echo -----------------------------------------
ENDIF

