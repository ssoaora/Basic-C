#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double x, y, result;

    printf("두 실수 입력 >> ");
    scanf("%lf %lf", &x, &y);

    if (x > 0 && y > 0)
        result = x + y;
    else if (x > 0 && y <= 0)
        result = x - y;
    else if (x <= 0 && y > 0)
        result = -x + y;
    else if (x <= 0 && y <= 0)
        result = -x - y;

    printf("결과값: %lf\n", result);

    return 0;
}
