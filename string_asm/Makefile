CC = gcc
CFLAGS = -std=c18 -Wall -ggdb

test : strTest
	./strTest

strTest : strTest.c str_asm.s
	${CC} strTest.c str_asm.s ${CFLAGS} -o strTest -z noexecstack

clean :
	-rm strTest
