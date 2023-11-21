section .data
	e db 1
section .text
global _start
_start: mov eax, 4
        mov ebx, [e]
	int 80h
