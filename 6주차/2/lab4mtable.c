#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 9

int main(void)
{
    printf("=== ������ ��� ===\n");

    for (int i = 2; i <= MAX; i++)
    {
        printf("%5d�� ���\n", i);

        for (int j = 1; j <= MAX; j++)
            printf("%d * %d = %2d\t", i, j, i * j);

        printf("\n");
    }
    return 0;
}
