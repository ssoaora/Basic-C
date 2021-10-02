#include <stdio.h>
#define PI 3.14

int main()
{
    double radius = 5.37;

    printf("원 반지름: %f\n", radius);
    printf("원 면적: %f\n", radius * radius * PI);
    printf("원 둘레: %f\n", 2 * PI * radius);

    return 0;
}