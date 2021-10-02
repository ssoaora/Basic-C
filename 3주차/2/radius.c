#include <stdio.h>
#define PI 3.14  // PI를 모두 3.14 로 치환한 다음 컴파일해라 (매크로 치환)

int main()
{
    // double const PI = 3.14;
    // const double PI = 3.14;
    double radius = 20.234;
    double area;

    area = PI * radius * radius;
    printf("Area = %f\n", area);
}
