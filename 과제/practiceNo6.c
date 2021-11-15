#include <stdio.h>

int main(void)
{
    int a[][5] = {{1, 2, 3, 4, 5}, {10, 20, 30, 40, 50}, {100, 200, 300, 400, 500}};
    int *p[3] = {NULL};

    p[0] = a[0];
    p[1] = a[1];
    p[2] = a[2];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("a[%d][%d] = %3d  ", i, j, *(p[i] + j));
        }
        puts("");
    }
    
    return 0;
}
