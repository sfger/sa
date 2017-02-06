MASM64 1.0 ALPHA (very rough version,lot of foundation work still needs to be done)

Uploaded at
	March 27,2009 7:08AM
----------------------------------------------------
*word wrap on



After learning about the daunting changes in the new 64bit masm I quickly became enraged and disapointed at the direction Microsoft decided to take my beloved development tool that's been there for me in throughout the 32bit world.

Somes changes consist of

* .IF, .ELSEIF, .ELSE, .ENDIF No-longer-present :(, here's what's still in though http://msdn.microsoft.com/en-us/library/8t163bt0(VS.80).aspx

* support for stdcall,cdecl calling conventions, GONE, only FASTCALL allowed now which is IMO annoying to work with http://msdn.microsoft.com/en-us/library/ms794533.aspx

*Invoke GONE..........................................................



Now they're some people that claim these changes "don't matter" because "they didn't use them"... but that's ridiculous as it really "doesn't matter" if they did or didn't, Microsoft simply removing the option is madness and unprofessional. To quote a gifted ASM developer named BogdanOntanu who's written his own operating system, assembler etc etc 

"MACRO's and .IF .ELSEIF and INVOKE and STUCT's and PROCS with ARGS and LOCALS are of the essence for modern ASM development.
Without them ASM becomes a primitive language that can be used only for a few optimizations here and there.
With them ASM becomes a powerfully language that is well above HLL languages in both simplicity and speed of development and ease of code management. I speak from my own experience of developing huge application in ASM and comparing it with a life time of professional development in HLL.
Assemblers have become powerful when they did evolved into a "macro assembler". Removing such things as .IF / .ELSEIF from assemblers means returning to the 1970 era."


His words couldn't be more true,and foruntately the MASM32 community consists of many extremely intelligent/talented individuals who don't want MASM to die, and are started to contribute to its 64bit growth cycle.


Credit list
gallo - invoke, function,funcproto(I renamed to proto64) macros
mur   - @IF,@ELSEIF,@ELSE,@ENDIF macros
ecube(myself) - 32incTo64(simple tool that converted the old masm32 proto defs to gallos proto64 macro notation(all the .inc's in the include folder))



Notes:
There aren't many examples yet as i'm still playing around with the includes \Masm64\include, so far all of the regular PROTO definitions minus windows.inc should be defined. EQU's,STRUCTS etc needs to be updated/or confirmed to be valid from the 32bit listings. The great macros
from gallo have some bugs in them, so if you want to contribute examples or anything else, just post it in the 64bit section at http://www.masm32.com/board/index.php


Moving to Windows Vista x64 - x64 Assembly 
http://www.codeproject.com/KB/vista/vista_x64.aspx#x64_Assembly