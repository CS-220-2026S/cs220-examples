	.global gcd_asm
	.global lcm_asm

gcd_asm:
	mov %edi, %eax #move a into return register
	test %esi, %esi #check if b is 0
	je .L0
	mov %esi, %edi #move b to edi
	xor %edx, %edx
	idiv %esi
	mov %edx, %esi #mov remainder of a/b to esi  
	call gcd_asm
.L0:
	ret
lcm_asm:
	push %rbx
	mov %edi, %ebx
	imul %esi, %ebx #product in ebx
	call gcd_asm #gcd now in eax
	mov %eax, %ecx
	mov %ebx, %eax #move product to eax
	xor %edx, %edx
	idiv %ecx #quotient now in eax
	pop %rbx
	ret 
