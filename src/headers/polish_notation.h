#ifndef SRC_HEADERS_POLISH_NOTATION_H_
#define SRC_HEADERS_POLISH_NOTATION_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "stack.h"

#define ERROR -1

int s21_polish_notation(char* buf);
int is_it_num(const char *str);
int is_it_operand(const char *str);
int is_it_trigonometry(const char *str);

#endif  // SRC_HEADERS_POLISH_NOTATION_H_