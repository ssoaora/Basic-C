#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int input, sum = 0;

    printf("���� ���� �Է�: ");
    scanf("%d", &input);

    for (int i = 1; i <= input; i++)
        sum += i;

    printf("1���� %d���� ��: %d\n", input, sum);

    return 0;
}
