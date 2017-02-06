IFNDEF SAMSRV_INC
SAMSRV_INC equ <1>

PROTO64 external,SamIAccountRestrictions, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIAddDSNameToAlias, :QWORD,:QWORD
PROTO64 external,SamIAddDSNameToGroup, :QWORD,:QWORD
PROTO64 external,SamIAmIGC, 
PROTO64 external,SamIChangePasswordForeignUser2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIChangePasswordForeignUser, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIConnect, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamICreateAccountByRid, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIDemote, :QWORD,:QWORD,:QWORD
PROTO64 external,SamIDemoteUndo, 
PROTO64 external,SamIDoFSMORoleChange, :QWORD
PROTO64 external,SamIDsCreateObjectInDomain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIDsSetObjectInformation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIEnumerateAccountRids, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIEnumerateInterdomainTrustAccountsForUpgrade, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIFloatingSingleMasterOpEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIFreeSidAndAttributesList, :QWORD
PROTO64 external,SamIFreeSidArray, :QWORD
PROTO64 external,SamIFreeVoid, :QWORD
PROTO64 external,SamIFree_SAMPR_ALIAS_INFO_BUFFER, :QWORD,:QWORD
PROTO64 external,SamIFree_SAMPR_DISPLAY_INFO_BUFFER, :QWORD,:QWORD
PROTO64 external,SamIFree_SAMPR_DOMAIN_INFO_BUFFER, :QWORD,:QWORD
PROTO64 external,SamIFree_SAMPR_ENUMERATION_BUFFER, :QWORD
PROTO64 external,SamIFree_SAMPR_GET_GROUPS_BUFFER, :QWORD
PROTO64 external,SamIFree_SAMPR_GET_MEMBERS_BUFFER, :QWORD
PROTO64 external,SamIFree_SAMPR_GROUP_INFO_BUFFER, :QWORD,:QWORD
PROTO64 external,SamIFree_SAMPR_PSID_ARRAY, :QWORD
PROTO64 external,SamIFree_SAMPR_RETURNED_USTRING_ARRAY, :QWORD
PROTO64 external,SamIFree_SAMPR_SR_SECURITY_DESCRIPTOR, :QWORD
PROTO64 external,SamIFree_SAMPR_ULONG_ARRAY, :QWORD
PROTO64 external,SamIFree_SAMPR_USER_INFO_BUFFER, :QWORD,:QWORD
PROTO64 external,SamIFree_UserInternal6Information, :QWORD
PROTO64 external,SamIGCLookupNames, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIGCLookupSids, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIGetAliasMembership, :QWORD,:QWORD,:QWORD
PROTO64 external,SamIGetBootKeyInformation, :QWORD,:QWORD
PROTO64 external,SamIGetDefaultAdministratorName, :QWORD,:QWORD
PROTO64 external,SamIGetFixedAttributes, :QWORD,:QWORD,:QWORD
PROTO64 external,SamIGetInterdomainTrustAccountPasswordsForUpgrade, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIGetPrivateData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIGetResourceGroupMembershipsTransitive, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIGetSerialNumberDomain, :QWORD,:QWORD,:QWORD
PROTO64 external,SamIGetUserLogonInformation2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIGetUserLogonInformation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIGetUserLogonInformationEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIImpersonateNullSession, 
PROTO64 external,SamIIncrementPerformanceCounter, :QWORD
PROTO64 external,SamIInitialize, 
PROTO64 external,SamIIsDownlevelDcUpgrade, 
PROTO64 external,SamIIsExtendedSidMode, :QWORD
PROTO64 external,SamIIsRebootAfterPromotion, 
PROTO64 external,SamIIsSetupInProgress, :QWORD
PROTO64 external,SamILoadDownlevelDatabase, :QWORD
PROTO64 external,SamILoopbackConnect, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIMixedDomain2, :QWORD,:QWORD
PROTO64 external,SamIMixedDomain, :QWORD
PROTO64 external,SamINT4UpgradeInProgress, 
PROTO64 external,SamINetLogonPing, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamINotifyDelta, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamINotifyRoleChange, :QWORD,:QWORD
PROTO64 external,SamINotifyServerDelta, :QWORD
PROTO64 external,SamIOpenAccount, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIOpenUserByAlternateId, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIPromote, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIPromoteUndo, 
PROTO64 external,SamIQueryServerRole2, :QWORD,:QWORD
PROTO64 external,SamIQueryServerRole, :QWORD,:QWORD
PROTO64 external,SamIRemoveDSNameFromAlias, :QWORD,:QWORD
PROTO64 external,SamIRemoveDSNameFromGroup, :QWORD,:QWORD
PROTO64 external,SamIReplaceDownlevelDatabase, :QWORD,:QWORD,:QWORD
PROTO64 external,SamIResetBadPwdCountOnPdc, :QWORD
PROTO64 external,SamIRetrievePrimaryCredentials, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIRevertNullSession, 
PROTO64 external,SamISameSite, :QWORD
PROTO64 external,SamISetAuditingInformation, :QWORD
PROTO64 external,SamISetMixedDomainFlag, :QWORD
PROTO64 external,SamISetPasswordForeignUser2, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamISetPasswordForeignUser, :QWORD,:QWORD,:QWORD
PROTO64 external,SamISetPasswordInfoOnPdc, :QWORD,:QWORD,:QWORD
PROTO64 external,SamISetPrivateData, :QWORD,:QWORD,:QWORD
PROTO64 external,SamISetSerialNumberDomain, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIStorePrimaryCredentials, :QWORD,:QWORD
PROTO64 external,SamIUPNFromUserHandle, :QWORD,:QWORD,:QWORD
PROTO64 external,SamIUnLoadDownlevelDatabase, :QWORD
PROTO64 external,SamIUpdateLogonStatistics, :QWORD,:QWORD
PROTO64 external,SampAbortSingleLoopbackTask, :QWORD
PROTO64 external,SampAccountControlToFlags, :QWORD
PROTO64 external,SampAcquireSamLockExclusive, 
PROTO64 external,SampAcquireWriteLock, 
PROTO64 external,SampCommitBufferedWrites, :QWORD
PROTO64 external,SampConvertNt4SdToNt5Sd, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampDsChangePasswordUser, :QWORD,:QWORD,:QWORD
PROTO64 external,SampFlagsToAccountControl, :QWORD,:QWORD
PROTO64 external,SampGetDefaultSecurityDescriptorForClass, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampGetSerialNumberDomain2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampInitializeRegistry, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampInitializeSdConversion, 
PROTO64 external,SampInvalidateDomainCache, 
PROTO64 external,SampInvalidateRidRange, :QWORD
PROTO64 external,SampNetLogonNotificationRequired, :QWORD,:QWORD
PROTO64 external,SampNotifyReplicatedInChange, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampProcessSingleLoopbackTask, :QWORD
PROTO64 external,SampReleaseSamLockExclusive, 
PROTO64 external,SampReleaseWriteLock, :QWORD
PROTO64 external,SampRtlConvertUlongToUnicodeString, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampSetSerialNumberDomain2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampUsingDsData, 
PROTO64 external,SampWriteGroupType, :QWORD,:QWORD,:QWORD
PROTO64 external,SamrAddMemberToAlias, :QWORD,:QWORD
PROTO64 external,SamrAddMemberToGroup, :QWORD,:QWORD,:QWORD
PROTO64 external,SamrAddMultipleMembersToAlias, :QWORD,:QWORD
PROTO64 external,SamrChangePasswordUser, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamrCloseHandle, :QWORD
PROTO64 external,SamrCreateAliasInDomain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamrCreateGroupInDomain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamrCreateUser2InDomain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamrCreateUserInDomain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamrDeleteAlias, :QWORD
PROTO64 external,SamrDeleteGroup, :QWORD
PROTO64 external,SamrDeleteUser, :QWORD
PROTO64 external,SamrEnumerateAliasesInDomain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamrEnumerateDomainsInSamServer, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamrEnumerateGroupsInDomain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamrEnumerateUsersInDomain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamrGetAliasMembership, :QWORD,:QWORD,:QWORD
PROTO64 external,SamrGetGroupsForUser, :QWORD,:QWORD
PROTO64 external,SamrGetMembersInAlias, :QWORD,:QWORD
PROTO64 external,SamrGetMembersInGroup, :QWORD,:QWORD
PROTO64 external,SamrGetUserDomainPasswordInformation, :QWORD,:QWORD
PROTO64 external,SamrLookupDomainInSamServer, :QWORD,:QWORD,:QWORD
PROTO64 external,SamrLookupIdsInDomain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamrLookupNamesInDomain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamrOpenAlias, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamrOpenDomain, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamrOpenGroup, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamrOpenUser, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamrQueryDisplayInformation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamrQueryInformationAlias, :QWORD,:QWORD,:QWORD
PROTO64 external,SamrQueryInformationDomain, :QWORD,:QWORD,:QWORD
PROTO64 external,SamrQueryInformationGroup, :QWORD,:QWORD,:QWORD
PROTO64 external,SamrQueryInformationUser, :QWORD,:QWORD,:QWORD
PROTO64 external,SamrQuerySecurityObject, :QWORD,:QWORD,:QWORD
PROTO64 external,SamrRemoveMemberFromAlias, :QWORD,:QWORD
PROTO64 external,SamrRemoveMemberFromForeignDomain, :QWORD,:QWORD
PROTO64 external,SamrRemoveMemberFromGroup, :QWORD,:QWORD
PROTO64 external,SamrRemoveMultipleMembersFromAlias, :QWORD,:QWORD
PROTO64 external,SamrRidToSid, :QWORD,:QWORD,:QWORD
PROTO64 external,SamrSetInformationAlias, :QWORD,:QWORD,:QWORD
PROTO64 external,SamrSetInformationDomain, :QWORD,:QWORD,:QWORD
PROTO64 external,SamrSetInformationGroup, :QWORD,:QWORD,:QWORD
PROTO64 external,SamrSetInformationUser, :QWORD,:QWORD,:QWORD
PROTO64 external,SamrSetMemberAttributesOfGroup, :QWORD,:QWORD,:QWORD
PROTO64 external,SamrSetSecurityObject, :QWORD,:QWORD,:QWORD
PROTO64 external,SamrShutdownSamServer, :QWORD
PROTO64 external,SamrTestPrivateFunctionsDomain, :QWORD
PROTO64 external,SamrTestPrivateFunctionsUser, :QWORD
PROTO64 external,SamrUnicodeChangePasswordUser2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file samsrv.inc
echo -----------------------------------------
ENDIF

