#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int input;

    do
    {
        printf("[0]���� [1]�Ƹ޸�ī�� [2]ī��� [3]īǪġ�� \n");
        printf("�ֹ��� Ŀ�� �Ǵ� ����(0)�� �Է� >> ");
        scanf("%d", &input);
    } while (input != 0);

    return 0;
}
