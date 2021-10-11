#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int gender;
    double height, weight, std_weight, fatness;

    printf("성별을 먼저 입력하세요. 1(남자), 2(여자): ");
    scanf("%d", &gender);

    printf("신장(cm)과 몸무게(kg)를 입력하세요: ");
    scanf("%lf %lf", &height, &weight);

    height = height * 0.01;

    if (gender == 1)
        std_weight = height * height * 22;
    else if (gender == 2)
        std_weight = height * height * 21;

    printf("현재 신장: %.2lf, 체중: %.2lf, 표준 체중: %.2lf\n", height * 100, weight, std_weight);

    fatness = (weight / std_weight) * 100;
    printf("비만지수: %.2lf, 판정: ", fatness);

    if (fatness < 90)
        printf("저체중\n");
    else if (fatness >= 90 && fatness < 110)
        printf("정상\n");
    else if (fatness >= 110 && fatness < 120)
        printf("체중 과다\n");
    else
        printf("비만\n");

    return 0;
}
