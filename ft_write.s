section .text
	global _ft_write

_ft_write:                           ;1RDI 2RSI 3RDX
	cmp			rdi, 0
	jl			error
	cmp			rsi, 0
	je			error
	cmp			rdx, 0
	jle			error
	mov			rax, 0x2000004
	syscall
	ret

error:
	mov rax, -1
	ret