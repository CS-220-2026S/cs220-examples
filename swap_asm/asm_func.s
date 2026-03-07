	.globl swap_asm
	.globl set_asm
swap_asm:
	mov (%rdi), %eax
	mov (%rsi), %edx
	mov %edx, (%rdi)
	mov %eax, (%rsi)
	ret

set_asm:
	mov %esi, (%rdi)
	ret
