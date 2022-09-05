#ifndef SRC_HEADERS_POLISH_NOTATION_H_
#define SRC_HEADERS_POLISH_NOTATION_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "stack.h"

#define ERROR -1

int s21_polish_notation(char* buf, double *num);
int is_it_num(const char *str);
int is_it_operand(const char *str);
int is_it_function(const char *str);
void push_num(char* str, list **work, int len, int unary_minus);
int work_with_oper(const char *str, list **work, list **oper, int unary_minus);
int priority_oper(char *buf);
int wich_opearnd(char* buf);
void print_polish(list *stack);
int error_operand(const char *buf, int i, int stop_val);
double calculator_algorithm(list *stack);
double binary_calc(double a, double b, int oper);
double unary_calc(double a, int oper);

#endif  // SRC_HEADERS_POLISH_NOTATION_H_