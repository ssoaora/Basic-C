#include <stdio.h>

int main(void)
{
    int i, sum = 0;

    printf("1���� n������ �� �߿��� 10000�� ���� �ʴ� ���� ū ����?\n");

    for (i = 1; i <= 10000; i++)
    {
        if (sum + i > 10000)
            break;

        sum += i;
    }
    printf("1���� %d������ ���� %d�Դϴ�.\n", i - 1, sum);

    return 0;
}
