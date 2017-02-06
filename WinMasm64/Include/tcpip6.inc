IFNDEF TCPIP6_INC
TCPIP6_INC equ <1>

PROTO64 external,AdjustPacketBuffer, :QWORD,:QWORD,:QWORD
PROTO64 external,CreateInterface, :QWORD,:QWORD,:QWORD
PROTO64 external,DestroyInterface, :QWORD
PROTO64 external,IPv6DisableFirewallHook, :QWORD
PROTO64 external,IPv6EnableFirewallHook, :QWORD
PROTO64 external,IPv6GetBestRouteInfo, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IPv6ObtainPacketData, :QWORD,:QWORD,:QWORD
PROTO64 external,IPv6Receive, :QWORD
PROTO64 external,IPv6ReceiveComplete, 
PROTO64 external,IPv6SendComplete, :QWORD,:QWORD,:QWORD
PROTO64 external,ReleaseInterface, :QWORD
PROTO64 external,RestartLinkLayerMulticast, :QWORD,:QWORD
PROTO64 external,SetInterfaceLinkStatus, :QWORD,:QWORD
PROTO64 external,UndoAdjustPacketBuffer, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file tcpip6.inc
echo -----------------------------------------
ENDIF

