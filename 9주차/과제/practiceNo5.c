#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int square(int);
int cube(int);

int main(void)
{
    int num;

    printf("���� �Է� >>> ");
    scanf("%d", &num);

    printf("%d�� �ټ� ������ %d�Դϴ�.\n", num, cube(num) * square(num));

    return 0;
}

int square(int a)
{
    a *= a;
    return a;
}

int cube(int num)
{
    num = square(num) * num;
    return num;
}
