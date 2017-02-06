IFNDEF EXSUP_INC
EXSUP_INC equ <1>

PROTO64 external,RtlUnwind, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,_rt_probe_read4, :QWORD
PROTO64 external,_seh_longjmp_unwind, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file exsup.inc
echo -----------------------------------------
ENDIF

