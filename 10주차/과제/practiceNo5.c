#include <stdio.h>

int main(void)
{
    int arr[3][4] = { {11, 22, 33, 44}, {55, 66, 77, 88}, {11, 66, 77, 44} };
    int (*p)[4] = arr;

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            printf("arr[%d][%d] = %d  ", i, j, *(p[i] + j));
        }
        puts("");
    }
    return 0;
}
