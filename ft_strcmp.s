section .text
    global     _ft_strcmp

_ft_strcmp:
    mov     rcx, -1
    jmp     while

while:
    inc     rcx
    mov     dl, BYTE [rdi + rcx]
    mov     bl, BYTE [rsi + rcx]
    cmp     dl, 0
    je      return
    cmp     bl, 0
    je      return
    cmp     dl, bl
    jne     return
    jmp     while

return:
    movzx   rax, dl
    movzx   rcx, bl
    sub     rax, rcx
    ret