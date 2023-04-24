#Copyrigt Armasu Octavian 315CAa
CFLAGS= -Wall -Wextra -std=c99

all : phone

build : main.o phone.o
	gcc $(CFLAGS) -o phone main.o phone.o

phone.o: phone.h phone.c
	gcc $(CFLAGS) -c -g phone.c

main.o: main.c phone.h
	gcc $(CFLAGS) -c main.c

run_phone : phone
	./phone

clean:
	rm -f *.o phone