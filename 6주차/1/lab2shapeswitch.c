#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    enum shape
    {
        TRIANGLE = 1,
        RECTANGLE
    };
    int input;
    double width, height;

    printf("�ﰢ��[1], �簢��[2] ���� ��ȣ �ϳ��� ���� >> ");
    scanf("%d", &input);
    printf("���̿� ���̸� �Է� >> ");
    scanf("%lf %lf", &width, &height);

    switch (input)
    {
    case TRIANGLE:
        printf("�ﰢ�� ����: %.2lf\n", width * height / 2);
        break;
    case RECTANGLE:
        printf("�簢�� ����: %.2lf\n", width * height);
        break;

    default:
        printf("�߸��� �Է�\n");
    }

    return 0;
}
