#include <stdio.h>

int main(void)
{
    int max;
    int number1, number2, number3;

    printf("�� ���� ���� �Է� >> ");
    scanf("%d %d %d", &number1, &number2, &number3);

    max = number1;
    max = number2 > max ? number2 : max;
    max = number3 > max ? number3 : max;

    printf("���� ū ��: %d", max);

    return 0;
}
