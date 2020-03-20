;; -----------------------------------------------------------------------------
;;  Writes "Hello, Holberton" to the console using a C library. Runs on Linux.
;;
;;
;;  ----------------------------------------------------------------------------

	          global    main
	          extern    printf
		  extern    exit

	          section   .text
main:
		  mov       rax, 0
		  mov       rdi, hello
	          call      printf
	          call      exit
message:
hello	          db        "Hello, Holberton", 0xa, 0
