#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

int main(void)
{
    int guess, input, chance = 7;

    srand((long)time(NULL));
    guess = rand() % MAX + 1;

    printf("1���� %d ���̿��� �� ������ �����Ǿ����ϴ�.\n", MAX);
    printf("��ȸ�� �ִ� %d ���Դϴ�.\n", chance);
    printf("�� ������ �����ϱ��? �Է��� ������. : ");

    while (scanf("%d", &input))
    {
        if (chance == 1)
            break;

        if (input > guess)
        {
            printf("�Է��� �� %d���� �۽��ϴ�. �ٽ� �Է��ϼ���. : ", input);
            chance--;
        }
        else if (input < guess)
        {
            printf("�Է��� �� %d���� Ů�ϴ�. �ٽ� �Է��ϼ���. : ", input);
            chance--;
        }
        else
        {
            puts("�����Դϴ�.");
            return 0;
        }
    }

    printf("��� ��ȸ�� ���̽��ϴ�.\n");

    return 0;
}
