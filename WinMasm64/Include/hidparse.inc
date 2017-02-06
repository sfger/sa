IFNDEF HIDPARSE_INC
HIDPARSE_INC equ <1>

PROTO64 external,HidP_FreeCollectionDescription, :QWORD
PROTO64 external,HidP_GetButtonCaps, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_GetCaps, :QWORD,:QWORD
PROTO64 external,HidP_GetCollectionDescription, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_GetData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_GetExtendedAttributes, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_GetLinkCollectionNodes, :QWORD,:QWORD,:QWORD
PROTO64 external,HidP_GetScaledUsageValue, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_GetSpecificButtonCaps, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_GetSpecificValueCaps, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_GetUsageValue, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_GetUsageValueArray, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_GetUsages, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_GetUsagesEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_GetValueCaps, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_InitializeReportForID, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_MaxDataListLength, :QWORD,:QWORD
PROTO64 external,HidP_MaxUsageListLength, :QWORD,:QWORD,:QWORD
PROTO64 external,HidP_SetData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_SetScaledUsageValue, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_SetUsageValue, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_SetUsageValueArray, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_SetUsages, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_SysPowerCaps, :QWORD,:QWORD
PROTO64 external,HidP_SysPowerEvent, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_TranslateUsageAndPagesToI8042ScanCodes, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_TranslateUsagesToI8042ScanCodes, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_UnsetUsages, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_UsageAndPageListDifference, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_UsageListDifference, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file hidparse.inc
echo -----------------------------------------
ENDIF

