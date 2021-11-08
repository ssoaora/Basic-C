#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double simple(int, int, double);
double compound(int, int, double);

int main(void)
{
    int budget, year;
    double rate;

    printf("이자를 계산할 다음 세 항목을 입력하세요.\n");

    printf("1. 원금 -> ");
    scanf("%d", &budget);

    printf("2. 년 -> ");
    scanf("%d", &year);

    printf("3. 이율(%%) -> ");
    scanf("%lf", &rate);
    rate = rate * 0.01;

    printf("단리 계산 총액은 %.3lf입니다.\n", simple(budget, year, rate));
    printf("복리 계산 총액은 %.3lf입니다.\n", compound(budget, year, rate));

    return 0;
}

double simple(int budget, int year, double rate)
{
    double simple = budget * (1 + rate * year);
    return simple;
}

double compound(int budget, int year, double rate)
{
    double compound = budget * pow((1 + rate), year);
    return compound;
}
