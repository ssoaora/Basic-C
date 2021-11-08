#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int square(int, int);

int main(void)
{
    puts("6의 0승부터 10승까지 구하는 프로그램입니다.\n");

    for (int i = 0; i <= 10; i++)
        printf("6의 %2d승:%10d\n", i, square(6, i));

    return 0;
}

int square(int num, int i)
{
    return pow(num, i);
}
