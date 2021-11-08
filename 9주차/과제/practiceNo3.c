#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printTemp();

int main(void)
{
    puts("¼·¾¾¿Âµµ 0.5¾¿ Áõ°¡°ª¿¡ ´ëÇÑ È­¾¾¿Âµµ Ãâ·Â\n");
    printTemp();

    return 0;
}

void printTemp()
{
    for (double i = 0; i <= 100; i += 0.5)
    {
        double fahrenheit = i * 1.8 + 32;
        printf("¼·¾¾¿Âµµ= %6.2lf    È­¾¾¿Âµµ= %6.2lf\n", i, fahrenheit);
    }
}
