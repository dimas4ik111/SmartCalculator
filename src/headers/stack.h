#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define NUM_STR "1234567890"


typedef struct node_t {
    double num;
    char *operand;
    struct node_t *next;
} list;

size_t get_size_stack(const list *head);
double peek_num(const list *head);
char* peek_operand(const list *head);
list* pop(list **head);
int push(list **head, double num, char* operand);

