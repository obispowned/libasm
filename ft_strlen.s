section .text
	global ft_strlen

ft_strlen:
	mov	rax, -1
	jmp	while

while:
	inc		rax
	cmp		BYTE [rdi + rax], 0
	je		exit
	jmp		while

exit:
	ret