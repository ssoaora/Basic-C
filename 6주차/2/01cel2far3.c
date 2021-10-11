#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double celsius;

    printf("   ¼·¾¾(C)  È­¾¾(F)\n");
    printf("%8.2lf %8.2lf\n", celsius, 9.0 / 5 * celsius + 32);
    celsius += 10;
    printf("%8.2lf %8.2lf\n", celsius, 9.0 / 5 * celsius + 32);
    celsius += 10;
    printf("%8.2lf %8.2lf\n", celsius, 9.0 / 5 * celsius + 32);

    return 0;
}
