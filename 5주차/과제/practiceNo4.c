#include <stdio.h>
#define PI 3.14

int main(void)
{
    double r = 8.32;
    double v = 4.0 / 3 * PI * (r * r * r);
    double s = 4 * PI * (r * r);

    printf("구의 체적은 \t %.3lf 입니다.\n", v);
    printf("구의 표면적은 \t %.3lf 입니다.", s);

    return 0;
}
