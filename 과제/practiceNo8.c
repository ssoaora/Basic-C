#include <stdio.h>

void swap(int *p, int *q);

int main(void)
{
    int a[] = {11, 22, 33, 44, 55, 66};
    int *p = a;
    int *q = (a + 5);

    swap(p, q);

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }
    puts("");

    return 0;
}

void swap(int *p, int *q)
{
    for (int i = 0; i < 3; i++)
    {
        int temp = *(p + i);
        *(p + i) = *(q - i);
        *(q - i) = temp;
    }
}
