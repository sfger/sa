IFNDEF NMSUPP_INC
NMSUPP_INC equ <1>

PROTO64 external,AdjustOperatorPrecedence, :QWORD
PROTO64 external,AllocMemory, :QWORD
PROTO64 external,AllocObject, :QWORD
PROTO64 external,AndExpression, :QWORD,:QWORD
PROTO64 external,BhAllocSystemMemory, :QWORD
PROTO64 external,BhFreeSystemMemory, :QWORD
PROTO64 external,BhGetLastError, 
PROTO64 external,BhGetWindowsVersion, 
PROTO64 external,BhGlobalTimer, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BhKillTimer, :QWORD
PROTO64 external,BhSetLastError, :QWORD
PROTO64 external,BhSetTimer, :QWORD,:QWORD,:QWORD
PROTO64 external,CreateObjectHeap, :QWORD,:QWORD
PROTO64 external,CreatePassword, :QWORD
PROTO64 external,DestroyObjectHeap, :QWORD
PROTO64 external,DestroyPassword, :QWORD
PROTO64 external,FreeMemory, :QWORD
PROTO64 external,FreeObject, :QWORD,:QWORD
PROTO64 external,GetObjectHeapSize, :QWORD
PROTO64 external,GrowObjectHeap, :QWORD,:QWORD
PROTO64 external,InitializeExpression, :QWORD
PROTO64 external,InitializePattern, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IsDaytona, 
PROTO64 external,MemorySize, :QWORD
PROTO64 external,NegatePattern, :QWORD
PROTO64 external,NormalizeAddress, :QWORD
PROTO64 external,NormalizeAddressTable, :QWORD
PROTO64 external,OrExpression, :QWORD,:QWORD
PROTO64 external,PurgeObjectHeap, :QWORD
PROTO64 external,ReallocMemory, :QWORD,:QWORD
PROTO64 external,TestMemory, :QWORD
PROTO64 external,ValidatePassword, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file nmsupp.inc
echo -----------------------------------------
ENDIF

