#define _CRT_SECURE_NO_WARNINGS
#define PI 3.161592
#include <stdio.h>

int main()
{
    double radius;

    printf("원 반지름 입력: ");
    scanf("%lf", &radius);

    printf("원 반지름: %f\n", radius);
    printf("원 면적: %f\n", PI * radius * radius);
    printf("원 둘레: %f\n", 2 * PI * radius);

    return 0;
}