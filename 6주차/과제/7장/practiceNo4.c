#include <stdio.h>

int main(void)
{
    int celsius;
    double fahrenheit;

    for (celsius = -60; celsius <= 140; celsius += 20)
    {
        fahrenheit = (9.0 / 5.0) * celsius + 32;
        printf("�����µ�: %3d = ȭ���µ�: %3d\n", celsius, (int)fahrenheit);
    }

    return 0;
}
