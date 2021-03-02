section .text
	global _ft_read

_ft_read:                           ;1RDI 2RSI 3RDX
	mov			rax, 0x2000003
	syscall
	jc			error
	ret

error:
	mov			rax, -1
	ret