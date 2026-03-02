CC = gcc
CFLAGS = -std=c18 -Wall -ggdb

test : arith
	./arith 8 3

arith : arith.c asm_func.s
	${CC} -o arith arith.c asm_func.s ${CFLAGS} -z noexecstack

clean :
	-rm arith
