IFNDEF SCSIWMI_INC
SCSIWMI_INC equ <1>

PROTO64 external,ScsiPortWmiDispatchFunction, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScsiPortWmiFireLogicalUnitEvent, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScsiPortWmiPostProcess, :QWORD,:QWORD,:QWORD
PROTO64 external,ScsiWmipFindGuid, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScsiWmipPostProcess, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScsiWmipProcessRequest, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,_ScsiPortWmiDispatchFunction, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file scsiwmi.inc
echo -----------------------------------------
ENDIF

