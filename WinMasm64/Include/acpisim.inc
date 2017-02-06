IFNDEF ACPISIM_INC
ACPISIM_INC equ <1>

PROTO64 external,AcpisimAddDevice, :QWORD,:QWORD
PROTO64 external,AcpisimClearDevExtFlags, :QWORD,:QWORD
PROTO64 external,AcpisimCompleteSIrp, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AcpisimCompletionRoutine, :QWORD,:QWORD,:QWORD
PROTO64 external,AcpisimCreateClose, :QWORD,:QWORD
PROTO64 external,AcpisimD0Completion, :QWORD,:QWORD,:QWORD
PROTO64 external,AcpisimDecrementIrpCount, :QWORD
PROTO64 external,AcpisimDispatchIoctl, :QWORD,:QWORD
PROTO64 external,AcpisimDispatchPnp, :QWORD,:QWORD
PROTO64 external,AcpisimDispatchPower, :QWORD,:QWORD
PROTO64 external,AcpisimDispatchSystemControl, :QWORD,:QWORD
PROTO64 external,AcpisimEnableDisableDeviceInterface, :QWORD,:QWORD
PROTO64 external,AcpisimForwardIrpAndWait, :QWORD,:QWORD
PROTO64 external,AcpisimGeneralDispatch, :QWORD,:QWORD
PROTO64 external,AcpisimGetDeviceExtension, :QWORD
PROTO64 external,AcpisimHandleIoctl, :QWORD,:QWORD
PROTO64 external,AcpisimInitDevPowerStateTable, :QWORD
PROTO64 external,AcpisimIssuePowerDIrp, :QWORD,:QWORD,:QWORD
PROTO64 external,AcpisimLibGetNextDevice, :QWORD
PROTO64 external,AcpisimPnpCancelRemoveDevice, :QWORD,:QWORD
PROTO64 external,AcpisimPnpCancelStopDevice, :QWORD,:QWORD
PROTO64 external,AcpisimPnpQueryCapabilities, :QWORD,:QWORD
PROTO64 external,AcpisimPnpQueryRemoveDevice, :QWORD,:QWORD
PROTO64 external,AcpisimPnpQueryStopDevice, :QWORD,:QWORD
PROTO64 external,AcpisimPnpRemoveDevice, :QWORD,:QWORD
PROTO64 external,AcpisimPnpStartDevice, :QWORD,:QWORD
PROTO64 external,AcpisimPnpStopDevice, :QWORD,:QWORD
PROTO64 external,AcpisimPnpSurpriseRemoval, :QWORD,:QWORD
PROTO64 external,AcpisimPowerQueryPower, :QWORD,:QWORD
PROTO64 external,AcpisimPowerSIrp, :QWORD,:QWORD
PROTO64 external,AcpisimPowerSetPower, :QWORD,:QWORD
PROTO64 external,AcpisimQueryPowerDIrp, :QWORD,:QWORD
PROTO64 external,AcpisimRegisterOpRegionHandler, :QWORD
PROTO64 external,AcpisimSetDevExtFlags, :QWORD,:QWORD
PROTO64 external,AcpisimSetPowerDIrp, :QWORD,:QWORD
PROTO64 external,AcpisimUnRegisterOpRegionHandler, :QWORD
PROTO64 external,AcpisimUnload, :QWORD
PROTO64 external,AcpisimUpdateDevicePowerState, :QWORD,:QWORD
PROTO64 external,AcpisimUpdatePnpState, :QWORD,:QWORD
PROTO64 external,AcpisimUpdatePowerState, :QWORD,:QWORD
PROTO64 external,DriverEntry, :QWORD,:QWORD
PROTO64 external,_AcpisimClearDevExtFlags, :QWORD,:QWORD
PROTO64 external,_security_check_cookie, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file acpisim.inc
echo -----------------------------------------
ENDIF

