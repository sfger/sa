IFNDEF ADPTIF_INC
ADPTIF_INC equ <1>

PROTO64 external,CreateSocketPort, :QWORD
PROTO64 external,DeleteSocketPort, :QWORD
PROTO64 external,FwBindFwInterfaceToAdapter, :QWORD,:QWORD
PROTO64 external,FwConnectionRequestFailed, :QWORD
PROTO64 external,FwCreateInterface, :QWORD,:QWORD,:QWORD
PROTO64 external,FwDeleteInterface, :QWORD
PROTO64 external,FwDisableFwInterface, :QWORD
PROTO64 external,FwEnableFwInterface, :QWORD
PROTO64 external,FwGetInterface, :QWORD,:QWORD,:QWORD
PROTO64 external,FwGetNotificationResult, :QWORD,:QWORD
PROTO64 external,FwGetStaticNetbiosNames, :QWORD,:QWORD,:QWORD
PROTO64 external,FwIsStarted, :QWORD
PROTO64 external,FwNotifyConnectionRequest, :QWORD,:QWORD,:QWORD
PROTO64 external,FwSetInterface, :QWORD,:QWORD
PROTO64 external,FwSetStaticNetbiosNames, :QWORD,:QWORD,:QWORD
PROTO64 external,FwStart, :QWORD,:QWORD
PROTO64 external,FwStop, 
PROTO64 external,FwUnbindFwInterfaceFromAdapter, :QWORD
PROTO64 external,FwUpdateConfig, :QWORD
PROTO64 external,FwUpdateRouteTable, :QWORD,:QWORD,:QWORD
PROTO64 external,GetAdapterNameFromMacAddrW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetAdapterNameW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetFilters, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IpxAdjustIoCompletionParams, :QWORD,:QWORD,:QWORD
PROTO64 external,IpxCreateAdapterConfigurationPort, :QWORD,:QWORD
PROTO64 external,IpxDeleteAdapterConfigurationPort, :QWORD
PROTO64 external,IpxDoesRouteExist, :QWORD,:QWORD
PROTO64 external,IpxGetAdapterConfig, :QWORD,:QWORD
PROTO64 external,IpxGetAdapterList, :QWORD,:QWORD,:QWORD
PROTO64 external,IpxGetOverlappedResult, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IpxGetQueuedAdapterConfigurationStatus, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IpxGetQueuedCompletionStatus, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IpxPostQueuedCompletionStatus, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IpxRecvPacket, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IpxSendPacket, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IpxWanCreateAdapterConfigurationPort, :QWORD,:QWORD
PROTO64 external,IpxWanQueryInactivityTimer, :QWORD,:QWORD,:QWORD
PROTO64 external,IpxWanSetAdapterConfiguration, :QWORD,:QWORD
PROTO64 external,ServiceMain, :QWORD,:QWORD
PROTO64 external,SetFilters, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file adptif.inc
echo -----------------------------------------
ENDIF

