IFNDEF DPLAYX_INC
DPLAYX_INC equ <1>

PROTO64 external,DirectPlayCreate, :QWORD,:QWORD,:QWORD
PROTO64 external,DirectPlayEnumerateA, :QWORD,:QWORD
PROTO64 external,DirectPlayEnumerateW, :QWORD,:QWORD
PROTO64 external,DirectPlayLobbyCreateA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DirectPlayLobbyCreateW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file dplayx.inc
echo -----------------------------------------
ENDIF

