#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printTemp();

int main(void)
{
    puts("�����µ� 0.5�� �������� ���� ȭ���µ� ���\n");
    printTemp();

    return 0;
}

void printTemp()
{
    for (double i = 0; i <= 100; i += 0.5)
    {
        double fahrenheit = i * 1.8 + 32;
        printf("�����µ�= %6.2lf    ȭ���µ�= %6.2lf\n", i, fahrenheit);
    }
}
