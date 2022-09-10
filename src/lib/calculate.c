#include "../headers/polish_notation.h"

double calculator_algorithm(list *stack, int graph, double X, int *err) {
    list *head = NULL;
    list *work = NULL;
    double res = 0;
    double x = X;
    while (stack) {
        push(&head, peek_num(stack), peek_oper(stack), peek_priority(stack));
        pop(&stack);
    }
    while (head) {
        if (peek_oper(head) == 0) {
            if (peek_priority(head) == 999 && graph) {
                push(&work, x, 0, 0);
            } else if (peek_priority(head) == 999 && !graph) {
                *err = -1;
                break;
            } else {
                push(&work, peek_num(head), 0, 0);
            }
        } else {
            if ((peek_oper(head) >= PLUS && peek_oper(head) <= MOD) ||
                peek_oper(head) == POW) {
                double a = pop(&work);
                double b = pop(&work);
                res = binary_calc(b, a, peek_oper(head));
                push(&work, res, 0, 0);
            } else {
                res = unary_calc(pop(&work), peek_oper(head));
                push(&work, res, 0, 0);
            }
        }
        pop(&head);
    }
    while (work != NULL)
        pop(&work);
    // printf("RESULT = %f\n", res);
    return res;
}

double binary_calc(double a, double b, int oper) {
    double res = 0;
    switch (oper) {
        case PLUS:
            res = a + b;
            break;
        case MINUS:
            res = a - b;
            break;
        case MUL:
            res = a * b;
            break;
        case DIV:
            res = a / b;
            break;
        case MOD:
            res = fmod(a, b);
            break;
        case POW:
            res = pow(a, b);
            break;
    }
    return res;
}

double unary_calc(double a, int oper) {
    double res = 0;
    switch (oper) {
        case SIN:
            res = sin(a);
            break;
        case COS:
            res = cos(a);
            break;
        case TAN:
            res = tan(a);
            break;
        case ASIN:
            res = asin(a);
            break;
        case ACOS:
            res = acos(a);
            break;
        case ATAN:
            res = atan(a);
            break;
        case SQRT:
            res = sqrt(a);
            break;
        case UNARY_MIN:
            res = -a;
            break;
    }
    return res;
}
