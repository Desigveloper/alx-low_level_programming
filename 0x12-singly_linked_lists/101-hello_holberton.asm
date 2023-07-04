	global	main
	extern	printf
main:
	mov	edi, format
	xor	eax, eax
	call	printf ;calls the printf function
	mov	eax, 0 ;moves the address of the string to a register
	ret
;defines a string containt a text
format: db `Hello, Holberton\n`,0
