OBJ= main.o utils.o align2d.o


a.out: ${OBJ}
	gcc ${OBJ} -o a.out -lm
	rm *.o

main.o: main.c align2d.o
	gcc -c main.c

align2d.o: align2d.c datatypes.h utils.o
	gcc -c align2d.c

utils.o: utils.c datatypes.h align2d.c
	gcc -c utils.c

.PHONY: clean
clean:
	rm *.o
