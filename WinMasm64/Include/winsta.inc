IFNDEF WINSTA_INC
WINSTA_INC equ <1>

PROTO64 external,LogonIdFromWinStationNameA, :QWORD,:QWORD,:QWORD
PROTO64 external,LogonIdFromWinStationNameW, :QWORD,:QWORD,:QWORD
PROTO64 external,RemoteAssistancePrepareSystemRestore, :QWORD
PROTO64 external,ServerGetInternetConnectorStatus, :QWORD,:QWORD,:QWORD
PROTO64 external,ServerLicensingClose, :QWORD
PROTO64 external,ServerLicensingDeactivateCurrentPolicy, :QWORD
PROTO64 external,ServerLicensingFreePolicyInformation, :QWORD
PROTO64 external,ServerLicensingGetAvailablePolicyIds, :QWORD,:QWORD,:QWORD
PROTO64 external,ServerLicensingGetPolicy, :QWORD,:QWORD
PROTO64 external,ServerLicensingGetPolicyInformationA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ServerLicensingGetPolicyInformationW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ServerLicensingLoadPolicy, :QWORD,:QWORD
PROTO64 external,ServerLicensingOpenA, :QWORD
PROTO64 external,ServerLicensingOpenW, :QWORD
PROTO64 external,ServerLicensingSetPolicy, :QWORD,:QWORD,:QWORD
PROTO64 external,ServerLicensingUnloadPolicy, :QWORD,:QWORD
PROTO64 external,ServerQueryInetConnectorInformationA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ServerQueryInetConnectorInformationW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ServerSetInternetConnectorStatus, :QWORD,:QWORD,:QWORD
PROTO64 external,WinStationActivateLicense, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinStationAutoReconnect, :QWORD
PROTO64 external,WinStationBroadcastSystemMessage, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinStationCheckLoopBack, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinStationCloseServer, :QWORD
PROTO64 external,WinStationConnectA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinStationConnectCallback, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinStationConnectW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinStationDisconnect, :QWORD,:QWORD,:QWORD
PROTO64 external,WinStationEnumerateA, :QWORD,:QWORD,:QWORD
PROTO64 external,WinStationEnumerateLicenses, :QWORD,:QWORD,:QWORD
PROTO64 external,WinStationEnumerateProcesses, :QWORD,:QWORD
PROTO64 external,WinStationEnumerateW, :QWORD,:QWORD,:QWORD
PROTO64 external,WinStationEnumerate_IndexedA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinStationEnumerate_IndexedW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinStationFreeGAPMemory, :QWORD,:QWORD,:QWORD
PROTO64 external,WinStationFreeMemory, :QWORD
PROTO64 external,WinStationGenerateLicense, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinStationGetAllProcesses, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinStationGetLanAdapterNameA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinStationGetLanAdapterNameW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinStationGetMachinePolicy, :QWORD,:QWORD
PROTO64 external,WinStationGetProcessSid, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinStationGetTermSrvCountersValue, :QWORD,:QWORD,:QWORD
PROTO64 external,WinStationInstallLicense, :QWORD,:QWORD,:QWORD
PROTO64 external,WinStationIsHelpAssistantSession, :QWORD,:QWORD
PROTO64 external,WinStationNameFromLogonIdA, :QWORD,:QWORD,:QWORD
PROTO64 external,WinStationNameFromLogonIdW, :QWORD,:QWORD,:QWORD
PROTO64 external,WinStationNtsdDebug, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinStationOpenServerA, :QWORD
PROTO64 external,WinStationOpenServerW, :QWORD
PROTO64 external,WinStationQueryInformationA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinStationQueryInformationW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinStationQueryLicense, :QWORD,:QWORD,:QWORD
PROTO64 external,WinStationQueryLogonCredentialsW, :QWORD
PROTO64 external,WinStationQueryUpdateRequired, :QWORD,:QWORD
PROTO64 external,WinStationRegisterConsoleNotification, :QWORD,:QWORD,:QWORD
PROTO64 external,WinStationRemoveLicense, :QWORD,:QWORD,:QWORD
PROTO64 external,WinStationRenameA, :QWORD,:QWORD,:QWORD
PROTO64 external,WinStationRenameW, :QWORD,:QWORD,:QWORD
PROTO64 external,WinStationRequestSessionsList, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinStationReset, :QWORD,:QWORD,:QWORD
PROTO64 external,WinStationSendMessageA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinStationSendMessageW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinStationSendWindowMessage, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinStationServerPing, :QWORD
PROTO64 external,WinStationSetInformationA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinStationSetInformationW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinStationSetPoolCount, :QWORD,:QWORD,:QWORD
PROTO64 external,WinStationShadow, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinStationShadowStop, :QWORD,:QWORD,:QWORD
PROTO64 external,WinStationShutdownSystem, :QWORD,:QWORD
PROTO64 external,WinStationTerminateProcess, :QWORD,:QWORD,:QWORD
PROTO64 external,WinStationUnRegisterConsoleNotification, :QWORD,:QWORD
PROTO64 external,WinStationVirtualOpen, :QWORD,:QWORD,:QWORD
PROTO64 external,WinStationWaitSystemEvent, :QWORD,:QWORD,:QWORD
PROTO64 external,_NWLogonQueryAdmin, :QWORD,:QWORD,:QWORD
PROTO64 external,_NWLogonSetAdmin, :QWORD,:QWORD,:QWORD
PROTO64 external,_WinStationAnnoyancePopup, :QWORD,:QWORD
PROTO64 external,_WinStationBeepOpen, :QWORD
PROTO64 external,_WinStationBreakPoint, :QWORD,:QWORD,:QWORD
PROTO64 external,_WinStationCallback, :QWORD,:QWORD,:QWORD
PROTO64 external,_WinStationCheckForApplicationName, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,_WinStationFUSCanRemoteUserDisconnect, :QWORD,:QWORD,:QWORD
PROTO64 external,_WinStationGetApplicationInfo, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,_WinStationNotifyDisconnectPipe, 
PROTO64 external,_WinStationNotifyLogoff, 
PROTO64 external,_WinStationNotifyLogon, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,_WinStationNotifyNewSession, :QWORD,:QWORD
PROTO64 external,_WinStationReInitializeSecurity, :QWORD
PROTO64 external,_WinStationReadRegistry, :QWORD
PROTO64 external,_WinStationShadowTarget, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,_WinStationShadowTargetSetup, :QWORD,:QWORD
PROTO64 external,_WinStationUpdateClientCachedCredentials, :QWORD,:QWORD
PROTO64 external,_WinStationUpdateSettings, :QWORD,:QWORD,:QWORD
PROTO64 external,_WinStationUpdateUserConfig, :QWORD
PROTO64 external,_WinStationWaitForConnect, 

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file winsta.inc
echo -----------------------------------------
ENDIF

