IFNDEF PORTCLS_INC
PORTCLS_INC equ <1>

PROTO64 external,PcAcquireFormatResources, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PcAddAdapterDevice, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PcAddContentHandlers, :QWORD,:QWORD,:QWORD
PROTO64 external,PcAddToEventTable, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PcAddToPropertyTable, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PcCaptureFormat, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PcCompleteIrp, :QWORD,:QWORD,:QWORD
PROTO64 external,PcCompletePendingEventRequest, :QWORD,:QWORD
PROTO64 external,PcCompletePendingPropertyRequest, :QWORD,:QWORD
PROTO64 external,PcCreateContentMixed, :QWORD,:QWORD,:QWORD
PROTO64 external,PcCreateSubdeviceDescriptor, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PcDeleteSubdeviceDescriptor, :QWORD
PROTO64 external,PcDestroyContent, :QWORD
PROTO64 external,PcDispatchIrp, :QWORD,:QWORD
PROTO64 external,PcDmaMasterDescription, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PcDmaSlaveDescription, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PcForwardContentToDeviceObject, :QWORD,:QWORD,:QWORD
PROTO64 external,PcForwardContentToFileObject, :QWORD,:QWORD
PROTO64 external,PcForwardContentToInterface, :QWORD,:QWORD,:QWORD
PROTO64 external,PcForwardIrpSynchronous, :QWORD,:QWORD
PROTO64 external,PcFreeEventTable, :QWORD
PROTO64 external,PcFreePropertyTable, :QWORD
PROTO64 external,PcGenerateEventDeferredRoutine, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PcGenerateEventList, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PcGetContentRights, :QWORD,:QWORD
PROTO64 external,PcGetDeviceProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PcGetTimeInterval, :QWORD,:QWORD
PROTO64 external,PcHandleDisableEventWithTable, :QWORD,:QWORD
PROTO64 external,PcHandleEnableEventWithTable, :QWORD,:QWORD
PROTO64 external,PcHandlePropertyWithTable, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PcInitializeAdapterDriver, :QWORD,:QWORD,:QWORD
PROTO64 external,PcNewDmaChannel, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PcNewInterruptSync, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PcNewMiniport, :QWORD,:QWORD
PROTO64 external,PcNewPort, :QWORD,:QWORD
PROTO64 external,PcNewRegistryKey, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PcNewResourceList, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PcNewResourceSublist, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PcNewServiceGroup, :QWORD,:QWORD
PROTO64 external,PcPinPropertyHandler, :QWORD,:QWORD,:QWORD
PROTO64 external,PcRegisterAdapterPowerManagement, :QWORD,:QWORD
PROTO64 external,PcRegisterIoTimeout, :QWORD,:QWORD,:QWORD
PROTO64 external,PcRegisterPhysicalConnection, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PcRegisterPhysicalConnectionFromExternal, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PcRegisterPhysicalConnectionToExternal, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PcRegisterSubdevice, :QWORD,:QWORD,:QWORD
PROTO64 external,PcRequestNewPowerState, :QWORD,:QWORD
PROTO64 external,PcTerminateConnection, :QWORD,:QWORD,:QWORD
PROTO64 external,PcUnregisterIoTimeout, :QWORD,:QWORD,:QWORD
PROTO64 external,PcValidateConnectRequest, :QWORD,:QWORD,:QWORD
PROTO64 external,PcVerifyFilterIsReady, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file portcls.inc
echo -----------------------------------------
ENDIF

