CC = gcc
CFLAGS = -std=c18 -Wall -ggdb

test : testBits
	./testBits

testBits : testBits.c bitOps.c bitOps.h
	${CC} ${CFLAGS} -o testBits testBits.c bitOps.c

clean :
	-rm testBits
