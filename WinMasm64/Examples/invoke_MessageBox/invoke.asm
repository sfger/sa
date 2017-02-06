include \Masm64\Macros\x64macros.inc

;include \Masm64\Include\user32.inc
proto64 external,MessageBoxA,qword,qword,qword,dword
includelib \Masm64\Lib\user32.lib


.data
imsg byte 'this invoke feels like 32bit',0

.code
Main proc
invoke MessageBoxA,0,addr imsg,addr imsg,5
Main endp
end