#include <stdio.h>

int main(void)
{
    double cm;

    printf("���̸� ��Ƽ���ͷ� �Է� (�Ҽ�) >> ");
    scanf("%lf", &cm);

    double feet = cm / 30.48;

    printf("%lf ��Ƽ����: %.3lf ��Ʈ", cm, feet);

    return 0;
}
