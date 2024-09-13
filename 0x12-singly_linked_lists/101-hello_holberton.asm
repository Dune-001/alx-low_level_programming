section .data
    format db "Hello, Holberton", 10, 0  ; The format string with a newline

section .text
    global main
    extern printf

main:
    ; Set up the stack frame
    push rbp
    mov rbp, rsp

    ; Prepare the arguments for printf
    mov rdi, format  ; First argument: the format string
    xor rax, rax     ; Clear rax to indicate no floating-point arguments

    ; Call printf
    call printf

    ; Clean up the stack frame
    pop rbp
    mov rax, 0       ; Return 0
    ret
