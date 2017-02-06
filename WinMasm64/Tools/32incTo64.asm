;this is a 32bit app
;converts the proto winapi def from masm32 .inc files. It skips windows.inc and any proto that has a varage param
;as not sure how to get that to work with gallos macros yet. It also skips everything else, structs, equ's etc...
;requires you have MASM32 installed 

.686           
.model flat, stdcall
option casemap:none
include \masm32\include\windows.inc

include \masm32\include\advapi32.inc
includelib \masm32\lib\advapi32.lib

include \masm32\include\kernel32.inc
includelib \masm32\lib\kernel32.lib

include \masm32\include\masm32.inc
includelib \masm32\lib\masm32.lib

include \masm32\include\user32.inc
includelib \masm32\lib\user32.lib

include \masm32\include\shlwapi.inc
includelib \masm32\lib\shlwapi.lib

    CTEXT MACRO text:VARARG
            local TxtName
              .data
               TxtName BYTE text,0
              .code
            EXITM <ADDR TxtName>
     ENDM

HasWord 		 proto :DWORD,:DWORD
SetCurrent64File proto :DWORD,:DWORD
ReplaceDWORDS	 proto :DWORD,:DWORD
WriteLine		 proto :DWORD,:DWORD
Proto64Format	 proto :DWORD,:DWORD
IsAProto		 proto :DWORD
quicktest		 proto :DWORD,:DWORD
GetToken 		 proto :DWORD,:DWORD,:BYTE,:DWORD,:BYTE
WriteIncProtect	 proto :DWORD,:DWORD,:DWORD
.data
IncludeDir byte 'C:\masm32\include\',0
win64dir   byte 'C:\masm64\include\',0
wininc byte 'windows.inc',0

IncHeader byte 'IFNDEF %s_INC',13,10
		  byte '%s_INC equ <1>',13,10,0
		  
IncCloser byte 13,10,'ELSE',13,10
				byte 'echo -----------------------------------------',13,10
				byte 'echo WARNING Duplicate include file %s',13,10
				byte 'echo -----------------------------------------',13,10
				byte 'ENDIF',13,10,0

;list of proto that cause compile errors with his macros
badprotos byte 'DbgWin32HeapFail',0
		  byte 'DbgWin32HeapStat',0,0
.data?
wfd 		WIN32_FIND_DATA <?>
SearchPathx byte 512 dup(?)
c64Path		byte 512 dup(?)
CurrentLine byte 1024 dup(?)
FLine		byte 1024 dup(?)
FindHandle  dd ?
IncFileSize dd ?
IncTempMem  dd ?
Handle64 	dd ?
Cptr		dd ?
hFileRead	dd ?
SizeRead    dd ?
test64		dd ?
.code
start:

