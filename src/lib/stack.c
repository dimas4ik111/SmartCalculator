#include "../headers/stack.h"

void push(list **head, char* buf) {
    list *tmp = calloc(1, sizeof(list));
    tmp->next = *head;
    tmp->lex = buf;
    *head = tmp;
}

char* pop(list **head) {
    list *out;
    char* value;
    out = *head;
    *head = (*head)->next;
    value = out->lex;
    free(out);
    return value;
}

char* peek_lex(const list *head) {
    if (head == NULL)
        return 0;
    return head->lex;
}

int peek_priority(const list *head) {
    if (head == NULL)
        return 0;
    return head->priority;
}
