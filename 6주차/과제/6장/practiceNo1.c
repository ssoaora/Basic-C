#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double a, b, result;
    char symbol;

    printf("3.4+4.5�� ���� �� �Ǽ��� �����ڸ� �ٿ��� �Է� >> ");
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
