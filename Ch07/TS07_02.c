#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int su, cnt, hap = 0;

re:
	printf("������ �Է� : ");
	scanf_s("%d", &su);

	if (su < 0)
	{
		printf("���� �������� %d��(��) ������� �ʽ��ϴ�.\n", su);
		printf("���� �������� �ٽ� �Է��ϼ���.\n");
		goto re;
	}
	else
	{
		for (cnt = 1; cnt <= su; cnt++)
		{
			if ((cnt % 2) == 0)
			{
				hap += cnt;
				cnt++;
			}
			else
				continue;
		}
		printf("1���� %d���� ¦���� ���� �հ�� %d", su, hap);
	}
	return 0;
}