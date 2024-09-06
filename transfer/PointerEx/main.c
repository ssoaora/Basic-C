// ���� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* x, int* y)  // call-by-address ���
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main(void)
{
	int x = 500, y = 700;
	printf("x=%d, y=%d\n", x, y);

	swap(&x, &y);
	printf("x=%d, y=%d\n", x, y);

	return 0;
}
