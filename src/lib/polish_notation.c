#include "../headers/polish_notation.h"

int s21_polish_notation(char* str){
    if (str == NULL)
        return ERROR;
    int err = 0;
    int stop = strlen(str);
    list *work = NULL;
    list *oper = NULL;
    int prev_oper = 0;
    for (size_t i = 0; i < stop;) {
        printf("*str = %c\n", *str);
        if (((prev_oper && *str == '-') || (i == 0 && *str == '-')) && is_it_num(str + 1) > 0) {
            str++;
            push_num(str, &work, is_it_num(str), 1);
            str += is_it_num(str);
            prev_oper = 0;
        } else if (is_it_num(str) > 0) {
            push_num(str, &work, is_it_num(str), 0);
            str += is_it_num(str);
            prev_oper = 0;
        } else if (is_it_operand(str) > 0 && i != stop - 1) {
            err = work_with_oper(str, &work, &oper);
            prev_oper = 1;
            str += err;
            i += err - 1;
        } else if (*str != '\0') {
            i = stop;
            err = -1;
        } else if (*str == '\0') {
            i = stop;
        }
        if (err == -1) {
            i = stop;
        }
    }
    printf("peek = %s\n", peek_lex(work));
    return err;
}

int work_with_oper(const char *str, list **work, list **oper) {
    char* buf = NULL;
    int result = 0;
    if (*str == '(') {
        push(oper, "(");
        (*oper)->priority = 0;
        result = 1;
    } else if (*str == ')') {
        while (peek_lex(*oper) != "(") {
            push(work, pop(oper));
        }
        result = 1;
    } else if (peek_lex(*oper) == NULL) {
        buf = calloc(1, sizeof(char) * is_it_operand(str));
        strncpy(buf, str, is_it_num(str));
        push(oper, buf);
        (*oper)->priority = priority_oper(buf);
        result = is_it_num(str);
        free(buf);
    } else if (peek_lex(*oper) != NULL) {  // wich oper have hight priority
        buf = calloc(1, sizeof(char) * is_it_operand(str));
        strncpy(buf, str, is_it_num(str));
        int prio_buf = priority_oper(buf);
        if (prio_buf > peek_priority(*work)) {
            push(oper, buf);
            (*oper)->priority = prio_buf;
        } else {
            push(work, pop(work));
            push(oper, buf);
            (*oper)->priority = prio_buf;
        }
        free(buf);
    }
    return result;
}

int priority_oper(char *buf) {
    int res = 0;
    if (*buf == '+' || *buf == '-') {
        res = 1;
    } else if (*buf == '*' || *buf == '/' || *buf == '%') {
        res = 2;
    } else if (buf == "sin(" || buf == "cos(" || buf == "tan(" ||
        buf == "asin(" || buf == "acos(" || buf == "atan(") {
        res = 3;
    } else if (*buf == '^') {
        res = 4;
    }
    return res;
}

void push_num(char* str, list **work, int len, int unary_minus) {
    char *buf = calloc(1, sizeof(char) * (len + unary_minus));
    if (unary_minus) {
        strncpy(buf, str, len);
        double f = 0.0;
        f = atof(buf);
        f = -f;
        sprintf(buf, "%f", f);
    } else {
        strncpy(buf, str, len);
    }
    push(work, buf);
    free(buf);
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
    int result = 0;
    if (*str == '+' || *str == '-' || *str == '(' || *str == ')' ||
        *str == '*' || *str == '/' || *str == '%' || *str == '^') {
        result = 1;
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
