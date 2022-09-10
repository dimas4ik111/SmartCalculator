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
    double num = 0;
    if (s21_polish_notation(buf, &num, 0, 0) == -1) {
        printf("\n\nERR\n\n");
        return 0;
    }
    printf("num = %f\n", num);
    free(buf);
    return 0;
}
