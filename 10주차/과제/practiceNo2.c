#include <stdio.h>

int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    int *p;

    p = &a[2];
    printf("%d %d %d %d %d\n", *(p - 2), *(p - 1), *p, *(p + 1), *(p + 2));

    return 0;
}
