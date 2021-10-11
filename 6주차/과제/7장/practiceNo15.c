#include <stdio.h>

int main(void)
{
    int i, j, k, space;

    for (i = 0; i <= 7; i++)
    {
        for (space = 7; space > i; space--)
            printf(" ");

        for (j = i; j > 0; j--)
            printf("%d", j);

        for (k = 0; k <= i; k++)
            printf("%d", k);

        printf("\n");
    }
    return 0;
}
