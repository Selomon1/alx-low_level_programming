Section .data
msg:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0

	Section .text
	extern printf
	global main

main:
	mov edi, fmt
	mov esi, msg
	mov eax, 0
	call printf

	mov eax, 0
	ret
