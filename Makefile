program:prog.o
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra -o program prog.o -lcodex -L.

prog.o:prog.c
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra -c -o prog.o prog.c

target:program
	./program

clean:
	rm -f *o program