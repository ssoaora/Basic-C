#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int year, month, day;

    printf("����� ���������? ");
    scanf("%d-%d-%d", &year, &month, &day);

    printf("%d %d %d\n", year, month, day);
    printf("�������: %d�� %d�� %d��\n", year, month, day);

    return 0;
}