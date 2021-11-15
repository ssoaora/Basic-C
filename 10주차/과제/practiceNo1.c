#include <stdio.h>

int main(void)
{
    int data = 100;
    int *p = &data;

    printf("%d %p\n", *p, p);

    return 0;
}
