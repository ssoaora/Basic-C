#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int month;

    printf("�⵵�� ��(month)�� �Է��ϼ���. >> ");
    scanf("%d", &month);

    if (month >= 1 && month <= 3)
        printf("%d��(month)�� 1�б��Դϴ�.\n", month);
    else if (month >= 4 && month <= 6)
        printf("%d��(month)�� 2�б��Դϴ�.\n", month);
    else if (month >= 7 && month <= 9)
        printf("%d��(month)�� 3�б��Դϴ�.\n", month);
    else if (month >= 10 && month <= 12)
        printf("%d��(month)�� 4�б��Դϴ�.\n", month);
    else
        printf("1~12�� ������ �Է����ּ���.");

    return 0;
}
