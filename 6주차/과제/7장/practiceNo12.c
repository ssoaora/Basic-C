#include <stdio.h>
#include <math.h>

int main(void)
{
    int year;
    double budget = 1000000, rate = 0.045, total;

    for (year = 1; year <= 10; year++)
    {
        total = budget * pow((1 + rate), year);

        printf("%2d³â ÃÑ±Ý¾×: %.2lf\n", year, total);
    }

    return 0;
}
