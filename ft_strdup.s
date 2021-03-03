section .text
	global _ft_strdup
	extern _ft_strlen
	extern _ft_strcpy
	extern _malloc
;        args:   1RDI 2RSI 3RDX
_ft_strdup:
	call	_ft_strlen		; hacemos strlen, necesario para saber el rango de malloc
	add		rax, 1			; agregamos el NULO
	push	rdi				; guardamos en la pila rdi
	mov		rdi, rax		; metemos en rdi el len de malloc
	call	_malloc			; llamamos a malloc
	pop		r9				; guardamos en la aux lo que hay en la pila
	mov		rdi, rax		; guardamos la "variable" malloqueada de rax en rdi
	mov		rsi, r9			; guardamos en rsi la string de 
	call	_ft_strcpy		; llamamos a strcpy para hacer la copia del string	
	ret	
