IFNDEF TDI_INC
TDI_INC equ <1>

PROTO64 external,CTEAllocateString, :QWORD,:QWORD
PROTO64 external,CTEBlock, :QWORD
PROTO64 external,CTEBlockWithTracker, :QWORD,:QWORD,:QWORD
PROTO64 external,CTEInitEvent, :QWORD,:QWORD
PROTO64 external,CTEInitString, :QWORD,:QWORD
PROTO64 external,CTEInitTimer, :QWORD
PROTO64 external,CTEInitialize, 
PROTO64 external,CTEInsertBlockTracker, :QWORD,:QWORD
PROTO64 external,CTELogEvent, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CTERemoveBlockTracker, :QWORD
PROTO64 external,CTEScheduleCriticalEvent, :QWORD,:QWORD
PROTO64 external,CTEScheduleDelayedEvent, :QWORD,:QWORD
PROTO64 external,CTEScheduleEvent, :QWORD,:QWORD
PROTO64 external,CTESignal, :QWORD,:QWORD
PROTO64 external,CTEStartTimer, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CTESystemUpTime, 
PROTO64 external,TdiBuildNetbiosAddress, :QWORD,:QWORD,:QWORD
PROTO64 external,TdiBuildNetbiosAddressEa, :QWORD,:QWORD,:QWORD
PROTO64 external,TdiCopyBufferToMdl, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TdiCopyBufferToMdlWithReservedMappingAtDpcLevel, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TdiCopyMdlChainToMdlChain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TdiCopyMdlToBuffer, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TdiDefaultChainedRcvDatagramHandler, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TdiDefaultChainedRcvExpeditedHandler, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TdiDefaultChainedReceiveHandler, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TdiDefaultConnectHandler, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TdiDefaultDisconnectHandler, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TdiDefaultErrorHandler, :QWORD,:QWORD
PROTO64 external,TdiDefaultRcvDatagramHandler, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TdiDefaultRcvExpeditedHandler, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TdiDefaultReceiveHandler, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TdiDefaultSendPossibleHandler, :QWORD,:QWORD,:QWORD
PROTO64 external,TdiDeregisterAddressChangeHandler, :QWORD
PROTO64 external,TdiDeregisterDeviceObject, :QWORD
PROTO64 external,TdiDeregisterNetAddress, :QWORD
PROTO64 external,TdiDeregisterNotificationHandler, :QWORD
PROTO64 external,TdiDeregisterPnPHandlers, :QWORD
PROTO64 external,TdiDeregisterProvider, :QWORD
PROTO64 external,TdiEnumerateAddresses, :QWORD
PROTO64 external,TdiInitialize, 
PROTO64 external,TdiMapUserRequest, :QWORD,:QWORD,:QWORD
PROTO64 external,TdiMatchPdoWithChainedReceiveContext, :QWORD,:QWORD
PROTO64 external,TdiOpenNetbiosAddress, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TdiPnPPowerComplete, :QWORD,:QWORD,:QWORD
PROTO64 external,TdiPnPPowerRequest, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TdiProviderReady, :QWORD
PROTO64 external,TdiRegisterAddressChangeHandler, :QWORD,:QWORD,:QWORD
PROTO64 external,TdiRegisterDeviceObject, :QWORD,:QWORD
PROTO64 external,TdiRegisterNetAddress, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TdiRegisterNotificationHandler, :QWORD,:QWORD,:QWORD
PROTO64 external,TdiRegisterPnPHandlers, :QWORD,:QWORD,:QWORD
PROTO64 external,TdiRegisterProvider, :QWORD,:QWORD
PROTO64 external,TdiReturnChainedReceives, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file tdi.inc
echo -----------------------------------------
ENDIF

