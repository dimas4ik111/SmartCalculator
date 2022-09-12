CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic
SRC = lib/calculate.c \
		lib/polish_notation.c \
		lib/stack.c
OBJ = $(SRC:.c=.o)
SRC_TEST = test/go_test.c \
			test/test.c
OBJ_TEST = $(SRC_TEST:.c=.o)
OBJ_REP_DIR = ./report_obj/
CFLAGS_T = --coverage

main : calculator.a
	$(CC) $(CFLAGS) main.c calculator.a -o test.out

calculator.a: $(OBJ) headers/polish_notation.h
	ar rcs calculator.a $(OBJ)
	ranlib calculator.a

install:
	cd calculator; qmake calculator.pro; make;

uninstall: clean
	cd calculator; make clean; rm -rf ./calculator; rm -rf Makefile;
	rm -rf calculator/.qmake.stash

app:
	open calculator/calculator.app

tests: calculator.a $(OBJ_TEST)
	$(CC) $^ -lcheck -lgcov -o my_tests
	./my_tests

gcov_report: calculator.a $(OBJ_TEST) calculate_t.o polish_notation_t.o stack_t.o
	@$(CC) $(CFLAGS) $(OBJ_REP_DIR)*.o calculator.a $(OBJ_TEST) -lcheck -lgcov -o gcov_test
	@./gcov_test
	@gcov -a -b ./report_obj/*.gcda
	@gcovr --html-details coverage.html

calculate_t.o: lib/calculate.c
	@$(CC) $(CFLAGS) $(CFLAGS_T) -c $< -o $(OBJ_REP_DIR)$@
polish_notation_t.o: lib/polish_notation.c
	@$(CC) $(CFLAGS) $(CFLAGS_T) -c $< -o $(OBJ_REP_DIR)$@
stack_t.o: lib/stack.c
	@$(CC) $(CFLAGS) $(CFLAGS_T) -c $< -o $(OBJ_REP_DIR)$@

dist:
	tar -czf CalcV1.tar.gz calculator copyMakefile headers lib Makefile main.c

dvi:
	open doc.txt

clean:
	rm -rf *.out *.am calculator.a my_tests gcov_test
	rm -rf lib/*.o test/*.o calculator/*.user
	rm -rf report_obj/* *.gcov
	rm -rf coverage.*
	rm -rf CalcV1*

.PHONY: all test clean
