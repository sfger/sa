IFNDEF NTDSA_INC
NTDSA_INC equ <1>

PROTO64 external,AppendRDN, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AttrTypeToKey, :QWORD,:QWORD
PROTO64 external,CountNameParts, :QWORD,:QWORD
PROTO64 external,CrackSingleName, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DSNAMEToHashKeyExternal, :QWORD
PROTO64 external,DSNAMEToMappedStrExternal, :QWORD
PROTO64 external,DSStrToHashKeyExternal, :QWORD,:QWORD
PROTO64 external,DSStrToMappedStrExternal, :QWORD,:QWORD
PROTO64 external,DbgPrintErrorInfo, 
PROTO64 external,DirAddEntry, :QWORD,:QWORD
PROTO64 external,DirBind, :QWORD,:QWORD
PROTO64 external,DirCompare, :QWORD,:QWORD
PROTO64 external,DirErrorToNtStatus, :QWORD,:QWORD
PROTO64 external,DirErrorToWinError, :QWORD,:QWORD
PROTO64 external,DirFindEntry, :QWORD,:QWORD
PROTO64 external,DirGetDomainHandle, :QWORD
PROTO64 external,DirList, :QWORD,:QWORD
PROTO64 external,DirModifyDN, :QWORD,:QWORD
PROTO64 external,DirModifyEntry, :QWORD,:QWORD
PROTO64 external,DirNotifyRegister, :QWORD,:QWORD,:QWORD
PROTO64 external,DirNotifyUnRegister, :QWORD,:QWORD
PROTO64 external,DirOperationControl, :QWORD,:QWORD
PROTO64 external,DirPrepareForImpersonate, :QWORD,:QWORD,:QWORD
PROTO64 external,DirProtectEntry, :QWORD
PROTO64 external,DirRead, :QWORD,:QWORD
PROTO64 external,DirRemoveEntry, :QWORD,:QWORD
PROTO64 external,DirReplicaAdd, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DirReplicaDelete, :QWORD,:QWORD,:QWORD
PROTO64 external,DirReplicaDemote, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DirReplicaGetDemoteTarget, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DirReplicaModify, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DirReplicaReferenceUpdate, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DirReplicaSetCredentials, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DirReplicaSynchronize, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DirSearch, :QWORD,:QWORD
PROTO64 external,DirStopImpersonating, :QWORD,:QWORD,:QWORD
PROTO64 external,DirTransactControl, :QWORD
PROTO64 external,DirUnBind, 
PROTO64 external,DoLogEvent, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DoLogEventAndTrace, :QWORD
PROTO64 external,DoLogOverride, :QWORD,:QWORD
PROTO64 external,DsChangeBootOptions, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DsCheckConstraint, :QWORD,:QWORD,:QWORD
PROTO64 external,DsFreeServersAndSitesForNetLogon, :QWORD
PROTO64 external,DsGetBootOptions, 
PROTO64 external,DsGetDefaultObjCategory, :QWORD
PROTO64 external,DsGetEventConfig, 
PROTO64 external,DsGetServersAndSitesForNetLogon, :QWORD,:QWORD
PROTO64 external,DsInitialize, :QWORD,:QWORD,:QWORD
PROTO64 external,DsInitializeCritSecs, 
PROTO64 external,DsIsBeingBackSynced, 
PROTO64 external,DsTraceEvent, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DsUninitialize, :QWORD
PROTO64 external,DsWaitUntilDelayedStartupIsDone, 
PROTO64 external,DsaDisableUpdates, 
PROTO64 external,DsaEnableUpdates, 
PROTO64 external,DsaSetInstallCallback, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DsaWaitUntilServiceIsRunning, :QWORD
PROTO64 external,FindNetbiosDomainName, :QWORD,:QWORD,:QWORD
PROTO64 external,GCVerifyCacheLookup, :QWORD
PROTO64 external,GetConfigDsName, :QWORD
PROTO64 external,GetConfigParam, :QWORD,:QWORD,:QWORD
PROTO64 external,GetConfigParamAllocW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetConfigParamW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetConfigurationName, :QWORD,:QWORD,:QWORD
PROTO64 external,GetConfigurationNamesList, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetDnsRootAlias, :QWORD,:QWORD
PROTO64 external,GetRDNInfoExternal, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GuidBasedDNSNameFromDSName, :QWORD
PROTO64 external,ImpersonateAnyClient, 
PROTO64 external,InitCommarg, :QWORD
PROTO64 external,IsMangledRDNExternal, :QWORD,:QWORD,:QWORD
PROTO64 external,IsStringGuid, :QWORD,:QWORD
PROTO64 external,MapSpnServiceClass, :QWORD
PROTO64 external,MatchCrossRefByNetbiosName, :QWORD,:QWORD,:QWORD
PROTO64 external,MatchCrossRefBySid, :QWORD,:QWORD,:QWORD
PROTO64 external,MatchDomainDnByDnsName, :QWORD,:QWORD,:QWORD
PROTO64 external,MatchDomainDnByNetbiosName, :QWORD,:QWORD,:QWORD
PROTO64 external,MtxAddrFromTransportAddr, :QWORD
PROTO64 external,MtxSame, :QWORD,:QWORD
PROTO64 external,NameMatched, :QWORD,:QWORD
PROTO64 external,NameMatchedStringNameOnly, :QWORD,:QWORD
PROTO64 external,NamePrefix, :QWORD,:QWORD
PROTO64 external,QuoteRDNValue, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampAddLoopbackTask, :QWORD
PROTO64 external,SampAmIGC, 
PROTO64 external,SampComputeGroupType, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampDeriveMostBasicDsClass, :QWORD
PROTO64 external,SampDoesDomainExist, :QWORD
PROTO64 external,SampDsAttrFromSamAttr, :QWORD,:QWORD
PROTO64 external,SampDsClassFromSamObjectType, :QWORD
PROTO64 external,SampExistsDsLoopback, :QWORD
PROTO64 external,SampExistsDsTransaction, 
PROTO64 external,SampGCLookupNames, :QWORD,:QWORD,:QWORD
PROTO64 external,SampGCLookupSids, :QWORD,:QWORD,:QWORD
PROTO64 external,SampGetAccountCounts, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampGetClassAttribute, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampGetDisplayEnumerationIndex, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampGetDsAttrIdByName, :QWORD,:QWORD
PROTO64 external,SampGetEnterpriseSidList, :QWORD,:QWORD
PROTO64 external,SampGetGroupsForToken, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampGetLoopbackObjectClassId, :QWORD
PROTO64 external,SampGetMemberships, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampGetQDIRestart, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampGetSamAttrIdByName, :QWORD,:QWORD,:QWORD
PROTO64 external,SampGetServerRoleFromFSMO, :QWORD
PROTO64 external,SampIsSecureLdapConnection, 
PROTO64 external,SampIsWriteLockHeldByDs, 
PROTO64 external,SampMaybeBeginDsTransaction, :QWORD
PROTO64 external,SampMaybeEndDsTransaction, :QWORD
PROTO64 external,SampNetlogonPing, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampSamAttrFromDsAttr, :QWORD,:QWORD
PROTO64 external,SampSamObjectTypeFromDsClass, :QWORD
PROTO64 external,SampSetDsa, :QWORD
PROTO64 external,SampSetIndexRanges, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampSetLsa, :QWORD
PROTO64 external,SampSetSam, :QWORD
PROTO64 external,SampSignalStart, 
PROTO64 external,SampVerifySids, :QWORD,:QWORD,:QWORD
PROTO64 external,THAlloc, :QWORD
PROTO64 external,THClearErrors, 
PROTO64 external,THCreate, :QWORD
PROTO64 external,THDestroy, 
PROTO64 external,THFree, :QWORD
PROTO64 external,THGetErrorString, 
PROTO64 external,THQuery, 
PROTO64 external,THReAlloc, :QWORD,:QWORD
PROTO64 external,THRestore, :QWORD
PROTO64 external,THSave, 
PROTO64 external,THVerifyCount, :QWORD
PROTO64 external,TransportAddrFromMtxAddr, :QWORD
PROTO64 external,TrimDSNameBy, :QWORD,:QWORD,:QWORD
PROTO64 external,UnImpersonateAnyClient, 
PROTO64 external,UpdateDSPerfStats, :QWORD,:QWORD,:QWORD
PROTO64 external,fNullUuid, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file ntdsa.inc
echo -----------------------------------------
ENDIF

