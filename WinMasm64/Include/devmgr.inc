IFNDEF DEVMGR_INC
DEVMGR_INC equ <1>

PROTO64 external,DeviceCreateHardwarePage, :QWORD,:QWORD
PROTO64 external,DeviceCreateHardwarePageEx, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file devmgr.inc
echo -----------------------------------------
ENDIF

