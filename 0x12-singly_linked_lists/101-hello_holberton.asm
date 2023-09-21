section .data
    hello db "Hello, Holberton",0xa,0   ; The string to print with a newline character

section .text
    global main

    extern printf
    global _start

main:
    ; Prepare arguments for printf
    mov rdi, hello   ; Format string
    call printf     ; Call printf
    ; Exit the program
    mov rax, 60     ; syscall: exit
    xor rdi, rdi    ; status: 0
    syscall

_start:
    ; Call the main function and exit
    call main
    mov rax, 60     ; syscall: exit
    xor rdi, rdi    ; status: 0
    syscall
