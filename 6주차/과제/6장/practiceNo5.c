#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int gender;
    double height, weight, std_weight, fatness;

    printf("������ ���� �Է��ϼ���. 1(����), 2(����): ");
    scanf("%d", &gender);

    printf("����(cm)�� ������(kg)�� �Է��ϼ���: ");
    scanf("%lf %lf", &height, &weight);

    height = height * 0.01;

    if (gender == 1)
        std_weight = height * height * 22;
    else if (gender == 2)
        std_weight = height * height * 21;

    printf("���� ����: %.2lf, ü��: %.2lf, ǥ�� ü��: %.2lf\n", height * 100, weight, std_weight);

    fatness = (weight / std_weight) * 100;
    printf("������: %.2lf, ����: ", fatness);

    if (fatness < 90)
        printf("��ü��\n");
    else if (fatness >= 90 && fatness < 110)
        printf("����\n");
    else if (fatness >= 110 && fatness < 120)
        printf("ü�� ����\n");
    else
        printf("��\n");

    return 0;
}
