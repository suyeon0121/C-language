#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int su, cnt, hap = 0;

re: 
	printf("������ ���� ���ұ�� : ");
	scanf_s("%d", &su);

	if (su < 0)
	{
		printf("���� ������ ������� �ʽ��ϴ�.\n");
		printf("���α׷��� �ٽ� �����մϴ�.\n\n");
		goto re;
	}
	else
	{
		cnt = 1;

		while (cnt <= su)
		{
			hap += cnt;
			printf("%dȸ �� ������ : %d\n", cnt, hap);
			cnt++;
		}
		printf("1���� %d���� ������ : %d\n", su, hap);
	}
	return 0;
}