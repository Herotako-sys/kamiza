CC = gcc
CFLAGS = -Wall 
CODE = main.c
LIBS = graph.h
PROGRAM = program

install:
	$(CC) $(CFLAGS) $(LIBS) $(CODE) -o $(PROGRAM)

clean:
	$(RM) $(PROGRAM)
