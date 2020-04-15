SHELL = /bin/bash
CC = gcc
CFLAGS = -pthread
SRC = $(wildcard *.c)
EXE = $(patsubst %.c, %, $(SRC))

all: ${EXE}

%:	%.c
	${CC} ${CFLAGS} $@.c -o $@

clean:
	rm *-O3 *-g
