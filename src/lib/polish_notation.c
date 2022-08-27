#include "../headers/polish_notation.h"

int s21_polish_notation(char* str){
    if (str == NULL)
        return ERROR;
    int err = 0;
    int check = 0;
    int exit_index = strlen(str) - 1;
    while (*str != '\0') {
        if (is_it_num(str) > 0) {  // check on number
            int len = is_it_num(str);
            if (len == ERROR) {
                err = -1;
                printf("ERROR CONTEXT\n");
                break;
            }
            char* buf;
            buf = calloc(1, sizeof(char) * len);
            strncpy(buf, str, len);
            printf("buf = %s\n", buf);
            free(buf);
            str += len;
            check += len;
        } else if (is_it_operand(str) > 0) {  // check on operand
            if (check == exit_index) {
                err = -1;
                break;
            }

            int len = is_it_operand(str);
            if (len > 3) {
                char* buf;
                buf = calloc(1, sizeof(char) * len);
                strncpy(buf, str, len);
                printf("buf = %s\n", buf);
                free(buf);
                str += len;
                check += len;
            } else {  // check on close ')'
                printf("buf = %c\n", *str);
                str++;
                check++;
            }
        } else if (is_it_operand(str) == 0) {
            printf("buf = )\n");
            str++;
            check++;
        } else {
            if (check == 0 || check == exit_index) {
                err = -1;
                break;
            }
            str++;
            check++;
        }
    }
    return err;
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
                result = ERROR;
            }
        }
    }
    return result;
}

int is_it_operand(const char *str) {
    int result = ERROR;
    if (*str == '+' || *str == '-') {
        result = 1;
    } else if (*str == '*' || *str == '/' || *str == '%') {
        result = 2;
    } else if (*str == '^') {
        result = 3;
    } else if (*str == ')') {
        result = 0;
    } else {
        result = is_it_trigonometry(str);
    }
    return result;
}

int is_it_trigonometry(const char *str) {
    int res = -1;
    if (strstr(str, "sin(") != NULL) {
        res = 4;
    } else if (strstr(str, "cos(") != NULL) {
        res = 4;
    } else if (strstr(str, "tan(") != NULL) {
        res = 4;
    } else if (strstr(str, "asin(") != NULL) {
        res = 5;
    } else if (strstr(str, "acos(") != NULL) {
        res = 5;
    } else if (strstr(str, "atan(") != NULL) {
        res = 5;
    }
    return res;
}
