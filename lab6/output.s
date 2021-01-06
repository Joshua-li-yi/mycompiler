.code32

# your asm code header here
	.text
	.bss
	.global	a
	.align	4
	.type	a, @object
a:
	.zero	4
	.data
	.align	4
	.size	t0, 4
t0:
	.long	0
	.align	4
	.size	t1, 4
t1:
	.long	0
	.section	.rodata
.LC0:
	.string	"test:%d\n"


# your asm code here
	.text
	.globl main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	movl	$10, a
	movl	a, %eax
	subl	$8, %esp
	pushl	%eax
	pushl	$.LC0
	call	printf
	addl	$16, %esp
	movl	$0, %eax
	popl	%ebp
	ret
	.section	.note.GNU-stack,"",@progbits
