conversion: main.c conversion.c conversion.h
	gcc -o conversion conversion.c main.c -lm
	
test: test.c conversion.c conversion.h
	gcc -o test conversion.c test.c -lm
