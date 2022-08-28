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
void push_num(char* str, list **work, int len, int unary_minus);
int work_with_oper(const char *str, list **work, list **oper);
int priority_oper(char *buf);
int wich_opearnd(char* buf);
void print_polish(list *stack);

#endif  // SRC_HEADERS_POLISH_NOTATION_H_