#include "headers/polish_notation.h"

int main() {
    char *buf;
    buf = calloc(256, sizeof(char));
    // scanf("%s", buf);
    // if (s21_polish_notation(buf) == -1)
        // return 0;
    // printf("%s\n\n\n", buf);
    int i;
    list *head;
    for (i = 0; i < 10; i++) {
        sprintf(buf, "%d", i);
        push(&head, buf);
        printf("buf = %s ", buf);
        printf("peek = %s\n", peek_lex(head));
    }
    int sizer = get_size_stack(head);
    printf("size = %d\n\n", get_size_stack(head));
    for (int i = 0; i < sizer; i++) {
        printf("stack = %s\n", pop(&head));
        head = head->next;
    }
    free(buf);
    return 0;
}
