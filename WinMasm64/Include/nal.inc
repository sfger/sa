IFNDEF NAL_INC
NAL_INC equ <1>

PROTO64 external,AllocNetworkBuffer, :QWORD,:QWORD
PROTO64 external,CancelTransmit, :QWORD,:QWORD
PROTO64 external,ClearStatistics, :QWORD
PROTO64 external,CloseNetwork, :QWORD,:QWORD
PROTO64 external,CompactNetworkBuffer, :QWORD
PROTO64 external,ContinueCapturing, :QWORD
PROTO64 external,DestroyNetworkID, :QWORD
PROTO64 external,EnumNetworks, 
PROTO64 external,FreeNetworkBuffer, :QWORD
PROTO64 external,GetBufferSize, :QWORD
PROTO64 external,GetBufferTimeStamp, :QWORD,:QWORD
PROTO64 external,GetBufferTotalBytesCaptured, :QWORD
PROTO64 external,GetBufferTotalFramesCaptured, :QWORD
PROTO64 external,GetNetworkBuffer, :QWORD
PROTO64 external,GetNetworkCallback, :QWORD
PROTO64 external,GetNetworkFrame, :QWORD,:QWORD
PROTO64 external,GetNetworkID, :QWORD
PROTO64 external,GetNetworkInfo, :QWORD
PROTO64 external,GetNetworkInstanceData, :QWORD
PROTO64 external,GetReconnectInfo, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetworkProc, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OpenNetwork, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PauseCapturing, :QWORD
PROTO64 external,QueryNetworkStatus, :QWORD,:QWORD
PROTO64 external,SetNetworkBuffer, :QWORD,:QWORD
PROTO64 external,SetNetworkCallback, :QWORD,:QWORD
PROTO64 external,SetNetworkFilter, :QWORD,:QWORD,:QWORD
PROTO64 external,SetNetworkInstanceData, :QWORD,:QWORD
PROTO64 external,SetReconnectInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,SetupNetwork, :QWORD,:QWORD
PROTO64 external,StartCapturing, :QWORD,:QWORD
PROTO64 external,StationQuery, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StopCapturing, :QWORD
PROTO64 external,TransmitQueue, :QWORD,:QWORD
PROTO64 external,TransmitSpecialFrame, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,_AllocNetworkBuffer, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file nal.inc
echo -----------------------------------------
ENDIF

