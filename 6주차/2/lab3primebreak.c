#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num, j;

    printf("2 �̻� ���� ���� �Է� >> ");
    scanf("%d", &num);

    for (j = 2; j < num; j++)
        if (num % j == 0)
            break;

    if (j == num)
        printf("%d �Ҽ��̴�.\n", num);
    else
        printf("%d �Ҽ��� �ƴϴ�.\n", num);

    return 0;
}
