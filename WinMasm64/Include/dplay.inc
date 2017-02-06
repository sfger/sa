IFNDEF DPLAY_INC
DPLAY_INC equ <1>

PROTO64 external,DirectPlayCreate, :QWORD,:QWORD,:QWORD
PROTO64 external,DirectPlayEnumerate, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file dplay.inc
echo -----------------------------------------
ENDIF

