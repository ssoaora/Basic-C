#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14

double area(double);
double circumference(double);

int main(void)
{
    double radius;

    printf("원의 반지름 입력 >> ");
    scanf("%lf", &radius);

    printf("\n반지름이 %.2lf인 원의 면적은 %.3lf입니다.\n", radius, area(radius));
    printf("반지름이 %.2lf인 원의 길이는 %.3lf입니다.\n", radius, circumference(radius));

    return 0;
}

double area(double r)
{
    double area = PI * r * r;
    return area;
}

double circumference(double r)
{
    double circumference = 2 * PI * r;
    return circumference;
}
