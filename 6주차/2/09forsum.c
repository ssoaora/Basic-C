#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int i, sum;

    for (i = 1, sum = 0; i <= 10; i++)
    {
        sum += i;
    }

    printf("1 ~ 10 гу: %d\n", sum);

    return 0;
}
