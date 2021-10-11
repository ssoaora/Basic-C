#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int i, j;
    printf("=== 3备开 备备窜 免仿 ===\n\n");

    for (i = 1; i < 10; i += 3)
    {
        for (j = 1; j <= 10; j++)
        {
            printf("%d * %d = %-2d	%d * %d = %-2d	%d * %d = %-2d\n", i, j, i * j, (i + 1), j, (i + 1) * j, (i + 2), j, (i + 2) * j);
        }

        printf("\n");
    }

    return 0;
}
