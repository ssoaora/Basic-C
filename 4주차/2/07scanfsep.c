#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int year, month, day;

    printf("당신의 생년월일은? ");
    scanf("%d-%d-%d", &year, &month, &day);

    printf("%d %d %d\n", year, month, day);
    printf("생년월일: %d년 %d월 %d일\n", year, month, day);

    return 0;
}