#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int income;
    printf("소득 입력 >> ");
    scanf("%d", &income);
    printf("현재 종합소득: %d, 세율: ", income);

    income = income / 1000000;

    if (income <= 12)
        printf("6%%\n");
    else if (income > 12 && income <= 46)
        printf("15%%\n");
    else if (income > 46 && income <= 88)
        printf("24%%\n");
    else if (income > 88 && income <= 105)
        printf("35%%\n");
    else if (income > 105 && income <= 300)
        printf("38%%\n");
    else if (income > 300 && income <= 500)
        printf("40%%\n");
    else
        printf("42%%\n");

    return 0;
}
