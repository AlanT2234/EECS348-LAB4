all: task1 task2

task1: task1.o
	$(CC) task1.o -o task1

task2: task2.o
	$(CC) task2.o -o task2

task1.o: task1.c
	$(CC) $(CFLAGS) task1.c

task2.o: task2.c
	$(CC) $(CFLAGS) task2.c

clean:
	rm -rf *.o task1 task2
