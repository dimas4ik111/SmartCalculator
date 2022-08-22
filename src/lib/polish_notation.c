#include "../headers/polish_notation.h"

int s21_polish_notation(char* str){
    if (str == NULL)
        return -1;
    while (str) {
        if (1) {  // check on number

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
            if (strspn(str, NUM_STR) > 0 && result + strspn(str, NUM_STR) != '.') {
                result += strspn(str, NUM_STR);
            } else {
                result = -1;
            }
        }
    }

    return result;
}