;search through the include dir for all .inc files
	invoke lstrcpy,addr SearchPathx,addr IncludeDir
	invoke lstrcat,addr SearchPathx,CTEXT("*.inc")
	invoke FindFirstFile,addr SearchPathx,addr wfd
	mov FindHandle,eax
	.if eax==INVALID_HANDLE_VALUE
		invoke FindClose,FindHandle
		jmp @exit
	.else
	invoke SetCurrentDirectory,addr IncludeDir
	
	@NextFile:
		;is it windows.inc? skip if it is
		invoke HasWord,addr wfd.cFileName,addr wininc
		.if sdword ptr eax==-1

			invoke CreateFile,addr wfd.cFileName,GENERIC_READ,FILE_SHARE_READ,NULL,OPEN_EXISTING,FILE_ATTRIBUTE_ARCHIVE,NULL
			mov hFileRead,eax
			.if sdword ptr eax!=INVALID_HANDLE_VALUE
				;create a file with the same name in the 64bit dir for writing
				
				invoke CreateFile,CTEXT("c:\masm64\testall.asm"),GENERIC_READ or GENERIC_WRITE,FILE_SHARE_READ or FILE_SHARE_WRITE,NULL,OPEN_ALWAYS,FILE_ATTRIBUTE_ARCHIVE,NULL
				mov test64,eax
						invoke quicktest,test64,addr wfd.cFileName
				invoke RtlZeroMemory,addr c64Path,512
				invoke SetCurrent64File,addr wfd.cFileName,addr c64Path
				invoke CreateFile,addr c64Path,GENERIC_READ or GENERIC_WRITE,FILE_SHARE_READ or FILE_SHARE_WRITE,NULL,CREATE_ALWAYS,FILE_ATTRIBUTE_ARCHIVE,NULL
				mov Handle64,eax
				.if sdword ptr eax!=INVALID_HANDLE_VALUE
					invoke WriteIncProtect,Handle64,addr wfd.cFileName,1
					;it'd be smarter to memory map the masm32 include file for reading, but since
					;I don't care and the inc files are all small im just gonna virtualalloc and read it all in mem
					invoke GetFileSize,hFileRead,NULL
					mov IncFileSize,eax
					invoke VirtualAlloc,NULL,IncFileSize,MEM_COMMIT,PAGE_READWRITE
					mov IncTempMem,eax
					invoke SetFilePointer,hFileRead,0,0,FILE_BEGIN
					invoke ReadFile,hFileRead,IncTempMem,IncFileSize,ADDR SizeRead,0
					invoke CloseHandle,hFileRead
					
					mov Cptr,1
					
					;read the file thats in memory line by line, this is lot better then reading the .inc off the disk over and over
					@nextline:
					invoke RtlZeroMemory,addr CurrentLine,1024
					invoke readline,IncTempMem,addr CurrentLine,Cptr
					test eax,eax
					jz @cleanup
					mov Cptr,eax
					;does it have a varage param? if so exit
					invoke HasWord,addr CurrentLine,CTEXT("VARARG")
					cmp eax,-1
					jne @skipline

					;is this a proto? if not skip
					invoke IsAProto,addr CurrentLine
					test eax,eax
					jnz @skipline
					
					;replaces all DWORD with QWORD
					invoke ReplaceDWORDS,addr CurrentLine,1024
					;format to the new PROTO64 macro style
					invoke RtlZeroMemory,addr FLine,1024
					invoke Proto64Format,addr CurrentLine,addr FLine
					;write the new proto
					invoke WriteLine,Handle64,addr FLine
					@skipline:
					invoke Sleep,1
					cmp Cptr,0
					jne @nextline
					@cleanup:
					invoke WriteIncProtect,Handle64,addr wfd.cFileName,0
					invoke CloseHandle,Handle64
					invoke VirtualFree,IncTempMem,IncFileSize,MEM_DECOMMIT
				.endif
			.endif
		.endif
	invoke Sleep,1
	invoke FindNextFile,FindHandle,addr wfd
	test eax,eax
	jnz @NextFile
	invoke FindClose,FindHandle
	.endif
	
@exit:
invoke MessageBox,0,CTEXT("Conversion Complete"),CTEXT("Complete"),MB_ICONINFORMATION
invoke ExitProcess,0
;assumes input line isn't longer than 1024 bytes
HasWord proc iData:DWORD,iWord:DWORD
LOCAL obuf[1024]:BYTE
LOCAL lbuf[1024]:BYTE
invoke RtlZeroMemory,addr obuf,1024
invoke lstrcpy,addr obuf,iData
invoke szLower,addr obuf

invoke RtlZeroMemory,addr lbuf,1024
invoke lstrcpy,addr lbuf,iWord
invoke szLower,addr lbuf

invoke lstrlen,addr lbuf
mov ecx,eax
invoke BinSearch,0,addr obuf,1024,addr lbuf,ecx	
ret
HasWord endp

SetCurrent64File proc iPath:DWORD,oPath:DWORD
invoke wsprintf,oPath,CTEXT("%s%s"),addr win64dir,iPath
ret
SetCurrent64File endp

ReplaceDWORDS proc iBuf:DWORD,iLen:DWORD
LOCAL curpos:DWORD
mov curpos,1
mov curpos,0
searchagain:
invoke BinSearch,curpos,iBuf,iLen,CTEXT("DWORD"),5	
.if sdword ptr eax!=-1
	mov curpos,eax
	mov ecx,iBuf
	add ecx,curpos
	mov byte ptr [ecx],'Q'
	jmp searchagain
.endif
ret
ReplaceDWORDS endp

IsAProto proc iData:DWORD
LOCAL protoname[512]:BYTE
invoke RtlZeroMemory,addr protoname,512
invoke GetToken,addr protoname,iData,32,2,FALSE	
invoke ltrim,addr protoname,addr protoname
invoke rtrim,addr protoname,addr protoname
invoke lstrcmpi,addr protoname,CTEXT("PROTO") 
ret
IsAProto endp

