#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int data1, data2;

    printf("������ ���� �Է�1 : ");
    scanf("%d", &data1);

    printf("������ ���� �Է�2 : ");
    scanf("%d", &data2);

    int a = data1 > data2 ? data1 / data2 : data2 / data1;
    int b = data1 > data2 ? data1 % data2 : data2 % data1;

    printf("���� %d �̰� �������� %d �Դϴ�.", a, b);

    return 0;
}
