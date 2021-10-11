#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int year, month;

    printf("��� ���� ������ ���� �Է��ϸ� �� ���� ������ �˷��帳�ϴ�.\n");
    printf("2003 2 : �Է� >> ");
    scanf("%d %d", &year, &month);

    switch (month)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("%d�� %d���� ������ 31�� �Դϴ�.\n", year, month);
            break;
        case 4: case 6: case 9: case 11:
            printf("%d�� %d���� ������ 30�� �Դϴ�.\n", year, month);
            break;
        case 2:
            if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
                printf("%d�� %d���� ������ 29�� �Դϴ�.\n", year, month);
            else
                printf("%d�� %d���� ������ 28�� �Դϴ�.\n", year, month);
                break;
        default:
            printf("���Ŀ� �°� �Է����ּ���.\n");
    }

    return 0;
}
