#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double height, weight;
    
    printf("Ű �Է�: ");
    scanf("%lf", &height);

    printf("������ �Է�: ");
    scanf("%lf", &weight);

    double result = (height - 100) * 0.9;
    weight <= result ? printf("����� ���� �Դϴ�.") : printf("����� �� �Դϴ�.");

    return 0;
}
