global  main
        extern  printf

section .data
        msg     db      "Hello, Holberton", 0xA
                db      0

section .text
main:
        mov     rdi, msg
        xor     eax, eax
        call    printf
        mov     eax, 0
        ret
