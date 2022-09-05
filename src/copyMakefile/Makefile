CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic
SRC = lib/*.c

main :
	$(CC) $(CFLAGS) $(SRC) main.c -o test.out

install:
	cmake calc/CMakeLists.txt
	make
	rm -rf Makefile
	cp copyMakefile/Makefile ./

unintall:
	rm -rf calc_autogen
	rm -rf calc.app
	rm -rf CMakeFiles
	rm -rf cmake_install.cmake
	rm -rf CMakeCache.txt

app:
	open calc.app

clean :
	rm -rf *.out
	rm -rf *.a
	cd build-calc-Desktop_x86_darwin_generic_mach_o_64bit-Debug && make clean
