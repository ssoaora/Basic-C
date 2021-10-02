#include <stdio.h>
#include <math.h>

int main(void)
{
    double a = 2.0, b = 3.0, c = -4.0;
    double value1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    double value2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

    double verify1 = a * pow(value1, 2) + b * value1 + c;
    double verify2 = a * pow(value2, 2) + b * value2 + c;

    printf("해1 %.3lf\n", value1);
    printf("검증 계산 %.3lf\n", verify1);

    printf("해2 %.3lf\n", value2);
    printf("검증 계산 %.3lf\n", verify2);

    return 0;
}
