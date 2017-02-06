IFNDEF HIDCLASS_INC
HIDCLASS_INC equ <1>

PROTO64 external,HidNotifyPresence, :QWORD,:QWORD
PROTO64 external,HidRegisterMinidriver, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file hidclass.inc
echo -----------------------------------------
ENDIF

