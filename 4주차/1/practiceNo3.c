#include <stdio.h>

int main()
{
	/*
    for(int i = 8; i<16; i++)
	{
		printf("%d %o %x\n", i, i, i);
	}
	*/

	printf("%d %d %d\n", 8, 010, 0x8);
	printf("%d %d %d\n", 9, 011, 0x9);
	printf("%d %d %d\n", 10, 012, 0xA);
	printf("%d %d %d\n", 11, 013, 0xB);
	printf("%d %d %d\n", 12, 014, 0xC);
	printf("%d %d %d\n", 13, 015, 0xD);
	printf("%d %d %d\n", 14, 016, 0xE);
	printf("%d %d %d\n", 15, 017, 0xF);

	return 0;
}
