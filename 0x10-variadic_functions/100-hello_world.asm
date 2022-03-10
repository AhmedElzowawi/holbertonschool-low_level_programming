SECTION .data
msg: db "Hello, World", 10

	SECTION .text
	global _start
_start:
	mov edx, 13
	mov ecx, msg
	mov ebx, 1
	mov eax, 4
	int 0x80

	mov ebx, 0
	mov eax, 1
	int 0x80
