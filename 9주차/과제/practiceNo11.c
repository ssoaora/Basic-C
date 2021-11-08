#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void convertHex(int);

int main(void)
{
    int num;

    printf("10진수를 입력하면 16진수를 출력합니다.\n");
    printf("정수 입력 >>> ");
    scanf("%d", &num);

    printf("%d의 16진수는? ", num);
    convertHex(num);

    return 0;
}

void convertHex(int num)
{
    if (num > 16)
    {
        convertHex(num / 16);
        printf("%X\n", num % 16);
    }
    else
        printf("%X", num);
}
