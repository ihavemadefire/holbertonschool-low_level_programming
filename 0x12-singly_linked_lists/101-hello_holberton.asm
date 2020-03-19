;;;    Code to output a line to STDOUT
;;;    output is:	Hello Holberton, followed by a new line

	section .data 		; data section
message:		db 'Hello, Holberton', 0x0A ; message with new line

	section .text		; code section
	global main

main:

	mov	edx, 17         ; carve out enough memory for message
	mov 	ecx, message    ; assign message to memory register
	mov	ebx, 1		; mov from register to stdout
	mov 	eax, 4		; stdout
	int 	0x80		; interrupt call

	mov 	ebx, 0		; exit code
	xor 	eax, 1		; output to kernel
	int 	0x80
