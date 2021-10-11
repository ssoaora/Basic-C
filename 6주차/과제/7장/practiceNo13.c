#include <stdio.h>

int main(void)
{
    int i, j, space;

    for (i = 1; i <= 5; i++)
    {
        for (space = i + 1; space <= 5; space++)
            printf(" ");
        
        for (j = 0; j < i; j++)
        {
            printf("%d", i - j);
        }

        printf("\n");
    }

    return 0;
}
