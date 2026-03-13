CC = gcc
CFLAGS = -std=c18 -Wall -ggdb

test : tryMath
	./tryMath 15 6

tryMath : tryMath.c asm_func.s
	${CC} tryMath.c asm_func.s ${CFLAGS} -o tryMath -z noexecstack

clean :
	-rm tryMath
