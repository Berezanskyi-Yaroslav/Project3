#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("chcp 1251 > nul");
    double num;
    printf("Введіть число з плаваючою комою: ");
    scanf("%lf", &num);
    printf("Десятковий вигляд: %lf \n", num);
    printf("Експоненціальний вигляд: %e\n", num);
    return 0;
}