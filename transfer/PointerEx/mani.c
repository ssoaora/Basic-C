#include <stdio.h>

int main()
{
	int a = 3;
	int* p = &a;
	char* pc = (char*)p;

	for (int i = 0; i < 4; i++)
	{
		printf("%p : %02x\n", pc, *pc);  // 32��Ʈ ���ߵ����� 4����Ʈ������ ��µȴ�.
		pc++;
	}

	return 0;
}
