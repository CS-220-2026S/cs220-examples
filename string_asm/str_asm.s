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
	xor %rdx, %rdx
	jmp .L3
.L4:
	inc %rdx
.L3:
	mov (%rsi, %rdx, 1), %cl
	mov %cl, (%rdi, %rdx, 1)
	test %cl, %cl
	jne .L4
        ret
