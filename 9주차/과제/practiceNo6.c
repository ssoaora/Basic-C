#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14

double area(double);
double circumference(double);

int main(void)
{
    double radius;

    printf("���� ������ �Է� >> ");
    scanf("%lf", &radius);

    printf("\n�������� %.2lf�� ���� ������ %.3lf�Դϴ�.\n", radius, area(radius));
    printf("�������� %.2lf�� ���� ���̴� %.3lf�Դϴ�.\n", radius, circumference(radius));

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
