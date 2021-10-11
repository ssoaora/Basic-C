#include <stdio.h>

int main(void)
{
    int i, j, count = 0;

    printf("2부터 100까지의 소수\n");

    for (i = 1; i <= 100; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }

        if (i == j)
        {
            printf("%3d", i);
            count++;

            if (count % 10 == 0)
                printf("\n");
        }
    }

    printf("\n");

    return 0;
}
