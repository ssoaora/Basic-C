#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char unit;
    double temperature, celsius, fahrenheit;

    printf("�Է��� �µ��� ��ȯ�մϴ�.\n");
    printf("���ڸ� F�� f�� �Է��ϸ� ������,\n");
    printf("���ڸ� C�� c�� �Է��ϸ� ȭ���� ��ȯ�մϴ�.\n\n");

    printf("���� �Է� >> ");
    scanf("%c", &unit);

    printf("�µ� �Է� >> ");
    scanf("%lf", &temperature);

    switch (unit)
    {
        case 'F': case 'f':
            celsius = (5.0 / 9.0) * (temperature - 32);
            printf("\nȭ���µ� %.2lf�� �����µ��� %.2lf�Դϴ�.\n", temperature, celsius);
            break;
        case 'C': case 'c':
            fahrenheit = (9.0 / 5.0) * temperature + 32;
            printf("\n�����µ� %.2lf�� �����µ��� %.2lf�Դϴ�.\n", temperature, fahrenheit);
            break;
        default:
            printf("\n�˸��� ���ڸ� �Է��ϼ���.\n");
    }

    return 0;
}
