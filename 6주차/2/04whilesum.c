#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double number = 1, sum = 0;

    while (number != 0.0)
    {
        printf("�Ǽ� �Է� >> ");
        scanf("%lf", &number);
        sum += number;
    }

    printf("�� = %.2lf\n", sum);

    return 0;
}
