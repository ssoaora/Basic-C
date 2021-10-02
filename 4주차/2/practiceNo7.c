#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n2 = 024;
    double n3 = 3.456E2;

    printf("%10d\n", n2);
    printf("%10o\n", n2);
    printf("%-#10o\n", n2);
    printf("%010x\n", n2);
    printf("%0#10x\n", n2);

    printf("%f\n", n3);
    printf("%10.2f\n", n3);
    printf("%-10.2f\n", n3);
    printf("%+10.2f\n", n3);
    printf("%+010.2f\n", n3);

    return 0;
}