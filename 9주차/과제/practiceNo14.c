#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 45

int duplicate(int num, int lotto[], int cnt);

int main(void)
{
    int lotto[6] = {0};
    srand((long)time(NULL));

    for (int i = 0; i < 6; i++)
        lotto[i] = rand() % MAX + 1;

    duplicate();

    return 0;
}

int duplicate(int num, int lotto[], int cnt)
{
    for (int i = 0; i < 6; i++)
    {
    }
}
