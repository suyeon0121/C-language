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

		do
		{
			if (hap > 1000)
			{
				printf("�����Ǵ� ���� 1000�� �ʰ��Ͽ����ϴ�.\n");
				break;
			}
			else
				hap += cnt;

			printf("%dȸ �ݺ� ������ : %d\n", cnt, hap);
			cnt++;
		} while (cnt <= su);

		printf("1���� %d���� ������ : %d\n", cnt - 1, hap);
	}
	return 0;
}