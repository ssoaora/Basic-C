/*
F5 ����
F9 �ߴ���
F10 ���� ���� ����
F11 ���ν��� ���� ����
Ctrl + F10 ���� ��ġ���� ����
Shift + F5 ����
*/
#include <stdio.h>
// #define MULTILINE


void printArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
#ifndef MULTILINE
		printf("%d ", a[i]);
#else
		printf("%d\n", a[i]);
#endif // !MULTILINE
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	printArray(arr, 5);
	printf("\n%d", sizeof(int));

	return 0;
}
