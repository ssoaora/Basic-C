#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void convertHex(int);

int main(void)
{
    int num;

    printf("10������ �Է��ϸ� 16������ ����մϴ�.\n");
    printf("���� �Է� >>> ");
    scanf("%d", &num);

    printf("%d�� 16������? ", num);
    convertHex(num);

    return 0;
}

void convertHex(int num)
{
    if (num > 16)
    {
        convertHex(num / 16);
        printf("%X\n", num % 16);
    }
    else
        printf("%X", num);
}
