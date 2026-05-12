CC = gcc
CFLAGS = -std=c18 -Wall -ggdb

tryArith : tryArith.o arith.o
	${CC} tryArith.o arith.o ${CFLAGS} -o tryArith

clean :
	-rm *.o
	-rm tryArith 
