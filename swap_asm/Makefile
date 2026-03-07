CC = gcc
CFLAGS = -Wall -std=c18 -ggdb

test : swap
	./swap

swap : swap.c asm_func.s
	${CC} swap.c asm_func.s -o swap ${CFLAGS} -z noexecstack

clean :
	-rm swap
