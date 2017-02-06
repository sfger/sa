IFNDEF NMAPI_INC
NMAPI_INC equ <1>

PROTO64 external,AbortExpert, :QWORD
PROTO64 external,AddAddress, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AddExpertToGroup, :QWORD,:QWORD
PROTO64 external,AddGroup, :QWORD,:QWORD
PROTO64 external,AddProperty, :QWORD,:QWORD
PROTO64 external,AddressTypeToMacType, :QWORD
PROTO64 external,AdjustSystemTime, :QWORD,:QWORD,:QWORD
PROTO64 external,AttachPropertyInstance, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AttachPropertyInstanceEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BHGetLastError, 
PROTO64 external,BHSetLastError, :QWORD
PROTO64 external,CCHeapAlloc, :QWORD,:QWORD
PROTO64 external,CCHeapFree, :QWORD
PROTO64 external,CCHeapReAlloc, :QWORD,:QWORD,:QWORD
PROTO64 external,CCHeapSize, :QWORD
PROTO64 external,CompareAddresses, :QWORD,:QWORD
PROTO64 external,CompareFrameDestAddress, :QWORD,:QWORD
PROTO64 external,CompareFrameSourceAddress, :QWORD,:QWORD
PROTO64 external,CompareRawAddresses, :QWORD,:QWORD,:QWORD
PROTO64 external,CreateAddressDatabase, 
PROTO64 external,CreateCapture, :QWORD,:QWORD
PROTO64 external,CreateErrorLogEntry, 
PROTO64 external,CreateFilter, 
PROTO64 external,CreateFrame, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateHandoffTable, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreatePropertyDatabase, :QWORD,:QWORD
PROTO64 external,CreateProtocol, :QWORD,:QWORD,:QWORD
PROTO64 external,DebugGetFrameLocks, :QWORD,:QWORD,:QWORD
PROTO64 external,DebugShowLocks, :QWORD
PROTO64 external,DecodeSNMPObjectIdentifier, :QWORD,:QWORD,:QWORD
PROTO64 external,DeleteAddress, :QWORD,:QWORD
PROTO64 external,DeleteExpertFromGroup, :QWORD,:QWORD
PROTO64 external,DeleteFrame, :QWORD,:QWORD
PROTO64 external,DeleteGroup, :QWORD
PROTO64 external,DestroyAddressDatabase, :QWORD
PROTO64 external,DestroyCapture, :QWORD
PROTO64 external,DestroyFilter, :QWORD
PROTO64 external,DestroyFrame, :QWORD
PROTO64 external,DestroyHandoffTable, :QWORD
PROTO64 external,DestroyPropertyDatabase, :QWORD
PROTO64 external,DestroyProtocol, :QWORD
PROTO64 external,DisableParserFilter, :QWORD,:QWORD
PROTO64 external,DisableProtocol, :QWORD,:QWORD
PROTO64 external,EmptyAddressDatabase, :QWORD
PROTO64 external,EnableParserFilter, :QWORD,:QWORD
PROTO64 external,EnableProtocol, :QWORD,:QWORD
PROTO64 external,EncodeSNMPObjectIdentifier, :QWORD,:QWORD,:QWORD
PROTO64 external,EnumAddresses, :QWORD,:QWORD
PROTO64 external,EnumExpertHandles, :QWORD,:QWORD,:QWORD
PROTO64 external,EnumExpertInfos, :QWORD,:QWORD,:QWORD
PROTO64 external,EnumGroups, :QWORD,:QWORD
PROTO64 external,EnumProtocols, 
PROTO64 external,ExpertAllocMemory, :QWORD,:QWORD,:QWORD
PROTO64 external,ExpertFreeMemory, :QWORD,:QWORD
PROTO64 external,ExpertGetFrame, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ExpertGetStartupInfo, :QWORD,:QWORD
PROTO64 external,ExpertIndicateStatus, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ExpertMemorySize, :QWORD,:QWORD
PROTO64 external,ExpertReallocMemory, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ExpertSubmitEvent, :QWORD,:QWORD
PROTO64 external,FilterAddObject, :QWORD,:QWORD
PROTO64 external,FilterAttachesProperties, :QWORD
PROTO64 external,FilterDuplicate, :QWORD
PROTO64 external,FilterFindFrame, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FilterFindPropertyInstance, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FilterFlushBits, :QWORD
PROTO64 external,FilterFrame, :QWORD,:QWORD,:QWORD
PROTO64 external,FindAddressInfoByAddress, :QWORD,:QWORD
PROTO64 external,FindAddressInfoByName, :QWORD,:QWORD,:QWORD
PROTO64 external,FindNextFrame, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FindPreviousFrame, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FindPropertyInstance, :QWORD,:QWORD
PROTO64 external,FindPropertyInstanceRestart, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FrameRecognize, :QWORD
PROTO64 external,GetASRThWnd, 
PROTO64 external,GetAddressDatabaseInstanceData, :QWORD
PROTO64 external,GetAddressInfo, :QWORD,:QWORD
PROTO64 external,GetAddressInfoByName, :QWORD,:QWORD
PROTO64 external,GetCCInstPtr, 
PROTO64 external,GetCaptureAddressDB, :QWORD
PROTO64 external,GetCaptureComment, :QWORD
PROTO64 external,GetCaptureCommentFromFilename, :QWORD,:QWORD,:QWORD
PROTO64 external,GetCaptureInstanceData, :QWORD
PROTO64 external,GetCaptureMacType, :QWORD
PROTO64 external,GetCaptureTimeStamp, :QWORD
PROTO64 external,GetCaptureTotalFrames, :QWORD
PROTO64 external,GetCurrentFilter, 
PROTO64 external,GetEnabledProtocols, :QWORD
PROTO64 external,GetExpertFromName, :QWORD,:QWORD
PROTO64 external,GetExpertInfo, :QWORD,:QWORD
PROTO64 external,GetExpertStatus, :QWORD,:QWORD
PROTO64 external,GetFrame, :QWORD,:QWORD
PROTO64 external,GetFrameCaptureHandle, :QWORD
PROTO64 external,GetFrameDestAddress, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetFrameDstAddressOffset, :QWORD,:QWORD,:QWORD
PROTO64 external,GetFrameFromFrameHandle, :QWORD
PROTO64 external,GetFrameLength, :QWORD
PROTO64 external,GetFrameMacHeaderLength, :QWORD
PROTO64 external,GetFrameMacType, :QWORD
PROTO64 external,GetFrameNumber, :QWORD
PROTO64 external,GetFrameRecognizeData, :QWORD
PROTO64 external,GetFrameRoutingInformation, :QWORD,:QWORD
PROTO64 external,GetFrameSourceAddress, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetFrameSrcAddressOffset, :QWORD,:QWORD,:QWORD
PROTO64 external,GetFrameStoredLength, :QWORD
PROTO64 external,GetFrameTimeStamp, :QWORD
PROTO64 external,GetGroupName, :QWORD,:QWORD
PROTO64 external,GetMaxAmountOfProtocols, 
PROTO64 external,GetPreviousProtocolOffsetByName, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetProperty, :QWORD,:QWORD
PROTO64 external,GetPropertyInfo, :QWORD
PROTO64 external,GetPropertyText, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetProtocolDLLName, :QWORD
PROTO64 external,GetProtocolFromName, :QWORD
PROTO64 external,GetProtocolFromProperty, :QWORD
PROTO64 external,GetProtocolFromProtocolID, :QWORD
PROTO64 external,GetProtocolFromTable, :QWORD,:QWORD,:QWORD
PROTO64 external,GetProtocolInfo, :QWORD
PROTO64 external,GetProtocolStartOffset, :QWORD,:QWORD
PROTO64 external,GetProtocolStartOffsetHandle, :QWORD,:QWORD
PROTO64 external,GetSystemPath, :QWORD,:QWORD
PROTO64 external,HelperFormatUnicodeString, :QWORD,:QWORD,:QWORD
PROTO64 external,InsertFrame, :QWORD,:QWORD,:QWORD
PROTO64 external,IsRawIPXEnabled, :QWORD,:QWORD,:QWORD
PROTO64 external,IsValidSNMPObjectIdentifier, :QWORD
PROTO64 external,LoadCapture, :QWORD,:QWORD
PROTO64 external,LoadCaptureW, :QWORD,:QWORD
PROTO64 external,LoadExpertConfiguration, :QWORD,:QWORD,:QWORD
PROTO64 external,LockFrame, :QWORD
PROTO64 external,LockFramePropertyTable, :QWORD
PROTO64 external,LockFrameText, :QWORD
PROTO64 external,MacTypeToAddressType, :QWORD
PROTO64 external,ModifyFrame, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ObjectIdentifierContains, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PanicMessage, :QWORD,:QWORD,:QWORD
PROTO64 external,ParserTemporaryLockFrame, :QWORD
PROTO64 external,PopupExpertConfigurationUI, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,QueryProtocolState, :QWORD,:QWORD
PROTO64 external,ReleaseFrame, :QWORD
PROTO64 external,ResetPropertyInstanceLength, :QWORD,:QWORD,:QWORD
PROTO64 external,RunExperts, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SaveCapture, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SaveCaptureW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SaveDownLevelCapture, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SaveExpertConfiguration, :QWORD,:QWORD,:QWORD
PROTO64 external,SetAddressDatabaseInstanceData, :QWORD,:QWORD
PROTO64 external,SetCCInstPtr, :QWORD
PROTO64 external,SetCaptureAddressDB, :QWORD,:QWORD
PROTO64 external,SetCaptureInstanceData, :QWORD,:QWORD
PROTO64 external,SetCaptureMacType, :QWORD,:QWORD
PROTO64 external,SetCaptureTimeStamp, :QWORD,:QWORD
PROTO64 external,SetCurrentFilter, :QWORD
PROTO64 external,SetGroupName, :QWORD,:QWORD
PROTO64 external,UnlockFrame, :QWORD
PROTO64 external,UnlockFramePropertyTable, :QWORD
PROTO64 external,UnlockFrameText, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file nmapi.inc
echo -----------------------------------------
ENDIF

