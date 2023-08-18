#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int cnt, star;

	for (cnt = 1; cnt <= 5; cnt++)
	{
		printf("%d행 : ", cnt);
		for (star = 5; star >= cnt; star--)
			printf("*");

		printf("\n");
	}
	return 0;
}