IFNDEF HCAPORT_INC
HCAPORT_INC equ <1>

PROTO64 external,HcaportAllocateCommonBuffer, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HcaportAllocateMemory, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HcaportClearAllBits, :QWORD
PROTO64 external,HcaportClearBits, :QWORD,:QWORD,:QWORD
PROTO64 external,HcaportCompareMemory, :QWORD,:QWORD,:QWORD
PROTO64 external,HcaportConnectInterrupt, :QWORD
PROTO64 external,HcaportFindClearBitsAndSet, :QWORD,:QWORD,:QWORD
PROTO64 external,HcaportFreeCommonBuffer, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HcaportFreeMemory, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HcaportInitialize, :QWORD,:QWORD,:QWORD
PROTO64 external,HcaportInitializeBitMap, :QWORD,:QWORD,:QWORD
PROTO64 external,HcaportMoveMemory, :QWORD,:QWORD,:QWORD
PROTO64 external,HcaportQueryAdapterRegistryDirect, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HcaportQueryAdapterRegistryKey, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HcaportTranslateVirtualAddress, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HcaportZeroMemory, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file hcaport.inc
echo -----------------------------------------
ENDIF

