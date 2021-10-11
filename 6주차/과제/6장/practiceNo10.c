#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char unit;
    double temperature, celsius, fahrenheit;

    printf("입력한 온도를 변환합니다.\n");
    printf("문자를 F나 f를 입력하면 섭씨로,\n");
    printf("문자를 C나 c로 입력하면 화씨로 변환합니다.\n\n");

    printf("문자 입력 >> ");
    scanf("%c", &unit);

    printf("온도 입력 >> ");
    scanf("%lf", &temperature);

    switch (unit)
    {
        case 'F': case 'f':
            celsius = (5.0 / 9.0) * (temperature - 32);
            printf("\n화씨온도 %.2lf는 섭씨온도로 %.2lf입니다.\n", temperature, celsius);
            break;
        case 'C': case 'c':
            fahrenheit = (9.0 / 5.0) * temperature + 32;
            printf("\n섭씨온도 %.2lf는 섭씨온도로 %.2lf입니다.\n", temperature, fahrenheit);
            break;
        default:
            printf("\n알맞은 문자를 입력하세요.\n");
    }

    return 0;
}
