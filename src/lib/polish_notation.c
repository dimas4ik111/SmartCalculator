#include "../headers/polish_notation.h"

int s21_polish_notation(char* str, double* result, double X) {
    if (str == NULL)
        return ERROR;
    if (validation(str) == ERROR) {
        return ERROR;
    }
    int err = 0;
    int stop = strlen(str);
    list *work = NULL;
    list *oper = NULL;
    int num_counter = 0;
    int oper_counter = 0;
    int x_counter = 0;
    int br_counter = 0;
    int prev_oper = 1;
    for (int i = 0; i < stop;) {
        if (*str == '(' || *str == ')') {
            if (i == 0 && *str == ')') {
                err = ERROR;
            }
            br_counter++;
        }
        if (err == ERROR) {
            *result = 0;
        } else if (*str == 'x') {
            push(&work, 0, 0, 999);
            x_counter++;
            str++;
            i++;
            prev_oper = 0;
            num_counter++;
        } else if (is_it_num(str) > 0) {
            i += is_it_num(str);
            push_num(str, &work, is_it_num(str), 0);
            str += is_it_num(str);
            num_counter++;
            prev_oper = 0;
        } else if (is_it_operand(str) > 0) {
            if (error_operand(str, i, stop - 1)) {
                err = ERROR;
            } else {
                if (*str == '-' && prev_oper == 1) {
                    err = work_with_oper(str, &work, &oper, 1);
                } else {
                    err = work_with_oper(str, &work, &oper, 0);
                }
                if (*str != ')') {
                    prev_oper = 1;
                }
                str += is_it_operand(str);
                i += err;
                oper_counter++;
            }
        } else if (*str == ' ') {
            prev_oper = 0;
            str++;
            i++;
        } else if (*str == '\0') {
            i = stop;
        } else {
            err = ERROR;
        }

        if (err == ERROR) {
            break;
        }
    }
    while (oper) {
        push(&work, peek_num(oper), peek_oper(oper), 0);
        pop(&oper);
    }
    if (oper_counter == 0 && num_counter == 1 && x_counter == 1) {
        *result = X;
    } else if (br_counter % 2 != 0) {
        err = ERROR;
        *result = 0;
    } else if (num_counter == 1 && oper_counter == 0 && x_counter == 0) {
        *result = peek_num(work);
    } else {
        *result = calculator_algorithm(work, X);
        // print_polish(work);
    }
    
    return err;
}

