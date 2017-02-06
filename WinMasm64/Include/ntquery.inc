IFNDEF NTQUERY_INC
NTQUERY_INC equ <1>

PROTO64 external,BindIFilterFromStorage, :QWORD,:QWORD,:QWORD
PROTO64 external,BindIFilterFromStream, :QWORD,:QWORD,:QWORD
PROTO64 external,CIBuildQueryNode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CIBuildQueryTree, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CICreateCommand, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CIGetGlobalPropertyList, :QWORD
PROTO64 external,CIMakeICommand, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CIRestrictionToFullTree, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CIState, :QWORD,:QWORD,:QWORD
PROTO64 external,CITextToFullTree, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CITextToFullTreeEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CITextToSelectTree, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CITextToSelectTreeEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LoadIFilter, :QWORD,:QWORD,:QWORD
PROTO64 external,LocateCatalogsA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LocateCatalogsW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetCatalogState, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file ntquery.inc
echo -----------------------------------------
ENDIF

