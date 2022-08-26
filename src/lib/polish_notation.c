#include "../headers/polish_notation.h"

int s21_polish_notation(char* str){
    if (str == NULL)
        return -1;
    while (*str != '\0') {
        if (is_it_num(str) > 0) {  // check on number
            int len = is_it_num(str);
            char* buf;
            buf = calloc(1, sizeof(char) * len);
            strncpy(buf, str, len);
            printf("buf = %s\n", buf);
            free(buf);
            str += len;
        } else {
            str++;
        }
    }
    return 1;
}

int is_it_num(const char *str) {
    int result = strspn(str, NUM_STR);
    if (result > 0) {
        str += result;
        if (*str == '.') {
            str++;
            result++;
            if (strspn(str, NUM_STR) > 0 && str[strspn(str, NUM_STR)] != '.') {
                result += strspn(str, NUM_STR);
            } else {
                result = -1;
            }
        }
    }

    return result;
}
