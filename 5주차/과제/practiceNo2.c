#include <stdio.h>

int main(void)
{
    int dates;

    printf("���� �Է� >> ");
    scanf("%d", &dates);

    printf("�Է��� ��¥: %d\n", dates);

    int year = dates / 365;
    int month = dates % 365 / 30;
    int day = dates % 365 % 30;

    printf("%d�� %d�� %d��", year, month, day);

    return 0;
}
