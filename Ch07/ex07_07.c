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
			printf(" : 바깥쪽 for 문 %d일 때, 안쪽 for 문은 %d\n", dan, cnt);
		}
		printf("\n");
	}
	return 0;
}