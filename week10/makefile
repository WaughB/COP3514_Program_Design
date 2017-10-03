all: dogs

readline: readline.c
	gcc readline.c -o readline.o

dogs: dogs.c
	gcc dogs.c -o dogs.o

records: records.c
	gcc records.c -o records.o

records: readline.o dogs.o records.o
	gcc readline.o dogs.o records.o -o records
