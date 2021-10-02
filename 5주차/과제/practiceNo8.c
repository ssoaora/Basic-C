#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
    int year;
    int budget = 1000000;
    double rate = 0.045;

    printf("예치 기간 입력(년) >> ");
    scanf("%d", &year);

    double total = budget * (pow((1 + rate), year));

    printf("이율: 4.5%% 총금액: %.2lf", total);
    return 0;
}
