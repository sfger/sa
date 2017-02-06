IFNDEF BATMETER_INC
BATMETER_INC equ <1>

PROTO64 external,BatMeterCapabilities, :QWORD
PROTO64 external,CreateBatMeter, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DestroyBatMeter, :QWORD
PROTO64 external,PowerCapabilities, 
PROTO64 external,UpdateBatMeter, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file batmeter.inc
echo -----------------------------------------
ENDIF

