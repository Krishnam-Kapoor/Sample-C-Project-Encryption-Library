program:main.o
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra -o program main.o -lcodex -L./lib/

main.o:main.c
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra -c -o main.o main.c

target:program
	./program

clean:
	rm -f *o program