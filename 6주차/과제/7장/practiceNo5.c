#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int i, input;

    printf("����� ������ 2 ~ 9 ������ ���� �Է� >> ");
    scanf("%d", &input);

    if (input <= 1 || input > 9)
    {
        printf("������ �´� ������ �Է����ּ���.\n");
        return 0;
    }

    for (i = 1; i <= 9; i++)
    {
        printf("%d* %d =%d ", input, i, (input * i));
    }

    printf("\n");

    return 0;
}
