#include <stdio.h>

int main(void)
{
	int cnt, sum = 0;

	printf("1���� 10���� ���� �հ� ���\n");

	for (cnt = 1; cnt <= 10; cnt++)
	{
		sum += cnt;
		printf("1���� %d���� ���� �հ� : %d\n", cnt, sum);
	}
	return 0;
}