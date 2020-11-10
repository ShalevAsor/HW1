CC=gcc
FLAGS=-Wall
AR=ar 
OBJECT_MAIN=main.o

all:	libmyMath.so libmyMath.a mains maind

myMaths:libmyMath.a
	$(CC) $(FLAGS) myMaths libmyMath.a

myMathd:libmyMath.so
	$(CC) $(FLAGS) -o myMathd libmyMath.so

libmyMath.a:basicMath.o power.o
	$(AR) -rcs libmyMath.a basicMath.o power.o

libmyMath.so:basicMath.o power.o
	$(CC) -shared -o libmyMath.so basicMath.o power.o

mains:main.o libmyMath.a
	$(CC) $(FLAGS) -o mains main.o libmyMath.a

maind: $(OBJECT_MAIN) libmyMath.so
	$(CC) $(FLAGS) -o maind $(OBJECT_MAIN) ./libmyMath.so

main.o: main.c power.c basicMath.c
	$(CC) $(FLAGS) -c main.c

power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c

basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maind 