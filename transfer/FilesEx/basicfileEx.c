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

	fprintf(fp, "�̵��� �Դϴ�.\n");
	fclose(fp);

	return 0;
}
