#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, y;

    for (x = 5; x <= 10; x += 0.5)
    {
        y = 3 * pow(x, 3) + 2 * pow(x, 2) + x + 5;
        printf("x = %.2lf y = %.2lf\n", x, y);
    }

    return 0;
}
