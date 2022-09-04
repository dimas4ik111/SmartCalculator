CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic
SRC = lib/*.c

main :
	$(CC) $(CFLAGS) $(SRC) main.c -o test.out

app:
	cd build-calc-Desktop_x86_darwin_generic_mach_o_64bit-Debug && make && open calc.app

clean :
	rm -rf *.out
	rm -rf *.a
	cd build-calc-Desktop_x86_darwin_generic_mach_o_64bit-Debug && make clean
