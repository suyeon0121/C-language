#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int cnt, su, hap = 0;

	printf("Ȧ���� continue ���� ����Ͽ� �ǳʶݴϴ�.\n");
	printf("���� �Է� : ");
	scanf_s("%d", &su);

	for (cnt = 1; cnt <= su; cnt++)
	{
		if ((cnt % 2) != 0)
			continue;
		else
		{
			hap += cnt;
			printf("%3d", cnt);

			if ((cnt % 20) == 0)
				printf("\n");
		}
	}
	printf("\n1���� %d���� ¦���� ���� �հ� : %d\n", su, hap);
	return 0;
}