#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sumNum(int);

int main(void)
{
    int num = 10;
    printf("1���� %d���� ������ ���� ���ϴ� ���α׷��Դϴ�.\n\n", num);

    for (int i = 1; i <= num; i++)
        printf("1���� %3d���� ��: %5d\n", i, sumNum(i));

    return 0;
}

int sumNum(int num)
{
    if (num <= 1)
        return 1;
    else
        return num + sumNum(num - 1);
}
