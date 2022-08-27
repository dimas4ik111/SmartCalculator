#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define NUM_STR "1234567890"

typedef struct node_t {
    char *lex;
    int priority;
    struct node_t *next;
} list;

void push(list **head, char* buf);
char* pop(list **head);
char* peek_lex(const list *head);
int peek_priority(const list *head);