Proto64Format proc iData:DWORD,oBuf:DWORD
LOCAL funcname[512]:BYTE
LOCAL QWORDSB[512]:BYTE
invoke RtlZeroMemory,addr funcname,512
invoke RtlZeroMemory,addr QWORDSB,512
invoke GetToken,addr funcname,iData,32,1,FALSE
invoke GetToken,addr QWORDSB,iData,32,3,TRUE
invoke wsprintf,oBuf,CTEXT("PROTO64 external,%s,%s"),addr funcname,addr QWORDSB
ret
Proto64Format endp

WriteLine proc iHand:DWORD,iData:DWORD
LOCAL formbuf[1024]:BYTE
LOCAL byteswritten:DWORD
invoke SetFilePointer,iHand,0,0,FILE_END
invoke RtlZeroMemory,addr formbuf,1024
invoke wsprintf,addr formbuf,CTEXT("%s%c%c"),iData,13,10
invoke lstrlen,addr formbuf
mov ecx,eax
invoke WriteFile,iHand,addr formbuf,ecx,addr byteswritten,0
ret
WriteLine endp

;generates a file with all include/libs, skips windows.inc
quicktest proc ihand:DWORD,inName:DWORD
LOCAL funcname[512]:BYTE	
LOCAL funcname2[512]:BYTE	
invoke RtlZeroMemory,addr funcname2,512
invoke lstrlen,inName
sub eax,3
mov ecx,eax
invoke lstrcpyn,addr funcname2,inName,ecx
invoke lstrcat,addr funcname2,CTEXT(".lib")
invoke wsprintf,addr funcname,CTEXT("c:\Masm64\Lib\%s"),addr funcname2

invoke CreateFile,addr funcname,GENERIC_READ,FILE_SHARE_READ,NULL,OPEN_EXISTING,FILE_ATTRIBUTE_ARCHIVE,NULL
cmp eax,INVALID_HANDLE_VALUE
je @skip
invoke CloseHandle,eax


invoke RtlZeroMemory,addr funcname,512
invoke wsprintf,addr funcname,CTEXT("include \Masm64\Include\%s"),inName
invoke WriteLine,ihand,addr funcname

invoke RtlZeroMemory,addr funcname,512
invoke RtlZeroMemory,addr funcname2,512
invoke lstrlen,inName
sub eax,3
mov ecx,eax
invoke lstrcpyn,addr funcname2,inName,ecx
invoke lstrcat,addr funcname2,CTEXT(".lib")
invoke wsprintf,addr funcname,CTEXT("includelib \Masm64\Lib\%s"),addr funcname2
invoke WriteLine,ihand,addr funcname
@skip:
ret
quicktest endp

WriteIncProtect proc ihand:DWORD,iName:DWORD,iType:DWORD
LOCAL funcname[512]:BYTE
LOCAL formedbuff[1024]:BYTE	
invoke RtlZeroMemory,addr funcname,512
invoke RtlZeroMemory,addr formedbuff,1024

.if iType==1
	invoke lstrlen,iName
	sub eax,3
	mov ecx,eax
	invoke lstrcpyn,addr funcname,iName,ecx
	invoke szUpper,addr funcname
	invoke wsprintf,addr formedbuff,addr IncHeader,addr funcname,addr funcname
.else
	invoke lstrcpy,addr funcname,iName
	invoke wsprintf,addr formedbuff,addr IncCloser,addr funcname
.endif
invoke WriteLine,ihand,addr formedbuff
ret
WriteIncProtect endp

GetToken proc uses eax ecx esi edi dwBuffer:dword, dwString:dword, bSeperator:byte, dwNumber:dword, bGetAll:byte
mov ecx, 0
mov esi, dwString
mov edi, dwBuffer
@@:
lodsb
.if al == 0
  stosb
  jmp @F
.elseif al == bSeperator
  inc ecx
 .if ecx == dwNumber
    .if bGetAll == FALSE
      mov al, 0
      stosb
      jmp @F
    .endif  
  .elseif
    .if bGetAll == TRUE 
      .if ecx < dwNumber
        mov edi, dwBuffer  
      .endif  
    .else
      mov edi, dwBuffer  
      jmp @B
    .endif
  .endif  
.endif
stosb
jmp @B
@@:
ret
GetToken endp
end start