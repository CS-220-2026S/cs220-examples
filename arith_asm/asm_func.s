	.global arith_asm
.Ladd:
	mov %edi, %eax
	add %esi, %eax
	ret
.Lsub:
	mov %edi, %eax
	sub %esi, %eax
	ret

arith_asm:	

	ret
