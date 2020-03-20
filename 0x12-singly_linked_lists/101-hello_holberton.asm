;; -----------------------------------------------------------------------------------------
;;  Writes "Hello, Holberton" to the console using a C library. Runs on Linux.
;;
;;
;;  ----------------------------------------------------------------------------------------

	          global    main
	          extern    printf
		  extern    exit

	          section   .text
main:				; This is called by the C library startup code
		  mov       rax, 0
		  mov       rdi, hello ; First integer (or pointer) argument in rdi
	          call      printf
	          call      exit
message:
hello	          db        "Hello, Holberton", 0xa, 0 ; Note strings must be terminated with 0 in C
