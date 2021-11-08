#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printarray(int print[], int);
void copyarray(int a[], int b[], int);

int main(void)
{
    int a[5] = {4, 7, 9, 3, 6};
    int b[6] = {10, 20, 30, 40, 50, 60};

    printf("a[] = ");
    printarray(a, 5);

    printf("b[] = ");
    printarray(b, 6);

    copyarray(a, b, 5);
    printf("\n");

    printf("배열 복사 후\n");
    for (int k = 0; k < 6; k++)
        printf("%d ", b[k]);

    printf("\n");

    return 0;
}

void printarray(int print[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", print[i]);
    
    puts("");
    
}

void copyarray(int from[], int to[], int n)
{
    int temp;

    for (int i = 0; i < n; i++)
    {
        temp = from[i];
        to[i] = temp;
    }
}
