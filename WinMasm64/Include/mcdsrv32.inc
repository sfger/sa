IFNDEF MCDSRV32_INC
MCDSRV32_INC equ <1>

PROTO64 external,MCDEngEscFilter, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MCDEngInit, :QWORD,:QWORD
PROTO64 external,MCDEngInitEx, :QWORD,:QWORD,:QWORD
PROTO64 external,MCDEngSetMemStatus, :QWORD,:QWORD
PROTO64 external,MCDEngUninit, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file mcdsrv32.inc
echo -----------------------------------------
ENDIF

