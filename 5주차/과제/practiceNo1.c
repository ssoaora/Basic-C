#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int data1, data2;

    printf("임의의 정수 입력1 : ");
    scanf("%d", &data1);

    printf("임의의 정수 입력2 : ");
    scanf("%d", &data2);

    int a = data1 > data2 ? data1 / data2 : data2 / data1;
    int b = data1 > data2 ? data1 % data2 : data2 % data1;

    printf("몫은 %d 이고 나머지는 %d 입니다.", a, b);

    return 0;
}
