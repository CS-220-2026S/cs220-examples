	.global add_asm
	.global inc_asm
	.global pow_asm

add_asm:
	mov %edi, %eax
	add %esi, %eax
	ret

inc_asm:
	mov %edi, %eax
	add $1, %eax
	ret
	
pow_asm:
	mov $1, %eax
	xor %edx, %edx
.L2:	
	cmp %esi, %edx
	jge .L1
	imul %edi, %eax
	inc %edx
	jmp .L2
.L1:
	ret
	
