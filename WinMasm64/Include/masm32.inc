IFNDEF MASM32_INC
MASM32_INC equ <1>

PROTO64 external,ArgClC, :QWORD,:QWORD   ; console mode version
PROTO64 external,dw2hex, :QWORD,:QWORD
PROTO64 external,ustr2dw, :QWORD
PROTO64 external,udw2str, :QWORD,:QWORD
PROTO64 external,GetErrDescription, :QWORD
PROTO64 external,BinSearch, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD      ; classic scanner
PROTO64 external,BMHBinsearch, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD   ; horspool variation
PROTO64 external,SBMBinSearch, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD   ; simplified version
PROTO64 external,XorData, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RolData, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RorData, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StrLen, :QWORD ; Agner Fog's high speed string length algo
PROTO64 external,StripRangeI, :QWORD,:QWORD,:BYTE,:BYTE
PROTO64 external,StripRangeX, :QWORD,:QWORD,:BYTE,:BYTE
PROTO64 external,MemCopy, :QWORD,:QWORD,:QWORD  ; source - dest - length
PROTO64 external,memfill, :QWORD,:QWORD,:QWORD
PROTO64 external,NameFromPath, :QWORD,:QWORD
PROTO64 external,FrameWindow, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Frame3D, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,VerticalTile, :QWORD,:QWORD,:QWORD
PROTO64 external,BrowseForFolder, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PageSetupDialog, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,write_disk_file, :QWORD,:QWORD,:QWORD
PROTO64 external,CreateMMF, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,nrQsortA, :QWORD,:QWORD
PROTO64 external,nrQsortD, :QWORD,:QWORD
PROTO64 external,CombSortA, :QWORD,:QWORD
PROTO64 external,CombSortD, :QWORD,:QWORD
PROTO64 external,testreg, PROTO
PROTO64 external,AsciiDump, :QWORD,:QWORD,:QWORD
PROTO64 external,atol, :QWORD
PROTO64 external,ltoa, :QWORD,:QWORD
PROTO64 external,OpenFileDialog, :QWORD, :QWORD, :QWORD, :QWORD
PROTO64 external,SaveFileDialog, :QWORD, :QWORD, :QWORD, :QWORD
PROTO64 external,arr_add, :QWORD,:QWORD,:QWORD
PROTO64 external,arr_mul, :QWORD,:QWORD,:QWORD
PROTO64 external,arr_sub, :QWORD,:QWORD,:QWORD
PROTO64 external,create_array, :QWORD,:QWORD
PROTO64 external,load_drives, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file masm32.inc
echo -----------------------------------------
ENDIF

