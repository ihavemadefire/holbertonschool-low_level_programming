;; -----------------------------------------------------------------------------
;;  Writes "Hello, Holberton" to the console using a C library. Runs on Linux.
;;
;;
;;  ----------------------------------------------------------------------------

segment .text
	global	main
	extern	printf
	extern	exit
main:
	mov	rax, 0
	mov	rdi, hello
	call	printf
	call	exit

segment .data
hello db "Hello, Holberton", 0xa, 0
