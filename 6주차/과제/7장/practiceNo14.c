#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 5; i >= 1; i--)
    {
        for (j = 0; j < i; j++)
            printf("%d", i - j);

        printf("\n");
    }

    return 0;
}
