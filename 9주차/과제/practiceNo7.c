#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double simple(int, int, double);
double compound(int, int, double);

int main(void)
{
    int budget, year;
    double rate;

    printf("���ڸ� ����� ���� �� �׸��� �Է��ϼ���.\n");

    printf("1. ���� -> ");
    scanf("%d", &budget);

    printf("2. �� -> ");
    scanf("%d", &year);

    printf("3. ����(%%) -> ");
    scanf("%lf", &rate);
    rate = rate * 0.01;

    printf("�ܸ� ��� �Ѿ��� %.3lf�Դϴ�.\n", simple(budget, year, rate));
    printf("���� ��� �Ѿ��� %.3lf�Դϴ�.\n", compound(budget, year, rate));

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
