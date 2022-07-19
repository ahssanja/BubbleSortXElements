sort: bubble.o
	gcc bubble.o -o sort

bubble.o: src/bubble.c
	gcc -c src/bubble.c

clean:
	rm sort bubble.o Makefile~ src/bubble.c~
