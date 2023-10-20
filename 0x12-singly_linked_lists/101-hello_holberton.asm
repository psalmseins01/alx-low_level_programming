SECTION .data
    msg db "Hello, Holberton", 0
    fmt db "%s", 10, 0

SECTION .text
    extern printf
    global main

main:
    mov esi, msg      ; Load the address of the msg string into esi
    mov edi, fmt      ; Load the address of the format string into edi
    xor eax, eax      ; Clear the eax register
    call printf       ; Call the printf function

    xor eax, eax      ; Clear the eax register (optional, as it's already cleared)
    ret               ; Return from the main function

