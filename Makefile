CC = gcc
CFLAGS = -c -Wall

all: prog 

prog:  task1.o task2.o 
	$(CC)  task1.o task2.o -o prog



task1.o: isEven.c
	$(CC) $(CFLAGS) task1.c

task2.o: isOdd.c
	$(CC) $(CFLAGS) task2.c

clean:
	rm -rf *.o prog

