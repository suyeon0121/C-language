#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int su, cnt = 1, hap = 0;

re:
	printf("������ �Է� : ");
	scanf_s("%d", &su);

	if (su < 0)
	{
		printf("���� ������ %d��(��) ������� �ʽ��ϴ�.\n", su);
		printf("���� �������� �ٽ� �Է��ϼ���.\n");
		goto re;
	}
	else
	{
		do
		{
			hap += cnt;
			cnt++;
		} while (cnt <= su);

		printf("1���� %d���� ���� �հ�� %d", su, hap);
	}
	return 0;
}