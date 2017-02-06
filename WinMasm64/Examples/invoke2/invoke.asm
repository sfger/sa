;created by gallo
include ..\..\Macros\x64macros.inc

includelib ..\..\Lib\Kernel32.lib
includelib ..\..\Lib\user32.lib

funcproto external,MessageBoxA,qword,qword,qword,dword
funcproto external,lstrcpyA,qword,qword

funcproto local,proc1,qword,real8,byte,word,dword,qword,real4

cstr macro text:vararg
local var
.data
var byte text,0
.code
exitm <offset var>
endm

.data
appname byte "application",0

.code
function main
begin_alloc 5
alloc_var v1{20}:byte
alloc_var v2:dword
alloc_var v3:qword
alloc_var v4:real4
alloc_var v5:real8
end_alloc

mov rcx,19
@@:
mov v1[rcx],-1

dec rcx
jns @B

mov v2,-1
mov v3,-1

invoke proc1,addr v1,v5,-1,-1,v2,v3,v4
endf
ret

function proc1,lpArray:qword,p1:real8,p2:byte,p3:word,p4:dword,p5:qword,p6:real4
begin_alloc 4
alloc_var text{20}:byte
end_alloc rax,rdi

movsd xmm0,p1
movss xmm0,p6
mov al,p2
mov ax,p3
mov eax,p4
mov rax,p5

mov rdi,lpArray

invoke lstrcpyA,addr text,cstr("x64 calling convetion!!")
invoke MessageBoxA,0,addr text,offset appname,0
endf
ret
end
