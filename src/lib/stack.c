#include "../headers/stack.h"

void push(list **head, double num, int oper, int prio) {
    list *tmp = calloc(1, sizeof(list));
    tmp->next = *head;
    tmp->num = num;
    tmp->operand = oper;
    tmp->priority = prio;
    *head = tmp;
}

double pop(list **head) {
    list *out;
    double value;
    out = *head;
    *head = (*head)->next;
    value = out->num;
    free(out);
    return value;
}

double peek_num(const list *head) {
    if (head == NULL)
        return 0;
    return head->num;
}

int peek_oper(const list *head) {
    if (head == NULL)
        return 0;
    return head->operand;
}

int peek_priority(const list *head) {
    if (head == NULL)
        return 0;
    return head->priority;
}
