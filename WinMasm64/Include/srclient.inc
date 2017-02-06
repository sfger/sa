IFNDEF SRCLIENT_INC
SRCLIENT_INC equ <1>

PROTO64 external,CreateSnapshot, :QWORD
PROTO64 external,DisableFIFO, :QWORD
PROTO64 external,DisableSR, :QWORD
PROTO64 external,EnableFIFO, 
PROTO64 external,EnableSR, :QWORD
PROTO64 external,EnableSREx, :QWORD,:QWORD
PROTO64 external,ResetSR, :QWORD
PROTO64 external,RestoreSnapshot, :QWORD
PROTO64 external,SRCompress, :QWORD
PROTO64 external,SRFifo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SRFreeze, :QWORD
PROTO64 external,SRNotify, :QWORD,:QWORD,:QWORD
PROTO64 external,SRPrintState, 
PROTO64 external,SRRegisterSnapshotCallback, :QWORD
PROTO64 external,SRRemoveRestorePoint, :QWORD
PROTO64 external,SRSetRestorePointA, :QWORD,:QWORD
PROTO64 external,SRSetRestorePointW, :QWORD,:QWORD
PROTO64 external,SRSwitchLog, 
PROTO64 external,SRUnregisterSnapshotCallback, :QWORD
PROTO64 external,SRUpdateDSSize, :QWORD,:QWORD,:QWORD
PROTO64 external,SRUpdateMonitoredListA, :QWORD
PROTO64 external,SRUpdateMonitoredListW, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file srclient.inc
echo -----------------------------------------
ENDIF

