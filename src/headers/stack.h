#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define NUM_STR "1234567890"

typedef struct node_t {
    double num;
    int operand;
    int priority;
    struct node_t *next;
} list;

enum opers {
    PLUS = 1,
    MINUS = 2,
    MUL = 3,
    DIV = 4,
    MOD = 5,
    SIN = 6,
    COS = 7,
    TAN = 8,
    ASIN = 9,
    ACOS = 10,
    ATAN = 11,
    POW = 12,
    SQRT = 13,
    OPEN_BR = 14,
    CLOSE_BR = 15,
    UNARY_MIN = 16
};

void push(list **head, double num, int oper, int prio);
double pop(list **head);
double peek_num(const list *head);
int peek_oper(const list *head);
int peek_priority(const list *head);
