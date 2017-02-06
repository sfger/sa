IFNDEF NEWDEV_INC
NEWDEV_INC equ <1>

PROTO64 external,ClientSideInstallW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DevInstallW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InstallDevInst, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InstallDevInstEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InstallNewDevice, :QWORD,:QWORD,:QWORD
PROTO64 external,InstallSelectedDevice, :QWORD,:QWORD,:QWORD
PROTO64 external,InstallSelectedDriver, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InstallWindowsUpdateDriver, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RollbackDriver, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UpdateDriverForPlugAndPlayDevicesA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UpdateDriverForPlugAndPlayDevicesW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WindowsUpdateDriverSearchingPolicyUi, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file newdev.inc
echo -----------------------------------------
ENDIF

