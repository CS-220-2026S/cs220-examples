	.global sum_asm

sum_asm:
	xor %eax, %eax
	xor %rdx, %rdx
	jmp .L1
.L2:
	add (%rdi, %rdx, 4), %eax
	inc %rdx
.L1:
	cmp %edx, %esi
	jg .L2
	ret
