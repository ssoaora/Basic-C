#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double height, weight, result;

    printf("����(cm)�� ������(kg)�� �Է��ϼ���: ");
    scanf("%lf %lf", &height, &weight);

    height = height * 0.01;
    result = weight / (height * height);
    printf("����: %.2lf, ������: %.2lf, BMI����: %.2lf ", height, weight, result);

    if (result >= 40)
        printf("�� ��\n");
    else if (result >= 35 && result < 40)
        printf("�ߵ ��\n");
    else if (result >= 30 && result < 35)
        printf("��\n");
    else if (result >= 25 && result < 30)
        printf("��ü��\n");
    else if (result >= 18.5 && result < 25)
        printf("����\n");
    else
        printf("��ü��\n");

    return 0;
}
