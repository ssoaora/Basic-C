#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int square(int, int);

int main(void)
{
    puts("6�� 0�º��� 10�±��� ���ϴ� ���α׷��Դϴ�.\n");

    for (int i = 0; i <= 10; i++)
        printf("6�� %2d��:%10d\n", i, square(6, i));

    return 0;
}

int square(int num, int i)
{
    return pow(num, i);
}
