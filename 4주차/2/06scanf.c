#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int month = 0;  // ���� 0���� �ʱ�ȭ���� �ʾƵ� �ȴ�.
    printf("1���� �� ��? ");
    scanf("%d", &month);
    printf("1���� %d��\n\n", month);

    int snum, credit;
    printf("����� �й��� ��û ������? ");
    scanf("%d%d", &snum, &credit);
    printf("�й�: %d ��û����: %d\n", snum, credit);

    return 0;
}
