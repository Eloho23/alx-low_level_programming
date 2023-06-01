section .data
    message db "Hello, Holberton", 0
    format db "%s", 0
    newline db 10, 0

section .text
    global main
    extern printf

main:
    sub rsp, 8

    mov rdi, format
    mov rsi, message
    xor eax, eax
    call printf

    mov rdi, format
    mov rsi, newline
    xor eax, eax
    call printf

    add rsp, 8

    xor eax, eax
    ret
