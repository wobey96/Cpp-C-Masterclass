# AARCH64 Assembly Hello World 
# Reference for AARCH64 functions: https://chromium.googlesource.com/chromiumos/docs/+/master/constants/syscalls.md#arm64-64_bit

.global _start
.section .text

_start:
    
    # write system call (system call 64)
    mov x8, #64 
    mov x0, #1 
    ldr x1, =message 
    mov x2, #13 
    svc 0 
    
    # exit system call (system call 95): This is how you exit we need help from the kernel 
    mov x8, #0x5d
    mov x0, #0x41
    svc 0

.section .data
    message:
    .ascii "Hello, World\n"