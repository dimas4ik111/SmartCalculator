#include "headers/polish_notation.h"

int main() {
    char *buf;
    buf = calloc(256, sizeof(char));
    scanf("%s", buf);
    if (s21_polish_notation(buf) == -1)
        return 0;
    // printf("%s\n\n\n", buf);
    return 0;
}
