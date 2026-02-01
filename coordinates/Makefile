CC = gcc
CFLAGS = -Wall -std=c18 -ggdb

X = 0
Y = 0

test : coordTest
	./coordTest ${X} ${Y}

coordTest : coordTest.c coord.c coord.h
	${CC} ${CFLAGS} -o coordTest coordTest.c coord.c

clean :
	-rm coordTest
