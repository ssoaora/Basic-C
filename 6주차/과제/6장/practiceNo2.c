#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double x, y;
    int result;

    printf("ÁÂÇ¥ x, y ÀÔ·Â >> ");
    scanf("%lf %lf", &x, &y);

    if (x > 0 && y > 0)
        result = 1;
    else if (x < 0 && y > 0)
        result = 2;
    else if (x < 0 && y < 0)
        result = 3;
    else if (x > 0 && y < 0)
        result = 4;

    printf("ÁÂÇ¥ (%.2lf, %.2lf): %d»çºÐ¸é\n", x, y, result);

    return 0;
}
