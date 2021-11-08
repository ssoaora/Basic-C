#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void array_print(int print[], int);
int isequalarray(int a[], int b[], int);

int main(void)
{
    int check, a_size, b_size;
    int a[] = {4, 7, 9, 3, 6};
    int b[] = {10, 20, 30, 40, 50};

    a_size = sizeof(a) / sizeof(int);
    b_size = sizeof(b) / sizeof(int);

    array_print(a, a_size);
    array_print(b, b_size);

    if (a_size != b_size)
    {
        printf("두 배열은 다르다.\n");
        return 0;
    }

    check = isequalarray(a, b, a_size);

    if (check == 1)
        printf("두 배열은 같다.\n");
    else if (check == 0)
        printf("두 배열은 다르다.\n");

    return 0;
}

void array_print(int print[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", print[i]);

    puts("");
}

int isequalarray(int a[], int b[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
            return 0;
    }

    return 1;
}
