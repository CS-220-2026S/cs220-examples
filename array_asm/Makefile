CC = gcc
CFLAGS = -std=c18 -Wall -ggdb

test : sum
	./sum

sum : sum.c asm_func.s
	${CC} sum.c asm_func.s ${CFLAGS} -o sum -z noexecstack

clean :
	-rm sum
