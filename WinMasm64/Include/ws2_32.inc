IFNDEF WS2_32_INC
WS2_32_INC equ <1>

PROTO64 external,FreeAddrInfoW, :QWORD
PROTO64 external,GetAddrInfoW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetNameInfoW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WEP, 
PROTO64 external,WPUCompleteOverlappedRequest, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSAAccept, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSAAddressToStringA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSAAddressToStringW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSAAsyncGetHostByAddr, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSAAsyncGetHostByName, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSAAsyncGetProtoByName, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSAAsyncGetProtoByNumber, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSAAsyncGetServByName, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSAAsyncGetServByPort, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSAAsyncSelect, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSACancelAsyncRequest, :QWORD
PROTO64 external,WSACancelBlockingCall, 
PROTO64 external,WSACleanup, 
PROTO64 external,WSACloseEvent, :QWORD
PROTO64 external,WSAConnect, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSACreateEvent, 
PROTO64 external,WSADuplicateSocketA, :QWORD,:QWORD,:QWORD
PROTO64 external,WSADuplicateSocketW, :QWORD,:QWORD,:QWORD
PROTO64 external,WSAEnumNameSpaceProvidersA, :QWORD,:QWORD
PROTO64 external,WSAEnumNameSpaceProvidersW, :QWORD,:QWORD
PROTO64 external,WSAEnumNetworkEvents, :QWORD,:QWORD,:QWORD
PROTO64 external,WSAEnumProtocolsA, :QWORD,:QWORD,:QWORD
PROTO64 external,WSAEnumProtocolsW, :QWORD,:QWORD,:QWORD
PROTO64 external,WSAEventSelect, :QWORD,:QWORD,:QWORD
PROTO64 external,WSAGetLastError, 
PROTO64 external,WSAGetOverlappedResult, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSAGetQOSByName, :QWORD,:QWORD,:QWORD
PROTO64 external,WSAGetServiceClassInfoA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSAGetServiceClassInfoW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSAGetServiceClassNameByClassIdA, :QWORD,:QWORD,:QWORD
PROTO64 external,WSAGetServiceClassNameByClassIdW, :QWORD,:QWORD,:QWORD
PROTO64 external,WSAHtonl, :QWORD,:QWORD,:QWORD
PROTO64 external,WSAHtons, :QWORD,:QWORD,:QWORD
PROTO64 external,WSAInstallServiceClassA, :QWORD
PROTO64 external,WSAInstallServiceClassW, :QWORD
PROTO64 external,WSAIoctl, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSAIsBlocking, 
PROTO64 external,WSAJoinLeaf, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSALookupServiceBeginA, :QWORD,:QWORD,:QWORD
PROTO64 external,WSALookupServiceBeginW, :QWORD,:QWORD,:QWORD
PROTO64 external,WSALookupServiceEnd, :QWORD
PROTO64 external,WSALookupServiceNextA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSALookupServiceNextW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSANSPIoctl, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSANtohl, :QWORD,:QWORD,:QWORD
PROTO64 external,WSANtohs, :QWORD,:QWORD,:QWORD
PROTO64 external,WSAProviderConfigChange, :QWORD,:QWORD,:QWORD
PROTO64 external,WSARecv, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSARecvDisconnect, :QWORD,:QWORD
PROTO64 external,WSARecvFrom, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSARemoveServiceClass, :QWORD
PROTO64 external,WSAResetEvent, :QWORD
PROTO64 external,WSASend, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSASendDisconnect, :QWORD,:QWORD
PROTO64 external,WSASendTo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSASetBlockingHook, :QWORD
PROTO64 external,WSASetEvent, :QWORD
PROTO64 external,WSASetLastError, :QWORD
PROTO64 external,WSASetServiceA, :QWORD,:QWORD,:QWORD
PROTO64 external,WSASetServiceW, :QWORD,:QWORD,:QWORD
PROTO64 external,WSASocketA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSASocketW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSAStartup, :QWORD,:QWORD
PROTO64 external,WSAStringToAddressA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSAStringToAddressW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSAUnhookBlockingHook, 
PROTO64 external,WSAWaitForMultipleEvents, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSCDeinstallProvider, :QWORD,:QWORD
PROTO64 external,WSCEnableNSProvider, :QWORD,:QWORD
PROTO64 external,WSCEnumProtocols, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSCGetProviderPath, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSCInstallNameSpace, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSCInstallProvider, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSCUnInstallNameSpace, :QWORD
PROTO64 external,WSCUpdateProvider, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSCWriteNameSpaceOrder, :QWORD,:QWORD
PROTO64 external,WSCWriteProviderOrder, :QWORD,:QWORD
PROTO64 external,__WSAFDIsSet, :QWORD,:QWORD
PROTO64 external,accept, :QWORD,:QWORD,:QWORD
PROTO64 external,bind, :QWORD,:QWORD,:QWORD
PROTO64 external,closesocket, :QWORD
PROTO64 external,connect, :QWORD,:QWORD,:QWORD
PROTO64 external,freeaddrinfo, :QWORD
PROTO64 external,getaddrinfo, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,gethostbyaddr, :QWORD,:QWORD,:QWORD
PROTO64 external,gethostbyname, :QWORD
PROTO64 external,gethostname, :QWORD,:QWORD
PROTO64 external,getnameinfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,getpeername, :QWORD,:QWORD,:QWORD
PROTO64 external,getprotobyname, :QWORD
PROTO64 external,getprotobynumber, :QWORD
PROTO64 external,getservbyname, :QWORD,:QWORD
PROTO64 external,getservbyport, :QWORD,:QWORD
PROTO64 external,getsockname, :QWORD,:QWORD,:QWORD
PROTO64 external,getsockopt, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,htonl, :QWORD
PROTO64 external,htons, :QWORD
PROTO64 external,inet_addr, :QWORD
PROTO64 external,inet_ntoa, :QWORD
PROTO64 external,ioctlsocket, :QWORD,:QWORD,:QWORD
PROTO64 external,listen, :QWORD,:QWORD
PROTO64 external,ntohl, :QWORD
PROTO64 external,ntohs, :QWORD
PROTO64 external,recv, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,recvfrom, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,select, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,send, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,sendto, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,setsockopt, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,shutdown, :QWORD,:QWORD
PROTO64 external,socket, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file ws2_32.inc
echo -----------------------------------------
ENDIF

