#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void getsum(int);

int main(void)
{
    int input;

    printf("1���� n������ ���� ���� n�� �Է��Ͻÿ�. >> ");
    scanf("%d", &input);

    getsum(input);

    return 0;
}

void getsum(int max)
{
    int sum = 0;

    for (int i = 1; i <= max; i++)
    {
        sum += i;
    }

    printf("1���� %d������ ��: %d\n", max, sum);
}
