IFNDEF IPROP_INC
IPROP_INC equ <1>

PROTO64 external,FmtIdToPropStgName, :QWORD,:QWORD
PROTO64 external,FreePropVariantArray, :QWORD,:QWORD
PROTO64 external,PropStgNameToFmtId, :QWORD,:QWORD
PROTO64 external,PropVariantClear, :QWORD
PROTO64 external,PropVariantCopy, :QWORD,:QWORD
PROTO64 external,StgCreatePropSetStg, :QWORD,:QWORD,:QWORD
PROTO64 external,StgCreatePropStg, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StgOpenPropStg, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file iprop.inc
echo -----------------------------------------
ENDIF

