# your asm code header here
_a:
	.zero	4
	.align	4
_b:
	.zero	4
	.align	4
_c:
	.zero	4
	.align	4


# your asm code here
	.text
	.globl _start
movl 1 %eax
addl 1 %eax
movl %eax _t0
movl _t0 _a