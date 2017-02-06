IFNDEF TCPIP_INC
TCPIP_INC equ <1>

PROTO64 external,FreeIprBuff, :QWORD
PROTO64 external,GetIFAndLink, :QWORD,:QWORD,:QWORD
PROTO64 external,IPAddInterface, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IPAllocBuff, :QWORD,:QWORD
PROTO64 external,IPDelInterface, :QWORD,:QWORD
PROTO64 external,IPDelayedNdisReEnumerateBindings, :QWORD,:QWORD
PROTO64 external,IPDeregisterARP, :QWORD
PROTO64 external,IPDisableSniffer, :QWORD
PROTO64 external,IPEnableSniffer, :QWORD,:QWORD
PROTO64 external,IPFreeBuff, :QWORD
PROTO64 external,IPGetAddrType, :QWORD
PROTO64 external,IPGetBestInterface, :QWORD,:QWORD
PROTO64 external,IPGetInfo, :QWORD,:QWORD
PROTO64 external,IPInjectPkt, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IPProxyNdisRequest, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IPRegisterARP, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IPRegisterProtocol, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IPSetIPSecStatus, :QWORD
PROTO64 external,IPTransmit, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LookupRoute, :QWORD,:QWORD
PROTO64 external,LookupRouteInformation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LookupRouteInformationWithBuffer, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SendICMPErr, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetIPSecPtr, :QWORD
PROTO64 external,UnSetIPSecPtr, :QWORD
PROTO64 external,UnSetIPSecSendPtr, :QWORD
PROTO64 external,tcpxsum, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file tcpip.inc
echo -----------------------------------------
ENDIF

