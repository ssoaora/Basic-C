#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* fname = "c:\\temp\\grade.txt";
	char str[80];
	int cnt = 0;
	FILE* fp = NULL;

	if ((fp = fopen(fname, "w")) == NULL)
	{
		printf("������ ������ �ʽ��ϴ�.");
		exit(1);
	}

	printf("�̸��� ����(�߰�, �⸻)�� �Է��ϼ���.\n");
	fgets(str, 80, stdin);		// stdin �� ǥ�� �Է� ��Ʈ��(=Ű����)

	while (!feof(stdin))		// ������ ���� �ƴ� ���� = ctrl+z�� ������ ������
	{
		fprintf(fp, "%d %s", ++cnt, str);		// Enter Ű�� ĥ ������ ���Եȴ�.
		// fputs(str, fp);
		fgets(str, 80, stdin);		// stdin �� ǥ�� �Է� ��Ʈ��(=Ű����)
	}

	fclose(fp);

	return 0;
}
