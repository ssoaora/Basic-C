#include <stdio.h>

void change(double);

int main(void)
{
    double inch;
    printf("�Ÿ��� ��ġ�� �Է��ϼ���. -> ");
    scanf("%lf", &inch);

    change(inch);

    return 0;
}

void change(double a)
{
    double cm = a * 2.54;
    printf("�Է��� %lf��ġ�� %lf��Ƽ�����̴�.\n", a, cm);
}
