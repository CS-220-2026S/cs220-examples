CC = gcc
CFLAGS = -std=c18 -Wall -ggdb

test : pack
	./pack L 80

pack : pack.c pack_asm.s
	${CC} pack.c pack_asm.s -o pack ${CFLAGS} -z noexecstack 

clean :
	-rm pack
