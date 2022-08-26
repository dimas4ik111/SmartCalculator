#include "../headers/stack.h"

int push(list **head, double num, char* operand) {
    list *tmp = calloc(1, sizeof(list));
    if (tmp == NULL)
        return -1;
    tmp->num = num;
    tmp->operand = operand;
    *head = tmp;
}

list* pop(list **head) {
    list *out;
    if ((*head) == NULL)
        return NULL;
    out = *head;
    *head = (*head)->next;
    return out;
}

char* peek_operand(const list *head) {
    if (head == NULL)
        return 0;
    return head->operand;
}

double peek_num(const list *head) {
    if (head == NULL)
        return 0;
    return head->num;
}

size_t get_size_stack(const list *head) {
    size_t size = 0;
    while (head) {
        size++;
        head = head->next;
    }
    return size;
}
