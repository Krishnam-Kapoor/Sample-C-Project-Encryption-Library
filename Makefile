prog:prog.o
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra -o program prog.o -lcodex -L.

prog.o:prog.c
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra -o prog.o prog.c

target:program
	./program

clean:prog.o
	rm -f *o