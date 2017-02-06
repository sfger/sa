IFNDEF WTSAPI32_INC
WTSAPI32_INC equ <1>

PROTO64 external,WTSCloseServer, :QWORD
PROTO64 external,WTSDisconnectSession, :QWORD,:QWORD,:QWORD
PROTO64 external,WTSEnumerateProcessesA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WTSEnumerateProcessesW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WTSEnumerateServersA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WTSEnumerateServersW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WTSEnumerateSessionsA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WTSEnumerateSessionsW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WTSFreeMemory, :QWORD
PROTO64 external,WTSLogoffSession, :QWORD,:QWORD,:QWORD
PROTO64 external,WTSOpenServerA, :QWORD
PROTO64 external,WTSOpenServerW, :QWORD
PROTO64 external,WTSQuerySessionInformationA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WTSQuerySessionInformationW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WTSQueryUserConfigA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WTSQueryUserConfigW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WTSQueryUserToken, :QWORD,:QWORD
PROTO64 external,WTSRegisterSessionNotification, :QWORD,:QWORD
PROTO64 external,WTSSendMessageA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WTSSendMessageW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WTSSetSessionInformationA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WTSSetSessionInformationW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WTSSetUserConfigA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WTSSetUserConfigW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WTSShutdownSystem, :QWORD,:QWORD
PROTO64 external,WTSTerminateProcess, :QWORD,:QWORD,:QWORD
PROTO64 external,WTSUnRegisterSessionNotification, :QWORD
PROTO64 external,WTSVirtualChannelClose, :QWORD
PROTO64 external,WTSVirtualChannelOpen, :QWORD,:QWORD,:QWORD
PROTO64 external,WTSVirtualChannelPurgeInput, :QWORD
PROTO64 external,WTSVirtualChannelPurgeOutput, :QWORD
PROTO64 external,WTSVirtualChannelQuery, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WTSVirtualChannelRead, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WTSVirtualChannelWrite, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WTSWaitSystemEvent, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file wtsapi32.inc
echo -----------------------------------------
ENDIF

