;;  Writes "Hello, Holberton" to the console using a C library. Runs on Linux.
;;

segment .data
hello db "Hello, Holberton", 0xa, 0

segment .text
	global	main
	extern	printf
main:
	mov	rax, 0
	mov	rdi, hello
	call	printf
