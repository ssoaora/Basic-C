#include <stdio.h>

double InputRadius();
double GetArea(double radius);

int main(void)
{
	double radius = InputRadius();
	double area = GetArea(radius);

	printf("���� ���� = %.2lf\n", area);

	return 0;
}
