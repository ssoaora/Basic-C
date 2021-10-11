#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double a, b, result;
    char symbol;

    printf("3.4+4.5와 같이 두 실수와 연산자를 붙여서 입력 >> ");
    scanf("%lf%c%lf", &a, &symbol, &b);

    if (symbol == '+')
        result = a + b;
    else if (symbol == '-')
        result = a - b;
    else if (symbol == '*')
        result = a * b;
    else if (symbol == '/')
        result = a / b;

    printf("%.2lf %c %.2lf = %.2lf\n", a, symbol, b, result);

    return 0;
}
