IFNDEF NWPRINT_INC
NWPRINT_INC equ <1>

PROTO64 external,ClosePrintProcessor, :QWORD
PROTO64 external,ControlPrintProcessor, :QWORD,:QWORD
PROTO64 external,EnumPrintProcessorDatatypesW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InstallPrintProcessor, :QWORD
PROTO64 external,OpenPrintProcessor, :QWORD,:QWORD
PROTO64 external,PrintDocumentOnPrintProcessor, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file nwprint.inc
echo -----------------------------------------
ENDIF

