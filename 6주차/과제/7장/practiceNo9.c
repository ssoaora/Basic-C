#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define TOTAL_BIT 32

int main(void)
{
    int input;

    while (1)
    {
    printf("정수 또는 0(종료)을 입력 >> ");
    scanf("%d", &input);

    if (input == 0)
    {    
        printf("종료합니다.\n");
        break;
    }

    printf("정수 %d의 %d비트 내부 값: ", input, TOTAL_BIT);

    for (int i = TOTAL_BIT - 1; i >= 0; i--)
        printf("%d", input >> i & 1);

    printf("\n");
    }

    return 0;
}
