IFNDEF QUERY_INC
QUERY_INC equ <1>

PROTO64 external,AbortMerges, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BeginCacheTransaction, :QWORD,:QWORD,:QWORD,:QWORD
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
PROTO64 external,CiSvcMain, :QWORD,:QWORD
PROTO64 external,CollectCIISAPIPerformanceData, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CollectCIPerformanceData, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CollectFILTERPerformanceData, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DoneCIISAPIPerformanceData, 
PROTO64 external,DoneCIPerformanceData, 
PROTO64 external,DoneFILTERPerformanceData, 
PROTO64 external,EndCacheTransaction, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ForceMasterMerge, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetWin4ExceptionLevel, 
PROTO64 external,InitializeCIISAPIPerformanceData, :QWORD
PROTO64 external,InitializeCIPerformanceData, :QWORD
PROTO64 external,InitializeFILTERPerformanceData, :QWORD
PROTO64 external,LoadBHIFilter, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LoadBinaryFilter, :QWORD,:QWORD
PROTO64 external,LoadIFilter, :QWORD,:QWORD,:QWORD
PROTO64 external,LoadTextFilter, :QWORD,:QWORD
PROTO64 external,LocateCatalogsA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LocateCatalogsW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetCatalogState, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetWin4AssertLevel, :QWORD
PROTO64 external,SetWin4InfoLevel, :QWORD
PROTO64 external,SetupCache, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetupCacheEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StartFWCiSvcWork, :QWORD,:QWORD,:QWORD
PROTO64 external,StopFWCiSvcWork, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SvcEntry_CiSvc, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Win4AssertEx, :QWORD,:QWORD,:QWORD
PROTO64 external,vdprintf, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file query.inc
echo -----------------------------------------
ENDIF

