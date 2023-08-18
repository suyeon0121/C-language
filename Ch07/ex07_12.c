#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int cnt;

	cnt = 0;
	while (cnt < 30)
	{
		cnt++;
		printf("%3d", cnt);

		if ((cnt % 5) == 0)
			printf("\n");
	}
	return 0;
}