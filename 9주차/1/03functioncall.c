#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int a, int b);
int findMax(int, int);
void printMin(int, int);

int main(void)
{
    int a = 10, b = 15;

    int max = findMax(a, b);
    printf("�ִ�: %d\n", max);
    printf("��: %d\n", add(a, b));

    printMin(a, b);

    return 0;
}

void printMin(int a, int b)
{
    int min = a < b ? a : b;
    printf("�ּ�: %d\n", min);
}

int add(int a, int b)
{
    int sum = a + b;
    return (sum);
}

int findMax(int a, int b)
{
    int max = a > b ? a : b;
    return max;
}

int findMin(int x, int y)
{
    int min = x < y ? x : y;
    return (min);
}
