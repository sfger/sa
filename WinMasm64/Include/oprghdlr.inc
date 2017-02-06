IFNDEF OPRGHDLR_INC
OPRGHDLR_INC equ <1>

PROTO64 external,DeRegisterOpRegionHandler, :QWORD,:QWORD
PROTO64 external,RegisterOpRegionHandler, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file oprghdlr.inc
echo -----------------------------------------
ENDIF

