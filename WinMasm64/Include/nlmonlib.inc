IFNDEF NLMONLIB_INC
NLMONLIB_INC equ <1>

PROTO64 external,AddDomainToList, :QWORD
PROTO64 external,AddToDomainList, :QWORD
PROTO64 external,AddToMonitoredDomainList, :QWORD
PROTO64 external,AddToTrustedDomainList, :QWORD,:QWORD
PROTO64 external,CleanupDomainEntry, :QWORD
PROTO64 external,CleanupLists, 
PROTO64 external,CleanupWin, 
PROTO64 external,ConvertServerAcctNameToServerName, :QWORD
PROTO64 external,CreateDCEntry, :QWORD,:QWORD
PROTO64 external,DisConnect, :QWORD,:QWORD,:QWORD
PROTO64 external,DomainUpdateThread, :QWORD
PROTO64 external,FindNamedEntry, :QWORD,:QWORD
PROTO64 external,FreeList, :QWORD
PROTO64 external,I_NetLogonControl2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,I_NetNameCompare, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InitDomainListW, :QWORD
PROTO64 external,InitGlobals, 
PROTO64 external,InitializeListHead, :QWORD
PROTO64 external,InsertTailList, :QWORD,:QWORD
PROTO64 external,IsDomainUpdateThreadRunning, :QWORD
PROTO64 external,IsValidNTDC, :QWORD,:QWORD
PROTO64 external,LsaClose, :QWORD
PROTO64 external,LsaEnumerateTrustedDomains, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsaFreeMemory, :QWORD
PROTO64 external,LsaOpenPolicy, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsaQueryInformationPolicy, :QWORD,:QWORD,:QWORD
PROTO64 external,NetApiBufferFree, :QWORD
PROTO64 external,NetServerEnum, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetServerGetInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,NetWkstaGetInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,NetpAssertFailed, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpMemoryAllocate, :QWORD
PROTO64 external,NetpMemoryFree, :QWORD
PROTO64 external,QueryDCList, :QWORD
PROTO64 external,QueryHealth, :QWORD
PROTO64 external,QueryLsaInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,QueryPDC, :QWORD
PROTO64 external,QueryTDCList, :QWORD,:QWORD
PROTO64 external,QueryTDLink, :QWORD,:QWORD
PROTO64 external,QueryTrustedDomain, :QWORD
PROTO64 external,RemoveDomainFromList, :QWORD
PROTO64 external,RemoveEntryList, :QWORD
PROTO64 external,RemoveHeadList, :QWORD
PROTO64 external,SamCloseHandle, :QWORD
PROTO64 external,SamConnect, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamFreeMemory, :QWORD
PROTO64 external,SamGetMembersInGroup, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamLookupIdsInDomain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamLookupNamesInDomain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamOpenDomain, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamOpenGroup, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamQueryDisplayInformation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StartDomainUpdateThread, :QWORD,:QWORD
PROTO64 external,StartMonitor, :QWORD,:QWORD,:QWORD
PROTO64 external,StopDomainUpdateThread, :QWORD,:QWORD
PROTO64 external,StopMonitor, 
PROTO64 external,UpdateAndValidateLists, :QWORD,:QWORD
PROTO64 external,UpdateDCListByServerEnum, :QWORD,:QWORD
PROTO64 external,UpdateDCListFromDatabase, :QWORD,:QWORD
PROTO64 external,UpdateDCListFromLMServerAccounts, :QWORD,:QWORD
PROTO64 external,UpdateDCListFromNTServerAccounts, :QWORD,:QWORD
PROTO64 external,UpdateDomainState, :QWORD
PROTO64 external,UpdateTrustConnectionList, :QWORD
PROTO64 external,UpdateTrustList, :QWORD
PROTO64 external,ValidateDC, :QWORD,:QWORD
PROTO64 external,ValidateTrustConnectionList, :QWORD,:QWORD
PROTO64 external,WorkerThread, 
PROTO64 external,_security_check_cookie, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file nlmonlib.inc
echo -----------------------------------------
ENDIF

