IFNDEF RESUTILS_INC
RESUTILS_INC equ <1>

PROTO64 external,ClusWorkerCheckTerminate, :QWORD
PROTO64 external,ClusWorkerCreate, :QWORD,:QWORD,:QWORD
PROTO64 external,ClusWorkerStart, :QWORD
PROTO64 external,ClusWorkerTerminate, :QWORD
PROTO64 external,ResUtilAddUnknownProperties, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilCreateDirectoryTree, :QWORD
PROTO64 external,ResUtilDupParameterBlock, :QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilDupString, :QWORD
PROTO64 external,ResUtilEnumPrivateProperties, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilEnumProperties, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilEnumResources, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilEnumResourcesEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilExpandEnvironmentStrings, :QWORD
PROTO64 external,ResUtilFindBinaryProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilFindDependentDiskResourceDriveLetter, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilFindDwordProperty, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilFindExpandSzProperty, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilFindExpandedSzProperty, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilFindLongProperty, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilFindMultiSzProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilFindSzProperty, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilFreeEnvironment, :QWORD
PROTO64 external,ResUtilFreeParameterBlock, :QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilGetAllProperties, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilGetBinaryProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilGetBinaryValue, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilGetCoreClusterResources, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilGetDwordProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilGetDwordValue, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilGetEnvironmentWithNetName, :QWORD
PROTO64 external,ResUtilGetMultiSzProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilGetPrivateProperties, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilGetProperties, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilGetPropertiesToParameterBlock, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilGetProperty, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilGetPropertyFormats, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilGetPropertySize, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilGetResourceDependency, :QWORD,:QWORD
PROTO64 external,ResUtilGetResourceDependencyByClass, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilGetResourceDependencyByName, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilGetResourceDependentIPAddressProps, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilGetResourceName, :QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilGetResourceNameDependency, :QWORD,:QWORD
PROTO64 external,ResUtilGetSzProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilGetSzValue, :QWORD,:QWORD
PROTO64 external,ResUtilIsPathValid, :QWORD
PROTO64 external,ResUtilIsResourceClassEqual, :QWORD,:QWORD
PROTO64 external,ResUtilPropertyListFromParameterBlock, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilResourceTypesEqual, :QWORD,:QWORD
PROTO64 external,ResUtilResourcesEqual, :QWORD,:QWORD
PROTO64 external,ResUtilSetBinaryValue, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilSetDwordValue, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilSetExpandSzValue, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilSetMultiSzValue, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilSetPrivatePropertyList, :QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilSetPropertyParameterBlock, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilSetPropertyParameterBlockEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilSetPropertyTable, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilSetPropertyTableEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilSetResourceServiceEnvironment, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilSetResourceServiceStartParameters, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilSetSzValue, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilSetUnknownProperties, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilStartResourceService, :QWORD,:QWORD
PROTO64 external,ResUtilStopResourceService, :QWORD
PROTO64 external,ResUtilStopService, :QWORD
PROTO64 external,ResUtilTerminateServiceProcessFromResDll, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilVerifyPrivatePropertyList, :QWORD,:QWORD
PROTO64 external,ResUtilVerifyPropertyTable, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResUtilVerifyResourceService, :QWORD
PROTO64 external,ResUtilVerifyService, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file resutils.inc
echo -----------------------------------------
ENDIF

