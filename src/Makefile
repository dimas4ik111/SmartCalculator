CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic
SRC = lib/*.c

main :
	$(CC) $(CFLAGS) $(SRC) main.c -o test.out

install: uninstall
	qmake calculator/calculator.pro
	make
	rm -rf Makefile
	cp copyMakefile/Makefile ./

uninstall:
	rm -rf calculator.app
	rm -rf .qmake.stash
	rm -rf ./*.o
	rm -rf ./*.h
	rm -rf moc_*
	rm -rf calculator/*.user

app:
	open calculator.app

clean :
	rm -rf *.out
	rm -rf *.a
