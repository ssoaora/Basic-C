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
	// Visual Studio ������ int ũ�⸦ 32, 64��Ʈ ��� �����ϰ� 4����Ʈ�� ���ߴ�.
	// ��� �÷������� long�� 4����Ʈ long long�� 8����Ʈ�� ���ǵǾ��ִ�.
	// �������� ũ��� �÷����� ��� ���� ��� �����ϴ�.

	return 0;
}

// �������� Debug �� ��� �μ��� ����. �� ���� ũ�Ⱑ ũ��.
// ����鿡�� �����Ҷ��� Release�� ����Ͽ� ���� ũ�⸦ ���δ�.
// Realease x64 �� ������ 64��Ʈ ���� ���α׷��̴�.