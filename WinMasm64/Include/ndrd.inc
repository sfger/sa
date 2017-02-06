IFNDEF NDRD_INC
NDRD_INC equ <1>

PROTO64 external,b, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,_bp, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,help, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,km, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,kol, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,kp, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,sb, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,sd, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,sm, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,smd, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file ndrd.inc
echo -----------------------------------------
ENDIF

