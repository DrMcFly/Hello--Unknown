.global _start
.intel_syntax noprefix

_start:
    
    // print 'hello'
    mov rax, 0x01
    mov rdi, 0x01
    lea rsi, [hello]
    mov rdx, 7
    syscall

    // print 'Marty'
    mov rax, 0x01
    mov rdi, 0x01
    lea rsi, [name]
    mov rdx, 8
    syscall

    //print new line
    mov rax, 0x01
    mov rdi, 0x01
    lea rsi, [newline]
    mov rdx, 1
    syscall

    // exit the program with exit status 0
    mov rax, 0x3c
    mov rdi, 0x0
    syscall



// create 'name' string
name:
    .asciz "Unknown"

// create 'hello' string
hello:
    .asciz "Hello, "

// end line
newline:
    .asciz "\n"


