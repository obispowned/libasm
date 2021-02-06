segment .text
	global _ft_strlen

_ft_strlen:
	mov	rax, -1
	jmp	while

while:
	inc		rax
	cmp		BYTE [rdi + rax], 0
	je		exit
	jmp		while

exit:
	ret