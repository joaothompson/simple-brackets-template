CC=gcc
CFLAGS=-I.

hellomake: test.o student.o
	$(CC) -o test test.o student.o
clean:
	rm -rf student.o test test.o
