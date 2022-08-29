#include "headers/polish_notation.h"

int main() {
    char *buf;
    buf = calloc(256, sizeof(char));
    // scanf("%s", buf);
    char ch = 0;
    int i = 0;
    while (ch != '\n') {
        scanf("%c", &ch);
        buf[i] = ch;
        i++;
    }
    buf[i - 1] = '\0';
    // printf("buf = %s\n", buf);
    if (s21_polish_notation(buf) == -1) {
        printf("\n\nERR\n\n");
        return 0;
    }
    free(buf);
    return 0;
}
