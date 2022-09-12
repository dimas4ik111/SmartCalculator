#include "tests.h"

START_TEST(t1) {
    char *buf = (char*)calloc(256, sizeof(char));
    double res = 0;
    sprintf(buf, "1+2+3");
    s21_polish_notation(buf, &res, 0);
    ck_assert_double_eq(res, 1+2+3);
    free(buf);
}
END_TEST

START_TEST(t2) {
    char *buf = (char*)calloc(256, sizeof(char));
    double res = 0;
    sprintf(buf, "sin(1)^tan(1)+43/2*0+cos(45)");
    s21_polish_notation(buf, &res, 0);
    ck_assert_double_eq_tol(res, 1.289607, 1e-6);
    free(buf);
}
END_TEST

START_TEST(t3) {
    char *buf = (char*)calloc(256, sizeof(char));
    double res = 0;
    sprintf(buf, "tan(x)-5");
    s21_polish_notation(buf, &res, 1);
    ck_assert_double_eq_tol(res, -3.442592275, 1e-6);
    free(buf);
}
END_TEST

START_TEST(t4) {
    char *buf = (char*)calloc(256, sizeof(char));
    double res = 0;
    sprintf(buf, "5----5+66*312.24^sin(45)");
    s21_polish_notation(buf, &res, 0);
    ck_assert_double_eq_tol(res, 8762.115184, 1e-6);
    free(buf);
}
END_TEST

START_TEST(t5) {
    char *buf = (char*)calloc(256, sizeof(char));
    double res = 0;
    sprintf(buf, "5-()()()()---5+66*312.24^sin(45)");
    ck_assert_int_eq(ERROR, s21_polish_notation(buf, &res, 0));
    free(buf);
}
END_TEST

START_TEST(t6) {
    char *buf = (char*)calloc(256, sizeof(char));
    double res = 0;
    sprintf(buf, "asin(0.123)+acos(0.32)-atan(1)");
    ck_assert_int_eq(1, s21_polish_notation(buf, &res, 0));
    free(buf);
}
END_TEST

START_TEST(t7) {
    char *buf = (char*)calloc(256, sizeof(char));
    double res = 0;
    sprintf(buf, "sqrt(2536745.2354)");
    s21_polish_notation(buf, &res, 0);
    ck_assert_double_eq_tol(res, sqrt(2536745.2354), 1e-6);
    free(buf);
}
END_TEST

START_TEST(t8) {
    char *buf = (char*)calloc(256, sizeof(char));
    double res = 0;
    sprintf(buf, "sqrt(2536745.2354)%%2");
    s21_polish_notation(buf, &res, 0);
    ck_assert_double_eq_tol(res, fmod(sqrt(2536745.2354), 2), 1e-6);
    free(buf);
}
END_TEST

START_TEST(t9) {
    char *buf = (char*)calloc(256, sizeof(char));
    double res = 0;
    sprintf(buf, "1/(1+3-5)*1000");
    s21_polish_notation(buf, &res, 0);
    ck_assert_double_eq_tol(res, 1/(1+3-5)*1000, 1e-6);
    free(buf);
}
END_TEST

START_TEST(t10) {
    char *buf = (char*)calloc(256, sizeof(char));
    double res = 0;
    sprintf(buf, "x");
    s21_polish_notation(buf, &res, 5);
    ck_assert_double_eq_tol(res, 5, 1e-6);
    free(buf);
}
END_TEST

START_TEST(t11) {
    list *lol = NULL;
    ck_assert_int_eq(0, peek_num(lol));
    ck_assert_int_eq(0, peek_oper(lol));
    ck_assert_int_eq(0, peek_priority(lol));
}
END_TEST

START_TEST(t12) {
    char *buf = (char*)calloc(256, sizeof(char));
    double res = 0;
    sprintf(buf, "1 +  2");
    s21_polish_notation(buf, &res, 0);
    ck_assert_double_eq_tol(res, 3, 1e-6);
    free(buf);
}
END_TEST

START_TEST(t13) {
    char *buf = (char*)calloc(256, sizeof(char));
    double res = 0;
    sprintf(buf, "ln(123)^log(321)-222");
    s21_polish_notation(buf, &res, 0);
    ck_assert_double_eq_tol(res, pow(log(123), log10(321))-222, 1e-6);
    free(buf);
}
END_TEST

Suite *tester(void) {
    Suite *s = suite_create("ALL");
    TCase *calculator;

    calculator = tcase_create("...");
    tcase_add_test(calculator, t1);
    tcase_add_test(calculator, t2);
    tcase_add_test(calculator, t3);
    tcase_add_test(calculator, t4);
    tcase_add_test(calculator, t5);
    tcase_add_test(calculator, t6);
    tcase_add_test(calculator, t7);
    tcase_add_test(calculator, t8);
    tcase_add_test(calculator, t9);
    tcase_add_test(calculator, t10);
    tcase_add_test(calculator, t11);
    tcase_add_test(calculator, t12);
    tcase_add_test(calculator, t13);
    suite_add_tcase(s, calculator);

    return s;
}
