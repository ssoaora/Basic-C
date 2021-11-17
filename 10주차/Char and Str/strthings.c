/*
���ڿ��� ���̰��
int strlen(char* s);

���ڿ��� Ư����ġ ���
char* strchr(char *s, char c);

���ڿ� ����
void strcpy(char *s1, char *s2);
s1�� ���ڿ��� �� ����� s2�� ���ڿ��� ����

���ڿ� ����
char* strcat(char *s1, char *s2);

���ڿ� ��
int strcmp(char *s1, char *s2);
ù ���ڿ� ù ���ڸ� ���Ѵ�.
s1 < s2 : ����
s1 == s2 : 0
s1 > s2 : ���
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void strthings_2(char, char);
void strthings_5(char, char);

int main()
{
	char str1[20] = "Hello";
	char str2[20] = "Java";

	strthings_2(str1, str2);
	strthings_5(str1, str2);

	return 0;
}

void strthings_2(char str1[], char str2[])
{
	strcpy(str1, str2);
	// char str1[]; char str2[]; ���� strcpy(str2, str1) �̶�� �ڸ����� �����ϱ� ������ �����߻�. ���� �ڸ����� ó���� ��� ����
	printf("%s : %s\n", str1, str2);
}

void strthings_5(char str1[], char str2[])
{
	printf("%d", strcmp(str1, str2));
}