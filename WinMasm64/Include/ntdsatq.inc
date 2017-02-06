IFNDEF NTDSATQ_INC
NTDSATQ_INC equ <1>

PROTO64 external,AllocCacheDumpStatsToHtml, :QWORD,:QWORD
PROTO64 external,AtqAddAsyncHandle, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AtqBandwidthGetInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,AtqBandwidthSetInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,AtqClearStatistics, 
PROTO64 external,AtqCloseEndpoint, :QWORD
PROTO64 external,AtqCloseFileHandle, :QWORD
PROTO64 external,AtqCloseSocket, :QWORD,:QWORD
PROTO64 external,AtqContextGetInfo, :QWORD,:QWORD
PROTO64 external,AtqContextSetInfo2, :QWORD,:QWORD,:QWORD
PROTO64 external,AtqContextSetInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,AtqCreateBandwidthInfo, 
PROTO64 external,AtqCreateEndpoint, :QWORD,:QWORD
PROTO64 external,AtqEndpointGetInfo, :QWORD,:QWORD
PROTO64 external,AtqEndpointSetInfo2, :QWORD,:QWORD,:QWORD
PROTO64 external,AtqEndpointSetInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,AtqFreeBandwidthInfo, :QWORD
PROTO64 external,AtqFreeContext, :QWORD,:QWORD
PROTO64 external,AtqGetAcceptExAddrs, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AtqGetDatagramAddrs, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AtqGetInfo, :QWORD
PROTO64 external,AtqGetStatistics, :QWORD
PROTO64 external,AtqInitialize, :QWORD
PROTO64 external,AtqPostCompletionStatus, :QWORD,:QWORD
PROTO64 external,AtqReadDirChanges, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AtqReadFile, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AtqReadSocket, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AtqSetInfo2, :QWORD,:QWORD
PROTO64 external,AtqSetInfo, :QWORD,:QWORD
PROTO64 external,AtqSpudInitialized, 
PROTO64 external,AtqStartEndpoint, :QWORD
PROTO64 external,AtqStopAndCloseEndpoint, :QWORD,:QWORD,:QWORD
PROTO64 external,AtqStopEndpoint, :QWORD
PROTO64 external,AtqSyncWsaSend, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AtqTerminate, 
PROTO64 external,AtqTransmitFile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AtqWriteDatagramSocket, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AtqWriteFile, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AtqWriteSocket, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file ntdsatq.inc
echo -----------------------------------------
ENDIF

