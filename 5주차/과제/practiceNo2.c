#include <stdio.h>

int main(void)
{
    int dates;

    printf("일자 입력 >> ");
    scanf("%d", &dates);

    printf("입력한 날짜: %d\n", dates);

    int year = dates / 365;
    int month = dates % 365 / 30;
    int day = dates % 365 % 30;

    printf("%d년 %d월 %d일", year, month, day);

    return 0;
}
