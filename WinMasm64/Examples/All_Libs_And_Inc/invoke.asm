include \Masm64\Macros\x64macros.inc

include testall.asm

.data
imsg byte 'this invoke feels like 32bit',0

.code
Main proc
;invoke MessageBoxA,0,addr imsg,addr imsg,5
Main endp
end