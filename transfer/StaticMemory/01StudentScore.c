#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int score[1000];		// ���� �޸�
	int n;

	printf("������ �Է��� �л��� �� : ");
	scanf("%d", &n);
	int total = 0;

	for (int i = 0; i < n; i++)
	{
		printf("%d�� �л��� ���� : ", i+1);
		scanf("%d", &score[i]);
		total += score[i];
	}
	printf("����: %d, ���: %f\n", total, (double)total / n);

	return 0;
}