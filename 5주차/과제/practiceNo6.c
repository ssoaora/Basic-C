#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double height, weight;
    
    printf("키 입력: ");
    scanf("%lf", &height);

    printf("몸무게 입력: ");
    scanf("%lf", &weight);

    double result = (height - 100) * 0.9;
    weight <= result ? printf("당신은 정상 입니다.") : printf("당신은 비만 입니다.");

    return 0;
}
