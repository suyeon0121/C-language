#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int dan, cnt, gob;

	for (dan = 2; dan <= 9; dan++)
	{
		for (cnt = 1; cnt <= 9; cnt++)
		{
			gob = dan * cnt;
			printf("%d x %d = %d", dan, cnt, gob);
			printf(" : �ٱ��� for �� %d�� ��, ���� for ���� %d\n", dan, cnt);
		}
		printf("\n");
	}
	return 0;
}