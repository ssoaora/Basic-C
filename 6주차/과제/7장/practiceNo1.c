#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int input, sum = 0;

    printf("양의 정수 입력: ");
    scanf("%d", &input);

    for (int i = 1; i <= input; i++)
        sum += i;

    printf("1에서 %d까지 합: %d\n", input, sum);

    return 0;
}
