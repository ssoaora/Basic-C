#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double i;
    int *p = (int *)&i;

    printf("두 정수 입력: ");
    scanf("%d %d", p, (p + 1));

    printf("%d + %d = %d\n", *p, *(p + 1), *p + *(p + 1));
    printf("%d - %d = %d\n", *p, *(p + 1), *p - *(p + 1));
    printf("%d * %d = %d\n", *p, *(p + 1), *p * *(p + 1));
    printf("%d %% %d = %d\n", *p, *(p + 1), *p % *(p + 1));

    return 0;
}
