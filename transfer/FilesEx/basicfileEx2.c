#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* fp = NULL;

	if ((fp = fopen("C:\\temp\\basic.txt", "w")) == NULL)		// �������� ������ ���Ӱ� ����, �����Ѵٸ� ��� ����� ���� ����
	{
		printf("������ �� �� �����ϴ�.\n");
		exit(1);
	}

	double radius;
	printf("���� ������ : ");
	scanf("%lf", &radius);

	double area = 3.141592 * radius * radius;
	fprintf(fp, "���� ������ %f�Դϴ�.\n", area);

	fclose(fp);

	return 0;
}
