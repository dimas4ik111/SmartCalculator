#include "headers/polish_notation.h"

int main() {
    char *buf;
    buf = calloc(256, sizeof(char));
    scanf("%s", buf);
    if (s21_polish_notation(buf) == -1) {
        printf("\n\nERR\n\n");
        return 0;
    }
    free(buf);
    return 0;
}
