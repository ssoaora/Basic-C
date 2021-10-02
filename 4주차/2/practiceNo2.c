#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    double H;
    printf("È­¾¾ ¿Âµµ ÀÔ·Â: ");
    scanf("%lf", &H);

    double C = 5.0 / 9.0 * (H - 32.0);
    printf("ÀÔ·ÂµÈ È­¾¾ ¿Âµµ: %d\n", H);
    printf("¼·¾¾ ¿Âµµ: %.4f\n", C);

    return 0;
}