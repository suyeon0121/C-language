#include <stdio.h>

int main(void)
{
	int cnt;

	printf("1���� 10���� ���� �հ� ���\n");

	for (cnt = 1; cnt <= 10; cnt++)
	{
		int sum = 0;
		sum += cnt;
	}

	printf("1���� 10���� ���� �հ� : %d\n", sum);
	return 0;
}