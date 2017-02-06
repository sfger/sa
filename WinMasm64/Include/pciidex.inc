IFNDEF PCIIDEX_INC
PCIIDEX_INC equ <1>

PROTO64 external,PciIdeXGetBusData, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PciIdeXInitialize, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PciIdeXSetBusData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file pciidex.inc
echo -----------------------------------------
ENDIF

