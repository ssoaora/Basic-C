#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sumNum(int);

int main(void)
{
    int num = 10;
    printf("1부터 %d까지 각각의 합을 구하는 프로그램입니다.\n\n", num);

    for (int i = 1; i <= num; i++)
        printf("1부터 %3d까지 합: %5d\n", i, sumNum(i));

    return 0;
}

int sumNum(int num)
{
    if (num <= 1)
        return 1;
    else
        return num + sumNum(num - 1);
}
