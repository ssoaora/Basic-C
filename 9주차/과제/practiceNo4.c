#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pickNum(int, int, int);

int main(void)
{
    int a, b, c;

    printf("�� ���� ���� �� ���� ū ������ ����մϴ�.\n");
    printf("���� 3�� �Է� >>> ");
    scanf("%d %d %d", &a, &b, &c);

    pickNum(a, b, c);

    return 0;
}

void pickNum(int a, int b, int c)
{
    int max;

    max = a;
    max = b > max ? b : max;
    max = c > max ? c : max;

    printf("\n�Է��� �� �� ���� %d, %d, %d �߿��� ���� ū ������ %d�Դϴ�.\n", a, b, c, max);
}
