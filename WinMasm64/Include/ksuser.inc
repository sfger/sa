IFNDEF KSUSER_INC
KSUSER_INC equ <1>

PROTO64 external,KsCreateAllocator, :QWORD,:QWORD,:QWORD
PROTO64 external,KsCreateClock, :QWORD,:QWORD,:QWORD
PROTO64 external,KsCreatePin, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,KsCreateTopologyNode, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,_KsCreateTopologyNode, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file ksuser.inc
echo -----------------------------------------
ENDIF

