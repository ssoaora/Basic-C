#include <stdio.h>

int main(void)
{
    double x1 = 3.2, y1 = 4.6;
    double x2 = -8.3, y2 = -2.3;

    printf("(%.2lf %.2lf), (%.2lf %.2lf)\n", x1, y1, x2, y2);

    double midx = (x1 + x2) / 2;
    double midy = (y1 + y2) / 2;

    printf("Áß½ÉÁÂÇ¥: (%.2lf %.2lf)", midx, midy);

    return 0;
}
