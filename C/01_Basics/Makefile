
output: 08_main.o 08_foo.o 
	clang 08_main.o 08_foo.o -o 08_main

08_main.o: 08_main.c
	clang -c 08_main.c

08_foo.o: 08_foo.c
	clang -c 08_foo.c

target:	dependencies
	action

clean:
	rm *.o output