;;;    Code to output a line to STDOUT
;;;    output is:	Hello Holberton, followed by a new line

	section .data 		; data section
message:		db 'Hello, Holberton', 0x0A ; message with new line

	section .text		; code section
	global main

main:

        pushq   %rbp
	movq    %rsp, %rbp
	movl    $.LC0, %edi
	call    puts
	movl    $0, %eax
	popq    %rbp
	ret
