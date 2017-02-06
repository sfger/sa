IFNDEF LLSRPC_INC
LLSRPC_INC equ <1>

PROTO64 external,LlsCapabilityIsSupported, :QWORD,:QWORD
PROTO64 external,LlsCertificateClaimAddA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsCertificateClaimAddCheckA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsCertificateClaimAddCheckW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsCertificateClaimAddW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsClose, :QWORD
PROTO64 external,LlsConnectA, :QWORD,:QWORD
PROTO64 external,LlsConnectEnterpriseA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsConnectEnterpriseW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsConnectW, :QWORD,:QWORD
PROTO64 external,LlsEnterpriseServerFindA, :QWORD,:QWORD,:QWORD
PROTO64 external,LlsEnterpriseServerFindW, :QWORD,:QWORD,:QWORD
PROTO64 external,LlsFreeMemory, :QWORD
PROTO64 external,LlsGroupAddA, :QWORD,:QWORD,:QWORD
PROTO64 external,LlsGroupAddW, :QWORD,:QWORD,:QWORD
PROTO64 external,LlsGroupDeleteA, :QWORD,:QWORD
PROTO64 external,LlsGroupDeleteW, :QWORD,:QWORD
PROTO64 external,LlsGroupEnumA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsGroupEnumW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsGroupInfoGetA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsGroupInfoGetW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsGroupInfoSetA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsGroupInfoSetW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsGroupUserAddA, :QWORD,:QWORD,:QWORD
PROTO64 external,LlsGroupUserAddW, :QWORD,:QWORD,:QWORD
PROTO64 external,LlsGroupUserDeleteA, :QWORD,:QWORD,:QWORD
PROTO64 external,LlsGroupUserDeleteW, :QWORD,:QWORD,:QWORD
PROTO64 external,LlsGroupUserEnumA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsGroupUserEnumW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsLicenseAddA, :QWORD,:QWORD,:QWORD
PROTO64 external,LlsLicenseAddW, :QWORD,:QWORD,:QWORD
PROTO64 external,LlsLicenseEnumA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsLicenseEnumW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsLicenseFree2, :QWORD,:QWORD
PROTO64 external,LlsLicenseFree, :QWORD,:QWORD
PROTO64 external,LlsLicenseRequest2A, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsLicenseRequest2W, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsLicenseRequestA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsLicenseRequestW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsLocalServiceEnumA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsLocalServiceEnumW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsLocalServiceInfoGetA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsLocalServiceInfoGetW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsLocalServiceInfoSetA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsLocalServiceInfoSetW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsProductAddA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsProductAddW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsProductEnumA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsProductEnumW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsProductLicenseEnumA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsProductLicenseEnumW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsProductLicensesGetA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsProductLicensesGetW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsProductSecurityGetA, :QWORD,:QWORD,:QWORD
PROTO64 external,LlsProductSecurityGetW, :QWORD,:QWORD,:QWORD
PROTO64 external,LlsProductSecuritySetA, :QWORD,:QWORD
PROTO64 external,LlsProductSecuritySetW, :QWORD,:QWORD
PROTO64 external,LlsProductServerEnumA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsProductServerEnumW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsProductUserEnumA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsProductUserEnumW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsReplClose, :QWORD
PROTO64 external,LlsReplConnectW, :QWORD,:QWORD
PROTO64 external,LlsReplicationCertDbAddW, :QWORD,:QWORD,:QWORD
PROTO64 external,LlsReplicationProductSecurityAddW, :QWORD,:QWORD,:QWORD
PROTO64 external,LlsReplicationRequestW, :QWORD,:QWORD,:QWORD
PROTO64 external,LlsReplicationServerAddW, :QWORD,:QWORD,:QWORD
PROTO64 external,LlsReplicationServerServiceAddW, :QWORD,:QWORD,:QWORD
PROTO64 external,LlsReplicationServiceAddW, :QWORD,:QWORD,:QWORD
PROTO64 external,LlsReplicationUserAddExW, :QWORD,:QWORD,:QWORD
PROTO64 external,LlsReplicationUserAddW, :QWORD,:QWORD,:QWORD
PROTO64 external,LlsServiceInfoGetA, :QWORD,:QWORD,:QWORD
PROTO64 external,LlsServiceInfoGetW, :QWORD,:QWORD,:QWORD
PROTO64 external,LlsServiceInfoSetA, :QWORD,:QWORD,:QWORD
PROTO64 external,LlsServiceInfoSetW, :QWORD,:QWORD,:QWORD
PROTO64 external,LlsUserDeleteA, :QWORD,:QWORD
PROTO64 external,LlsUserDeleteW, :QWORD,:QWORD
PROTO64 external,LlsUserEnumA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsUserEnumW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsUserInfoGetA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsUserInfoGetW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsUserInfoSetA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsUserInfoSetW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsUserProductDeleteA, :QWORD,:QWORD,:QWORD
PROTO64 external,LlsUserProductDeleteW, :QWORD,:QWORD,:QWORD
PROTO64 external,LlsUserProductEnumA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LlsUserProductEnumW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file llsrpc.inc
echo -----------------------------------------
ENDIF

