#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    printf("���� �Է�: ");
    scanf("%d", &n);

    if (n % 2) // if (n % 2 != 0)
    {
        printf("Ȧ��\n");
    }
    else
    {
        printf("¦��\n");
    }

    (n % 2) ? printf("Ȧ��\n") : printf("¦��\n"); // ���ǿ����� �̿�

    return 0;
}
