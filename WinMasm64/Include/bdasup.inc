IFNDEF BDASUP_INC
BDASUP_INC equ <1>

PROTO64 external,BdaCheckChanges, :QWORD
PROTO64 external,BdaCommitChanges, :QWORD
PROTO64 external,BdaCreateFilterFactory, :QWORD,:QWORD,:QWORD
PROTO64 external,BdaCreateFilterFactoryEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BdaCreatePin, :QWORD,:QWORD,:QWORD
PROTO64 external,BdaCreateTopology, :QWORD,:QWORD,:QWORD
PROTO64 external,BdaDeletePin, :QWORD,:QWORD
PROTO64 external,BdaFilterFactoryUpdateCacheData, :QWORD,:QWORD
PROTO64 external,BdaGetChangeState, :QWORD,:QWORD
PROTO64 external,BdaInitFilter, :QWORD,:QWORD
PROTO64 external,BdaMethodCreatePin, :QWORD,:QWORD,:QWORD
PROTO64 external,BdaMethodCreateTopology, :QWORD,:QWORD,:QWORD
PROTO64 external,BdaMethodDeletePin, :QWORD,:QWORD,:QWORD
PROTO64 external,BdaPropertyGetControllingPinId, :QWORD,:QWORD,:QWORD
PROTO64 external,BdaPropertyGetPinControl, :QWORD,:QWORD,:QWORD
PROTO64 external,BdaPropertyNodeDescriptors, :QWORD,:QWORD,:QWORD
PROTO64 external,BdaPropertyNodeEvents, :QWORD,:QWORD,:QWORD
PROTO64 external,BdaPropertyNodeMethods, :QWORD,:QWORD,:QWORD
PROTO64 external,BdaPropertyNodeProperties, :QWORD,:QWORD,:QWORD
PROTO64 external,BdaPropertyNodeTypes, :QWORD,:QWORD,:QWORD
PROTO64 external,BdaPropertyPinTypes, :QWORD,:QWORD,:QWORD
PROTO64 external,BdaPropertyTemplateConnections, :QWORD,:QWORD,:QWORD
PROTO64 external,BdaStartChanges, :QWORD
PROTO64 external,BdaUninitFilter, :QWORD
PROTO64 external,BdaValidateNodeProperty, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file bdasup.inc
echo -----------------------------------------
ENDIF

