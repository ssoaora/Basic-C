#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    double H;
    printf("ȭ�� �µ� �Է�: ");
    scanf("%lf", &H);

    double C = 5.0 / 9.0 * (H - 32.0);
    printf("�Էµ� ȭ�� �µ�: %d\n", H);
    printf("���� �µ�: %.4f\n", C);

    return 0;
}