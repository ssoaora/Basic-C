#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 4

int main(void)
{
    int num = 0;
    double height = 0;

    while (num < MAX)
    {
        printf("Ű �Է� >> ");
        scanf("%lf", &height);

        if (height <= 130)
        {
            num++;
        }
    }

    printf("���� %d�� �Ϸ�!\n", num);

    return 0;
}
