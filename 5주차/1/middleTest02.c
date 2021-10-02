#include <stdio.h>

int main(void)
{
    int m = 10, n = 20;

    printf("%d %d\n", m++, ++n);
    printf("%d %d\n", --m, n--);
    printf("%d %d\n", m, n);

    return 0;
}
