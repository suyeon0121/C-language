#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int su, cnt = 1, hap = 0;

	while (1)
	{
		printf("�������� ���� ���ұ�� : ");
		scanf_s("%d", &su);

		if (su < 0)
		{
			printf("���� ������ ������� �ʽ��ϴ�.\n");
			printf("���α׷��� �ٽ� �����մϴ�.\n\n");
			continue;
		}
		else
		{
			while (cnt <= su)
			{
				hap += cnt;
				printf("%d���� ������... %d\n", cnt, hap);

				if (hap > 50)
				{
					printf("�����հ� 50�� �ʰ��Ͽ� ���α׷��� �����մϴ�.\n");
					break;
				}
				cnt++;
			}
			return 0;
		}
	}
}