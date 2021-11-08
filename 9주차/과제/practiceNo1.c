#include <stdio.h>

void change(double);

int main(void)
{
    double inch;
    printf("거리를 인치로 입력하세요. -> ");
    scanf("%lf", &inch);

    change(inch);

    return 0;
}

void change(double a)
{
    double cm = a * 2.54;
    printf("입력한 %lf인치는 %lf센티미터이다.\n", a, cm);
}
