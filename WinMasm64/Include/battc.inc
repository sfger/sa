IFNDEF BATTC_INC
BATTC_INC equ <1>

PROTO64 external,BatteryClassInitializeDevice, :QWORD,:QWORD
PROTO64 external,BatteryClassIoctl, :QWORD,:QWORD
PROTO64 external,BatteryClassQueryWmiDataBlock, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BatteryClassStatusNotify, :QWORD
PROTO64 external,BatteryClassSystemControl, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BatteryClassUnload, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file battc.inc
echo -----------------------------------------
ENDIF

