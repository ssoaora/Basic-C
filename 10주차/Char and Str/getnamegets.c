#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char name[20];

	printf("�̸�: ");
	// scanf("%s", name);
	// name �� ����ü�� �ּ��̱� ������ &�� �ٿ��� �ʿ䰡 ����.
	// �Է� �� ������ ���´ٸ� �Է��� �����ɷ� �����Ѵ�.
	gets(name);  // ������ �ִ� ���ڸ� �Է¹޴´ٸ� gets() �� ����Ѵ�.

	printf("�Էµ� �̸� : %s\n", name);

	return 0;
}