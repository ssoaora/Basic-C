#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double height, weight, result;

    printf("신장(cm)과 몸무게(kg)를 입력하세요: ");
    scanf("%lf %lf", &height, &weight);

    height = height * 0.01;
    result = weight / (height * height);
    printf("신장: %.2lf, 몸무게: %.2lf, BMI지수: %.2lf ", height, weight, result);

    if (result >= 40)
        printf("고도 비만\n");
    else if (result >= 35 && result < 40)
        printf("중등도 비만\n");
    else if (result >= 30 && result < 35)
        printf("비만\n");
    else if (result >= 25 && result < 30)
        printf("과체중\n");
    else if (result >= 18.5 && result < 25)
        printf("정상\n");
    else
        printf("저체중\n");

    return 0;
}
