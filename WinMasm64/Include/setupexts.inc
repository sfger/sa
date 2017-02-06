IFNDEF SETUPEXTS_INC
SETUPEXTS_INC equ <1>

PROTO64 external,error, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,gle, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,help, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,infdump, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ocm, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,qcontext, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,queue, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,space, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,_st, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,stfind, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,version, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,winntflags, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,winntstr, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file setupexts.inc
echo -----------------------------------------
ENDIF

