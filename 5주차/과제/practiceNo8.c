#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
    int year;
    int budget = 1000000;
    double rate = 0.045;

    printf("��ġ �Ⱓ �Է�(��) >> ");
    scanf("%d", &year);

    double total = budget * (pow((1 + rate), year));

    printf("����: 4.5%% �ѱݾ�: %.2lf", total);
    return 0;
}
