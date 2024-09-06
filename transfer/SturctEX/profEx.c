// �л��� ����ó��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 100


typedef struct subject  // subject ���� ����
{
	int math;
	int eng;
} SUBJECT;

typedef struct person
{
	int num;		// �й�
	char name[20];	// �̸�
	SUBJECT score;	// ����
	int total;		// ����
	double mean;	// ���
	int rank;		// ����
} STUDENT;


void ComputeRank(STUDENT data[], int num);

void main()
{
	STUDENT data[MAX];
	int num, i = 0;

	while (1)
	{
		printf("�л��� �й�, �̸�, ���� ����, ���� ������ �Է��ϼ���.\n");
		printf("�й�(���� = -1 �Է�) : ");
		scanf("%d", &data[i].num);

		if (data[i].num == -1)
			break;

		printf("�̸� : ");
		scanf("%s", data[i].name);
		// gets(data[i].name);		// ���� ���� �Է� �ޱ�. ������ ���۸� �÷��� ���־�� �Է� ���� �� �ִ�.

		printf("���� ���� : ");
		scanf("%d", &data[i].score.math);

		printf("���� ���� : ");
		scanf("%d", &data[i].score.eng);
		puts("");

		i++;
	}
	num = i;


	for (int i = 0; i < num; i++)
	{
		data[i].total = data[i].score.math + data[i].score.eng;
		data[i].mean = (double)data[i].total / 2.0;
	}

	ComputeRank(data, num);		// �������� ���� �˰���

	printf("�й� �̸�       ���� ���� ���� ���   ����\n");
	printf("===========================================\n");

	for (int n = 0; n < num; n++)
	{
		printf("%04d %-10s %4d %4d %4d %6.2f %3d\n",
			data[n].num, data[n].name, data[n].score.math, data[n].score.eng,
			data[n].total, data[n].mean, data[n].rank);
	}
}

// ������������ �������ִ� BubbleSort �˰���
void ComputeRank(STUDENT data[], int num)
{
	STUDENT temp;

	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < (num - i) - 1; j++)
		{
			if (data[j].total < data[j + 1].total)
			{
				temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < num; i++)
		data[i].rank = i + 1;
}
