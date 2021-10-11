#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int month;

    printf("년도의 월(month)을 입력하세요. >> ");
    scanf("%d", &month);

    if (month >= 1 && month <= 3)
        printf("%d월(month)은 1분기입니다.\n", month);
    else if (month >= 4 && month <= 6)
        printf("%d월(month)은 2분기입니다.\n", month);
    else if (month >= 7 && month <= 9)
        printf("%d월(month)은 3분기입니다.\n", month);
    else if (month >= 10 && month <= 12)
        printf("%d월(month)은 4분기입니다.\n", month);
    else
        printf("1~12월 중으로 입력해주세요.");

    return 0;
}
