#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define TOTAL_BIT 32

int main(void)
{
    int input;

    while (1)
    {
    printf("���� �Ǵ� 0(����)�� �Է� >> ");
    scanf("%d", &input);

    if (input == 0)
    {    
        printf("�����մϴ�.\n");
        break;
    }

    printf("���� %d�� %d��Ʈ ���� ��: ", input, TOTAL_BIT);

    for (int i = TOTAL_BIT - 1; i >= 0; i--)
        printf("%d", input >> i & 1);

    printf("\n");
    }

    return 0;
}
