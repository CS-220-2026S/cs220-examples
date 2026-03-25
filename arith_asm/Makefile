CC = gcc
CFLAGS = -std=c18

test : arith
	./arith

arith : arith.c asm_func.s
	${CC} ${CFLAGS} arith.c asm_func.s -o arith -z noexecstack

clean :
	-rm arith
