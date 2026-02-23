CC = gcc
CFLAGS = -std=c18 -Wall -ggdb

X = 8
Y = 3

test : arithTest
	./arithTest ${X} ${Y}

arithTest : arithTest.o arith.o arith.h
	${CC} -o arithTest arithTest.o arith.o ${CFLAGS}

clean :
	-rm arithTest *.o
