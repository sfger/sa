IFNDEF IMAGEHLP_INC
IMAGEHLP_INC equ <1>

PROTO64 external,BindImage, :QWORD,:QWORD,:QWORD
PROTO64 external,BindImageEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CheckSumMappedFile, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EnumerateLoadedModules64, :QWORD,:QWORD,:QWORD
PROTO64 external,EnumerateLoadedModules, :QWORD,:QWORD,:QWORD
PROTO64 external,FindDebugInfoFile, :QWORD,:QWORD,:QWORD
PROTO64 external,FindDebugInfoFileEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FindExecutableImage, :QWORD,:QWORD,:QWORD
PROTO64 external,FindExecutableImageEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FindFileInSearchPath, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetImageConfigInformation, :QWORD,:QWORD
PROTO64 external,GetImageUnusedHeaderBytes, :QWORD,:QWORD
PROTO64 external,GetTimestampForLoadedLibrary, :QWORD
PROTO64 external,ImageAddCertificate, :QWORD,:QWORD,:QWORD
PROTO64 external,ImageDirectoryEntryToData, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImageDirectoryEntryToDataEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImageEnumerateCertificates, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImageGetCertificateData, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImageGetCertificateHeader, :QWORD,:QWORD,:QWORD
PROTO64 external,ImageGetDigestStream, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImageLoad, :QWORD,:QWORD
PROTO64 external,ImageNtHeader, :QWORD
PROTO64 external,ImageRemoveCertificate, :QWORD,:QWORD
PROTO64 external,ImageRvaToSection, :QWORD,:QWORD,:QWORD
PROTO64 external,ImageRvaToVa, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImageUnload, :QWORD
PROTO64 external,ImagehlpApiVersion, 
PROTO64 external,ImagehlpApiVersionEx, :QWORD
PROTO64 external,MakeSureDirectoryPathExists, :QWORD
PROTO64 external,MapAndLoad, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MapDebugInformation, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MapFileAndCheckSumA, :QWORD,:QWORD,:QWORD
PROTO64 external,MapFileAndCheckSumW, :QWORD,:QWORD,:QWORD
PROTO64 external,ReBaseImage64, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ReBaseImage, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SearchTreeForFile, :QWORD,:QWORD,:QWORD
PROTO64 external,SetImageConfigInformation, :QWORD,:QWORD
PROTO64 external,SplitSymbols, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StackWalk64, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StackWalk, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SymCleanup, :QWORD
PROTO64 external,SymEnumerateModules64, :QWORD,:QWORD,:QWORD
PROTO64 external,SymEnumerateModules, :QWORD,:QWORD,:QWORD
PROTO64 external,SymEnumerateSymbols64, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SymEnumerateSymbols, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SymEnumerateSymbolsW64, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SymEnumerateSymbolsW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SymFunctionTableAccess64, :QWORD,:QWORD,:QWORD
PROTO64 external,SymFunctionTableAccess, :QWORD,:QWORD
PROTO64 external,SymGetLineFromAddr64, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SymGetLineFromAddr, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SymGetLineFromName64, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SymGetLineFromName, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SymGetLineNext64, :QWORD,:QWORD
PROTO64 external,SymGetLineNext, :QWORD,:QWORD
PROTO64 external,SymGetLinePrev64, :QWORD,:QWORD
PROTO64 external,SymGetLinePrev, :QWORD,:QWORD
PROTO64 external,SymGetModuleBase64, :QWORD,:QWORD,:QWORD
PROTO64 external,SymGetModuleBase, :QWORD,:QWORD
PROTO64 external,SymGetModuleInfo64, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SymGetModuleInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,SymGetModuleInfoEx64, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SymGetModuleInfoEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SymGetModuleInfoW64, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SymGetModuleInfoW, :QWORD,:QWORD,:QWORD
PROTO64 external,SymGetOptions, 
PROTO64 external,SymGetSearchPath, :QWORD,:QWORD,:QWORD
PROTO64 external,SymGetSymFromAddr64, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SymGetSymFromAddr, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SymGetSymFromName64, :QWORD,:QWORD,:QWORD
PROTO64 external,SymGetSymFromName, :QWORD,:QWORD,:QWORD
PROTO64 external,SymGetSymNext64, :QWORD,:QWORD
PROTO64 external,SymGetSymNext, :QWORD,:QWORD
PROTO64 external,SymGetSymPrev64, :QWORD,:QWORD
PROTO64 external,SymGetSymPrev, :QWORD,:QWORD
PROTO64 external,SymGetSymbolInfo64, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SymGetSymbolInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SymInitialize, :QWORD,:QWORD,:QWORD
PROTO64 external,SymLoadModule64, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SymLoadModule, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SymMatchFileName, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SymRegisterCallback64, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SymRegisterCallback, :QWORD,:QWORD,:QWORD
PROTO64 external,SymRegisterFunctionEntryCallback64, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SymRegisterFunctionEntryCallback, :QWORD,:QWORD,:QWORD
PROTO64 external,SymSetOptions, :QWORD
PROTO64 external,SymSetSearchPath, :QWORD,:QWORD
PROTO64 external,SymUnDName64, :QWORD,:QWORD,:QWORD
PROTO64 external,SymUnDName, :QWORD,:QWORD,:QWORD
PROTO64 external,SymUnloadModule64, :QWORD,:QWORD,:QWORD
PROTO64 external,SymUnloadModule, :QWORD,:QWORD
PROTO64 external,TouchFileTimes, :QWORD,:QWORD
PROTO64 external,UnDecorateSymbolName, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UnMapAndLoad, :QWORD
PROTO64 external,UnmapDebugInformation, :QWORD
PROTO64 external,UpdateDebugInfoFile, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UpdateDebugInfoFileEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file imagehlp.inc
echo -----------------------------------------
ENDIF

