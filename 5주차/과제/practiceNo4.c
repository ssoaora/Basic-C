#include <stdio.h>
#define PI 3.14

int main(void)
{
    double r = 8.32;
    double v = 4.0 / 3 * PI * (r * r * r);
    double s = 4 * PI * (r * r);

    printf("���� ü���� \t %.3lf �Դϴ�.\n", v);
    printf("���� ǥ������ \t %.3lf �Դϴ�.", s);

    return 0;
}
