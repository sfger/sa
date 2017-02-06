IFNDEF SMCLIB_INC
SMCLIB_INC equ <1>

PROTO64 external,SmartcardAcquireRemoveLock, :QWORD
PROTO64 external,SmartcardAcquireRemoveLockWithTag, :QWORD,:QWORD
PROTO64 external,SmartcardCreateLink, :QWORD,:QWORD
PROTO64 external,SmartcardDeviceControl, :QWORD,:QWORD
PROTO64 external,SmartcardExit, :QWORD
PROTO64 external,SmartcardGetDebugLevel, 
PROTO64 external,SmartcardInitialize, :QWORD
PROTO64 external,SmartcardInitializeCardCapabilities, :QWORD
PROTO64 external,SmartcardInvertData, :QWORD,:QWORD
PROTO64 external,SmartcardLogError, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SmartcardRawReply, :QWORD
PROTO64 external,SmartcardRawRequest, :QWORD
PROTO64 external,SmartcardReleaseRemoveLock, :QWORD
PROTO64 external,SmartcardReleaseRemoveLockAndWait, :QWORD
PROTO64 external,SmartcardReleaseRemoveLockWithTag, :QWORD,:QWORD
PROTO64 external,SmartcardSetDebugLevel, :QWORD
PROTO64 external,SmartcardT0Reply, :QWORD
PROTO64 external,SmartcardT0Request, :QWORD
PROTO64 external,SmartcardT1Reply, :QWORD
PROTO64 external,SmartcardT1Request, :QWORD
PROTO64 external,SmartcardUpdateCardCapabilities, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file smclib.inc
echo -----------------------------------------
ENDIF

