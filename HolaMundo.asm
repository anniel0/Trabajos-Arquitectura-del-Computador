.data
	palabra: .asciiz "Hola Mundo\n" 
.text
	li $v0,4
	la $a0,palabra
	syscall