#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pickNum(int, int, int);

int main(void)
{
    int a, b, c;

    printf("세 개의 정수 중 가장 큰 정수를 출력합니다.\n");
    printf("정수 3개 입력 >>> ");
    scanf("%d %d %d", &a, &b, &c);

    pickNum(a, b, c);

    return 0;
}

void pickNum(int a, int b, int c)
{
    int max;

    max = a;
    max = b > max ? b : max;
    max = c > max ? c : max;

    printf("\n입력한 세 개 정수 %d, %d, %d 중에서 가장 큰 정수는 %d입니다.\n", a, b, c, max);
}
