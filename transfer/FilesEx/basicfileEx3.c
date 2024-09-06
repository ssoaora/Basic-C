#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* fpi, * fpo;
	char* infile = "c:\\temp\\input.txt";
	char* outfile = "c:\\temp\\output.txt";


	if ((fpi = fopen(infile, "r")) == NULL)
	{
		printf("�Է� ������ �� �� �����ϴ�.\n");
		exit(1);
	}

	if ((fpo = fopen(outfile, "w")) == NULL)
	{
		printf("��� ������ �� �� �����ϴ�.\n");
		exit(1);
	}

	int kor, math, eng;
	fscanf(fpi, "%d %d %d", &kor, &math, &eng);

	int sum = kor + math + eng;
	double mean = sum / 3.0;
	fprintf(fpo, "�л� ������ �� : %d\n", sum);
	fprintf(fpo, "�л� ������ ��� : %.3f\n", mean);

	fclose(fpi);
	fclose(fpo);

	return 0;
}
