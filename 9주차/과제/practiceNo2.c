#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void getsum(int);

int main(void)
{
    int input;

    printf("1에서 n까지의 합을 구할 n을 입력하시오. >> ");
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

    printf("1에서 %d까지의 합: %d\n", max, sum);
}
