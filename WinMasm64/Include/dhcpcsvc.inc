IFNDEF DHCPCSVC_INC
DHCPCSVC_INC equ <1>

PROTO64 external,DhcpAcquireParameters, :QWORD
PROTO64 external,DhcpAcquireParametersByBroadcast, :QWORD
PROTO64 external,DhcpCApiCleanup, 
PROTO64 external,DhcpCApiInitialize, :QWORD
PROTO64 external,DhcpDeRegisterOptions, :QWORD
PROTO64 external,DhcpDeRegisterParamChange, :QWORD,:QWORD,:QWORD
PROTO64 external,DhcpDelPersistentRequestParams, :QWORD,:QWORD
PROTO64 external,DhcpEnumClasses, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DhcpFallbackRefreshParams, :QWORD
PROTO64 external,DhcpHandlePnPEvent, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DhcpLeaseIpAddress, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DhcpLeaseIpAddressEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DhcpNotifyConfigChange, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DhcpNotifyConfigChangeEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DhcpNotifyMediaReconnected, :QWORD
PROTO64 external,DhcpOpenGlobalEvent, 
PROTO64 external,DhcpPersistentRequestParams, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DhcpQueryHWInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DhcpRegisterOptions, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DhcpRegisterParamChange, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DhcpReleaseIpAddressLease, :QWORD,:QWORD
PROTO64 external,DhcpReleaseIpAddressLeaseEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DhcpReleaseParameters, :QWORD
PROTO64 external,DhcpRemoveDNSRegistrations, 
PROTO64 external,DhcpRenewIpAddressLease, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DhcpRenewIpAddressLeaseEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DhcpRequestOptions, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DhcpRequestParams, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DhcpStaticRefreshParams, :QWORD
PROTO64 external,DhcpUndoRequestParams, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,McastApiCleanup, 
PROTO64 external,McastApiStartup, :QWORD
PROTO64 external,McastEnumerateScopes, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,McastGenUID, :QWORD
PROTO64 external,McastReleaseAddress, :QWORD,:QWORD,:QWORD
PROTO64 external,McastRenewAddress, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,McastRequestAddress, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ServiceMain, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file dhcpcsvc.inc
echo -----------------------------------------
ENDIF

