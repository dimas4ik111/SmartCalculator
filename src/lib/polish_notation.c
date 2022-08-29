#include "../headers/polish_notation.h"

int s21_polish_notation(char* str){
    if (str == NULL)
        return ERROR;
    int err = 0;
    int stop = strlen(str);
    list *work = NULL;
    list *oper = NULL;
    int num_counter = 0;
    int oper_counter = 0;
    int x_counter = 0;
    int br_counter = 0;
    for (int i = 0; i < stop;) {
        if (*str == '(' || *str == ')')
            br_counter++;
        if (*str == 'x') {
            push(&work, 0, 0, 999);
            x_counter++;
            str++;
            i++;
        } else if (is_it_num(str) > 0) {
            i += is_it_num(str);
            push_num(str, &work, is_it_num(str), 0);
            str += is_it_num(str);
            num_counter++;
        } else if (is_it_operand(str) > 0) {
            if (error_operand(str, i, stop - 1)) {
                err = -1;
            } else {
                err = work_with_oper(str, &work, &oper);
                str += is_it_operand(str);
                i += err;
                oper_counter++;
            }
        } else if (*str == ' ') {
            str++;
            i++;
        } else if (*str == '\0') {
            i = stop;
        } else {
            err = -1;
        }

        if (err == -1) {
            break;
        }
    }
    while (oper) {
        push(&work, peek_num(oper), peek_oper(oper), 0);
        pop(&oper);
    }
    if ((oper_counter == 0 || num_counter == 0 || br_counter % 2 != 0) && x_counter == 0) {
        err = -1;
    } else {
        print_polish(work);
    }
    return err;
}

int work_with_oper(const char *str, list **work, list **oper) {
    char* buf = NULL;
    int result = 0;
    if (*str == '(') {
        push(oper, 0, OPEN_BR, 0);
        result = 1;
    } else if (*str == ')') {
        while (peek_oper(*oper) != OPEN_BR) {
            push(work, 0, peek_oper(*oper), (*oper)->priority);
            pop(oper);
        }
        pop(oper);
        result = 1;
    } else {
        buf = calloc(1, sizeof(char) * is_it_operand(str));
        strncpy(buf, str, is_it_operand(str));
        int prio_buf = priority_oper(buf);
        if (prio_buf > peek_priority(*oper) || *oper == NULL) {
            push(oper, 0, wich_opearnd(buf), prio_buf);
        } else {
            while (prio_buf <= peek_priority(*oper) && *oper != NULL) {
                if (peek_oper(*oper) == OPEN_BR)
                    break;
                push(work, 0, peek_oper(*oper), peek_priority(*oper));
                pop(oper);
            }
            push(oper, 0, wich_opearnd(buf), prio_buf);
        }
        free(buf);
    }
    return result;
}

int wich_opearnd(char* buf) {
    int res = 0;
    if (strstr(buf, "+")) {
        res = PLUS;
    } else if (strstr(buf, "-")) {
        res = MINUS;
    } else if (strstr(buf, "*")) {
        res = MUL;
    } else if (strstr(buf, "/")) {
        res = DIV;
    } else if (strstr(buf, "%")) {
        res = MOD;
    } else if (strstr(buf, "sin")) {
        res = SIN;
    } else if (strstr(buf, "cos")) {
        res = COS;
    } else if (strstr(buf, "tan")) {
        res = TAN;
    } else if (strstr(buf, "asin")) {
        res = ASIN;
    } else if (strstr(buf, "acos")) {
        res = ACOS;
    } else if (strstr(buf, "atan")) {
        res = ATAN;
    } else if (strstr(buf, "^")) {
        res = POW;
    } else if (strstr(buf, "sqrt")) {
        res = SQRT;
    }
    return res;
}

int priority_oper(char *buf) {
    int res = 0;
    if (strlen(buf) > 1)
        while (*buf == ' ')
            buf++;
    if (*buf == '+' || *buf == '-') {
        res = 1;
    } else if (*buf == '*' || *buf == '/' || *buf == '%') {
        res = 2;
    } else if (strstr(buf, "sin") || strstr(buf, "cos") || strstr(buf, "tan") ||
        strstr(buf, "asin") || strstr(buf, "acos") || strstr(buf, "atan")) {
        res = 4;
    } else if (*buf == '^') {
        res = 3;
    }
    return res;
}

void push_num(char* str, list **work, int len, int unary_minus) {
    char *buf = calloc(1, sizeof(char) * len);
    strncpy(buf, str, len);
    double num = atof(buf);
    if (unary_minus)
        num = -num;
    push(work, num, 0, 0);
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
    if (strstr(str, "sin") != NULL) {
        res = 3;
    } else if (strstr(str, "cos") != NULL) {
        res = 3;
    } else if (strstr(str, "tan") != NULL) {
        res = 3;
    } else if (strstr(str, "asin") != NULL) {
        res = 4;
    } else if (strstr(str, "acos") != NULL) {
        res = 4;
    } else if (strstr(str, "atan") != NULL) {
        res = 4;
    }
    return res;
}

void print_polish(list *head) {
    printf("\n\nNOTATION:\n");
    list *stack = NULL;
    while (head) {
        push(&stack, peek_num(head), peek_oper(head), peek_priority(head));
        pop(&head);
    }
    while (stack) {
        if (peek_oper(stack) == 0) {
            if (peek_priority(stack) == 999) {
                printf("x ");
            } else {
                printf("%d ", (int)peek_num(stack));
            }
        } else {
            switch(peek_oper(stack)) {
                case PLUS:
                    printf("+ ");
                    break;
                case MINUS:
                    printf("- ");
                    break;
                case MUL:
                    printf("* ");
                    break;
                case DIV:
                    printf("/ ");
                    break;
                case MOD:
                    printf("%% ");
                    break;
                case SIN:
                    printf("sin ");
                    break;
                case COS:
                    printf("cos ");
                    break;
                case TAN:
                    printf("tan ");
                    break;
                case ASIN:
                    printf("asin ");
                    break;
                case ACOS:
                    printf("acos ");
                    break;
                case ATAN:
                    printf("atan ");
                    break;
                case POW:
                    printf("^ ");
                    break;
                case SQRT:
                    printf("sqrt ");
                    break;
            }
        }
        pop(&stack);
    }
    printf("\n");
}

int error_operand(const char *buf, int i, int stop_val) {
    int res = 0;
    if (i == 0 && is_it_trigonometry(buf) < 0 && *buf != '-' && strstr(buf, "sqrt") != NULL) {
        res = 1;
    } else if (i == stop_val && *buf != ')') {
        res = 1;
    }
    return res;
}
