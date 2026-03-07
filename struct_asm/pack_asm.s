	.globl packet_set

packet_set:
	mov %sil, (%rdi)
	mov %edx, 4(%rdi)
	ret
