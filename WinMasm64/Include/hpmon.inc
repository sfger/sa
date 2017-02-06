IFNDEF HPMON_INC
HPMON_INC equ <1>

PROTO64 external,AddPortW, :QWORD,:QWORD,:QWORD
PROTO64 external,ClosePort, :QWORD
PROTO64 external,ConfigurePortW, :QWORD,:QWORD,:QWORD
PROTO64 external,DeletePortW, :QWORD,:QWORD,:QWORD
PROTO64 external,EndDocPort, :QWORD
PROTO64 external,EnumPortsW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InitializeMonitor, :QWORD
PROTO64 external,LibMain, :QWORD,:QWORD,:QWORD
PROTO64 external,OpenPort, :QWORD,:QWORD
PROTO64 external,ReadPort, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StartDocPort, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WritePort, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file hpmon.inc
echo -----------------------------------------
ENDIF

