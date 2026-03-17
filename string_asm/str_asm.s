	.global strlen_asm
	.global strcpy_asm

strlen_asm:
	xor %eax, %eax
	xor %rdx, %rdx
	jmp .L1
.L2:
	inc %eax
	inc %rdx
.L1:
	mov (%rdi, %rdx, 1), %cl
	test %cl, %cl
	jne .L2
	ret

strcpy_asm:

        ret
