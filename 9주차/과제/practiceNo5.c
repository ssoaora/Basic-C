#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int square(int);
int cube(int);

int main(void)
{
    int num;

    printf("정수 입력 >>> ");
    scanf("%d", &num);

    printf("%d의 다섯 제곱은 %d입니다.\n", num, cube(num) * square(num));

    return 0;
}

int square(int a)
{
    a *= a;
    return a;
}

int cube(int num)
{
    num = square(num) * num;
    return num;
}
