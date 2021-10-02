#include <stdio.h>

int main(void)
{
    int a = 5, b = 10;

    a += 4;
    b *= 5;
    printf("%d %d\n", a, b);

    a += b % 3;
    b *= b / 2;
    printf("%d %d\n", a, b);

    return 0;
}
