#include <stdio.h>

int main(void)
{
    int value = 0x000000FF;
    int *pi = &value;
    short *ps = (short *)&value;

    printf("%d\n", *pi);

    *(ps + 1) = 0x000F;
    printf("%d %d\n", *ps, *(ps + 1));

    return 0;
}
