section .data
    	msg db "Hello, Holberton",10 

global _start

section .text
	
	start:
    	mov rax, 1
    	mov rdi, 1
    	mov rsi, msg
    	mov rdx, 13
    	syscall
    
    	mov rax, 1
    	mov rdi, 0
    	syscall
