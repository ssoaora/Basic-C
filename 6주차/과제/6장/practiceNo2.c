#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double x, y;
    int result;

    printf("��ǥ x, y �Է� >> ");
    scanf("%lf %lf", &x, &y);

    if (x > 0 && y > 0)
        result = 1;
    else if (x < 0 && y > 0)
        result = 2;
    else if (x < 0 && y < 0)
        result = 3;
    else if (x > 0 && y < 0)
        result = 4;

    printf("��ǥ (%.2lf, %.2lf): %d��и�\n", x, y, result);

    return 0;
}
