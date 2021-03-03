section .text
	global _ft_strcpy
;        args:   1RDI 2RSI 3RDX
_ft_strcpy:
	mov		rcx, -1
	jmp		while

while:
	inc		rcx
	mov		dl, BYTE [rsi + rcx]
	mov		BYTE [rdi + rcx], dl
	cmp		dl, 0
	je		return
	jmp		while

return:
	mov		rax, rdi				;SF
	ret