#include <stdio.h>

int main(void)
{
    int size;
    double a[10] = {10.2, 9.4, 3.6, 4.1, 8.4, 6.9, 2.1, 1.5, 7.8, 6.1};
    double *p = a;
    double minNum = p[0];

    for (int i = 0; i < 10; i++)
    {
        if (p[i] < minNum)
        {
            size = i;
            minNum = p[i];
        }
    }
    printf("최소 값, 첨자: %d 값: %.1f\n", size, minNum);

    return 0;
}
