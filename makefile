all: parse.o
	gcc parse.o

parse.o: parse.c
	gcc -c parse.c

run:
	./a.out

clear:
	rm *.o
	rm *.out
