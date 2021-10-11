#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int input;

    printf("정수 입력 >> ");
    scanf("%d", &input);

    do
    {
        printf("%d", input % 10);
        input /= 10;

    } while (input != 0);

    printf("\n");

    return 0;
}
