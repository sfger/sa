IFNDEF LSASRV_INC
LSASRV_INC equ <1>

PROTO64 external,DsRolerDcAsDc, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DsRolerDcAsReplica, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DsRolerDemoteDc, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DsRolerGetDcOperationProgress, :QWORD,:QWORD,:QWORD
PROTO64 external,DsRolerGetDcOperationResults, :QWORD,:QWORD,:QWORD
PROTO64 external,LsaIAllocateHeap, :QWORD
PROTO64 external,LsaIAllocateHeapZero, :QWORD
PROTO64 external,LsaIAuditAccountLogon, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsaIAuditAccountLogonEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsaIAuditKdcEvent, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsaIAuditKerberosLogon, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsaIAuditLogonUsingExplicitCreds, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsaIAuditNotifyPackageLoad, :QWORD
PROTO64 external,LsaIAuditPasswordAccessEvent, :QWORD,:QWORD,:QWORD
PROTO64 external,LsaIAuditSamEvent, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsaICallPackage, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsaICallPackageEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsaICallPackagePassthrough, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsaICancelNotification, :QWORD
PROTO64 external,LsaIChangeSecretCipherKey, :QWORD
PROTO64 external,LsaICryptProtectData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsaICryptUnprotectData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsaIDsNotifiedObjectChange, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsaIEnumerateSecrets, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsaIEventNotify, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsaIFilterSids, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsaIForestTrustFindMatch, :QWORD,:QWORD,:QWORD
PROTO64 external,LsaIFreeForestTrustInfo, :QWORD
PROTO64 external,LsaIFreeHeap, :QWORD
PROTO64 external,LsaIFreeReturnBuffer, :QWORD
PROTO64 external,LsaIFree_LSAI_PRIVATE_DATA, :QWORD
PROTO64 external,LsaIFree_LSAI_SECRET_ENUM_BUFFER, :QWORD,:QWORD
PROTO64 external,LsaIFree_LSAPR_ACCOUNT_ENUM_BUFFER, :QWORD
PROTO64 external,LsaIFree_LSAPR_CR_CIPHER_VALUE, :QWORD
PROTO64 external,LsaIFree_LSAPR_POLICY_DOMAIN_INFORMATION, :QWORD,:QWORD
PROTO64 external,LsaIFree_LSAPR_POLICY_INFORMATION, :QWORD,:QWORD
PROTO64 external,LsaIFree_LSAPR_PRIVILEGE_ENUM_BUFFER, :QWORD
PROTO64 external,LsaIFree_LSAPR_PRIVILEGE_SET, :QWORD
PROTO64 external,LsaIFree_LSAPR_REFERENCED_DOMAIN_LIST, :QWORD
PROTO64 external,LsaIFree_LSAPR_SR_SECURITY_DESCRIPTOR, :QWORD
PROTO64 external,LsaIFree_LSAPR_TRANSLATED_NAMES, :QWORD
PROTO64 external,LsaIFree_LSAPR_TRANSLATED_SIDS, :QWORD
PROTO64 external,LsaIFree_LSAPR_TRUSTED_DOMAIN_INFO, :QWORD,:QWORD
PROTO64 external,LsaIFree_LSAPR_TRUSTED_ENUM_BUFFER, :QWORD
PROTO64 external,LsaIFree_LSAPR_TRUSTED_ENUM_BUFFER_EX, :QWORD
PROTO64 external,LsaIFree_LSAPR_TRUST_INFORMATION, :QWORD
PROTO64 external,LsaIFree_LSAPR_UNICODE_STRING, :QWORD
PROTO64 external,LsaIFree_LSAPR_UNICODE_STRING_BUFFER, :QWORD
PROTO64 external,LsaIFree_LSAP_SITENAME_INFO, :QWORD
PROTO64 external,LsaIFree_LSAP_SITE_INFO, :QWORD
PROTO64 external,LsaIFree_LSAP_SUBNET_INFO, :QWORD
PROTO64 external,LsaIFree_LSAP_UPN_SUFFIXES, :QWORD
PROTO64 external,LsaIFree_LSA_FOREST_TRUST_COLLISION_INFORMATION, :QWORD
PROTO64 external,LsaIFree_LSA_FOREST_TRUST_INFORMATION, :QWORD
PROTO64 external,LsaIGetBootOption, :QWORD
PROTO64 external,LsaIGetCallInfo, :QWORD
PROTO64 external,LsaIGetForestTrustInformation, :QWORD
PROTO64 external,LsaIGetLogonGuid, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsaIGetNbAndDnsDomainNames, :QWORD,:QWORD,:QWORD
PROTO64 external,LsaIGetPrivateData, :QWORD,:QWORD,:QWORD
PROTO64 external,LsaIGetSerialNumberPolicy2, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsaIGetSerialNumberPolicy, :QWORD,:QWORD,:QWORD
PROTO64 external,LsaIGetSiteName, :QWORD
PROTO64 external,LsaIHealthCheck, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsaIImpersonateClient, 
PROTO64 external,LsaIInitializeWellKnownSids, :QWORD
PROTO64 external,LsaIIsClassIdLsaClass, :QWORD,:QWORD
PROTO64 external,LsaIIsDsPaused, 
PROTO64 external,LsaIKerberosRegisterTrustNotification, :QWORD,:QWORD
PROTO64 external,LsaILookupWellKnownName, :QWORD
PROTO64 external,LsaINotifyChangeNotification, :QWORD
PROTO64 external,LsaINotifyNetlogonParametersChangeW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsaINotifyPasswordChanged, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsaIOpenPolicyTrusted, :QWORD
PROTO64 external,LsaIQueryForestTrustInfo, :QWORD,:QWORD
PROTO64 external,LsaIQueryInformationPolicyTrusted, :QWORD,:QWORD
PROTO64 external,LsaIQuerySiteInfo, :QWORD
PROTO64 external,LsaIQuerySubnetInfo, :QWORD
PROTO64 external,LsaIQueryUpnSuffixes, :QWORD
PROTO64 external,LsaIRegisterNotification, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsaIRegisterPolicyChangeNotificationCallback, :QWORD,:QWORD
PROTO64 external,LsaISafeMode, 
PROTO64 external,LsaISamIndicatedDsStarted, :QWORD
PROTO64 external,LsaISetBootOption, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsaISetClientDnsHostName, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsaISetLogonGuidInLogonSession, :QWORD,:QWORD
PROTO64 external,LsaISetPrivateData, :QWORD,:QWORD,:QWORD
PROTO64 external,LsaISetSerialNumberPolicy, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsaISetTimesSecret, :QWORD,:QWORD,:QWORD
PROTO64 external,LsaISetupWasRun, 
PROTO64 external,LsaITestCall, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsaIUnregisterAllPolicyChangeNotificationCallback, :QWORD
PROTO64 external,LsaIUnregisterPolicyChangeNotificationCallback, :QWORD,:QWORD
PROTO64 external,LsaIUpdateForestTrustInformation, :QWORD,:QWORD,:QWORD
PROTO64 external,LsaIWriteAuditEvent, :QWORD,:QWORD
PROTO64 external,LsapAuOpenSam, :QWORD
PROTO64 external,LsapCheckBootMode, 
PROTO64 external,LsapDsDebugInitialize, 
PROTO64 external,LsapDsInitializeDsStateInfo, :QWORD
PROTO64 external,LsapDsInitializePromoteInterface, 
PROTO64 external,LsapInitLsa, 
PROTO64 external,LsarAddPrivilegesToAccount, :QWORD,:QWORD
PROTO64 external,LsarClose, :QWORD
PROTO64 external,LsarCreateAccount, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsarCreateSecret, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsarCreateTrustedDomain, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsarCreateTrustedDomainEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsarDelete, :QWORD
PROTO64 external,LsarEnumerateAccounts, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsarEnumeratePrivileges, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsarEnumeratePrivilegesAccount, :QWORD,:QWORD
PROTO64 external,LsarEnumerateTrustedDomains, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsarEnumerateTrustedDomainsEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsarGetQuotasForAccount, :QWORD,:QWORD
PROTO64 external,LsarGetSystemAccessAccount, :QWORD,:QWORD
PROTO64 external,LsarLookupNames, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsarLookupPrivilegeDisplayName, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsarLookupPrivilegeName, :QWORD,:QWORD,:QWORD
PROTO64 external,LsarLookupPrivilegeValue, :QWORD,:QWORD,:QWORD
PROTO64 external,LsarLookupSids2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsarLookupSids, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsarOpenAccount, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsarOpenPolicy, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsarOpenPolicySce, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsarOpenSecret, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsarOpenTrustedDomain, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsarOpenTrustedDomainByName, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsarQueryDomainInformationPolicy, :QWORD,:QWORD,:QWORD
PROTO64 external,LsarQueryForestTrustInformation, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsarQueryInfoTrustedDomain, :QWORD,:QWORD,:QWORD
PROTO64 external,LsarQueryInformationPolicy, :QWORD,:QWORD,:QWORD
PROTO64 external,LsarQuerySecret, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsarQuerySecurityObject, :QWORD,:QWORD,:QWORD
PROTO64 external,LsarQueryTrustedDomainInfo, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsarQueryTrustedDomainInfoByName, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsarRemovePrivilegesFromAccount, :QWORD,:QWORD,:QWORD
PROTO64 external,LsarSetDomainInformationPolicy, :QWORD,:QWORD,:QWORD
PROTO64 external,LsarSetForestTrustInformation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsarSetInformationPolicy, :QWORD,:QWORD,:QWORD
PROTO64 external,LsarSetInformationTrustedDomain, :QWORD,:QWORD,:QWORD
PROTO64 external,LsarSetQuotasForAccount, :QWORD,:QWORD
PROTO64 external,LsarSetSecret, :QWORD,:QWORD,:QWORD
PROTO64 external,LsarSetSecurityObject, :QWORD,:QWORD,:QWORD
PROTO64 external,LsarSetSystemAccessAccount, :QWORD,:QWORD
PROTO64 external,LsarSetTrustedDomainInfoByName, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ServiceInit, 

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file lsasrv.inc
echo -----------------------------------------
ENDIF

