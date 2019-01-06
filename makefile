magic: magic.o utils.o
	gcc -g -ansi -Wall magic.o utils.o -o magic

magic.o: magic.c
	gcc -c -ansi -Wall magic.c -o magic.o

utils.o: utils.c
	gcc -c -ansi -Wall utils.c -o utils.o