int work_with_oper(const char *str, list **work, list **oper, int unary_minus) {
    char* buf = NULL;
    int result = 0;
    if (unary_minus == 1) {
        push(oper, 0, 16, 3);
    } else if (*str == '(') {
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
        buf = calloc(is_it_operand(str) + 1, sizeof(char));
        strncpy(buf, str, is_it_operand(str));
        int prio_buf = priority_oper(buf);
        if (prio_buf > peek_priority(*oper) || *oper == NULL) {
            push(oper, 0, wich_opearnd(buf), prio_buf);
        } else {
            int flag = 1;
            while (prio_buf <= peek_priority(*oper) && *oper != NULL && flag) {
                if (peek_oper(*oper) == OPEN_BR)
                    break;
                if (wich_opearnd(buf) == POW && peek_oper(*oper) == POW) {
                    flag = 0;
                }
                if (flag == 1) {
                    push(work, 0, peek_oper(*oper), peek_priority(*oper));
                    pop(oper);
                }
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
    } else if (strncmp(buf, "-", 1) == 0) {
        res = MINUS;
    } else if (strncmp(buf, "*", 1) == 0) {
        res = MUL;
    } else if (strncmp(buf, "/", 1) == 0) {
        res = DIV;
    } else if (strncmp(buf, "%", 1) == 0) {
        res = MOD;
    } else if (strncmp(buf, "sin", 3) == 0) {
        res = SIN;
    } else if (strncmp(buf, "cos", 3) == 0) {
        res = COS;
    } else if (strncmp(buf, "tan", 3) == 0) {
        res = TAN;
    } else if (strncmp(buf, "asin", 4) == 0) {
        res = ASIN;
    } else if (strncmp(buf, "acos", 4) == 0) {
        res = ACOS;
    } else if (strncmp(buf, "atan", 4) == 0) {
        res = ATAN;
    } else if (strncmp(buf, "^", 1) == 0) {
        res = POW;
    } else if (strncmp(buf, "sqrt", 4) == 0) {
        res = SQRT;
    } else if (strncmp(buf, "ln", 4) == 0) {
        res = LN;
    } else if (strncmp(buf, "log", 4) == 0) {
        res = LOG;
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
    } else if (strncmp(buf, "sin", 3) == 0 || strncmp(buf, "cos", 3) == 0 || strncmp(buf, "tan", 3) == 0 ||
        strncmp(buf, "asin", 4) == 0 || strncmp(buf, "acos", 4) == 0 || strncmp(buf, "atan", 4) == 0 ||
        strncmp(buf, "sqrt", 4) == 0 || strncmp(buf, "log", 4) == 0 || strncmp(buf, "ln", 4) == 0) {
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
        result = is_it_function(str);
    }
    return result;
}

int is_it_function(const char *str) {
    int res = 0;
    if (strncmp(str, "sin", 3) == 0) {
        res = 3;
    } else if (strncmp(str, "cos", 3) == 0) {
        res = 3;
    } else if (strncmp(str, "tan", 3) == 0) {
        res = 3;
    } else if (strncmp(str, "asin", 4) == 0) {
        res = 4;
    } else if (strncmp(str, "acos", 4) == 0) {
        res = 4;
    } else if (strncmp(str, "atan", 4) == 0) {
        res = 4;
    } else if (strncmp(str, "sqrt", 4) == 0) {
        res = 4;
    } else if (strncmp(str, "ln", 2) == 0) {
        res = 2;
    } else if (strncmp(str, "log", 3) == 0) {
        res = 3;
    }
    return res;
}

// void print_polish(list *head) {
//     printf("\n\nNOTATION:\n");
//     list *stack = NULL;
//     while (head) {
//         push(&stack, peek_num(head), peek_oper(head), peek_priority(head));
//         pop(&head);
//     }
//     while (stack) {
//         if (peek_oper(stack) == 0) {
//             if (peek_priority(stack) == 999) {
//                 printf("x ");
//             } else {
//                 printf("%d ", (int)peek_num(stack));
//                 // printf("%f ", peek_num(stack));
//             }
//         } else {
//             switch(peek_oper(stack)) {
//                 case PLUS:
//                     printf("+ ");
//                     break;
//                 case MINUS:
//                     printf("- ");
//                     break;
//                 case MUL:
//                     printf("* ");
//                     break;
//                 case DIV:
//                     printf("/ ");
//                     break;
//                 case MOD:
//                     printf("%% ");
//                     break;
//                 case SIN:
//                     printf("sin ");
//                     break;
//                 case COS:
//                     printf("cos ");
//                     break;
//                 case TAN:
//                     printf("tan ");
//                     break;
//                 case ASIN:
//                     printf("asin ");
//                     break;
//                 case ACOS:
//                     printf("acos ");
//                     break;
//                 case ATAN:
//                     printf("atan ");
//                     break;
//                 case POW:
//                     printf("^ ");
//                     break;
//                 case SQRT:
//                     printf("sqrt ");
//                     break;
//                 case UNARY_MIN:
//                     printf("~ ");
//                     break;
//             }
//         }
//         pop(&stack);
//     }
//     printf("\n");
// }

int error_operand(const char *buf, int i, int stop_val) {
    int res = 0;
    if (i == 0 && is_it_function(buf) < 0 && *buf != '-' && strncmp(buf, "sqrt", 4) != 0 && *buf != '(') {
        res = 1;
    } else if (i == stop_val && *buf != ')') {
        res = 1;
    }
    return res;
}

int validation(char *str) {
    if (strlen(str) > 255) {
        return ERROR;
    }
    int res = 0;
    char *buf = NULL;
    buf = (char*)calloc(strlen(str) + 1, sizeof(char));
    *buf = '\0';
    while (*str != '\0') {
        if (*str == ' ') {
            str++;
        } else if (*str == '(') {
            if (*buf == ')' || is_it_num(buf) > 0) {
                res = ERROR;
            }
            buf = str;
            str++;
        } else if (*str == ')') {
            if (*buf == '(') {
                res = ERROR;
            }
            if (is_it_operand(buf) > 0 && *buf != ')') {
                // printf("\n\nEXIT\n\n");
                res = ERROR;
            }
            buf = str;
            str++;
        } else if (is_it_operand(str) > 0) {
            if (is_it_operand(buf) > 0 && *str != '-' && *buf != ')' && is_it_function(str) == 0) {
                res = ERROR;
            }
            buf = str;
            str += is_it_operand(str);
        } else if (is_it_num(str) > 0 || *str == 'x') {
            if (*buf == ')') {
                res = ERROR;
            }
            buf = str;
            if (*str == 'x') {
                str++;
            } else {
                str += is_it_num(str);
            }
        } else {
            res = ERROR;
        }
        if (*str == '\0' && is_it_operand(buf) > 0 && *buf != ')') {
            res = ERROR;
        }
        // printf("str = %s   buf = %s\n", str, buf);
        if (res == ERROR) {
            break;
        }
    }
    return res;
}
