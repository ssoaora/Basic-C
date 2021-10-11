#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int i, input;

    printf("출력할 구구단 2 ~ 9 사이의 정수 입력 >> ");
    scanf("%d", &input);

    if (input <= 1 || input > 9)
    {
        printf("범위에 맞는 정수를 입력해주세요.\n");
        return 0;
    }

    for (i = 1; i <= 9; i++)
    {
        printf("%d* %d =%d ", input, i, (input * i));
    }

    printf("\n");

    return 0;
}
