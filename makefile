ABC.exe:main.o big2.o big3.o fact.o rev.o pall.o sum2.o fib.o sort.o
	gcc -o ABC.exe main.o big2.o big3.o fact.o rev.o pall.o sum2.o fib.o sort.o

main.o:main.c
	gcc -c main.c

big2.o:big2.c
	gcc -c big2.c

big3.o:big3.c
	gcc -c big3.c

fact.o:fact.c
	gcc -c fact.c

pall.o:pall.c
	gcc -c pall.c

sum2.o:sum2.c
	gcc -c sum2.c

fib.o:fib.c
	gcc -c fib.c

sort.o:sort.c
	gcc -c sort.c

rev.o:rev.c
	gcc -c rev.c
