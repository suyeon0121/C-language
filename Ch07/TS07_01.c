#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int su, cnt, hap = 0;

re:
	printf("������ �Է� : ");
	scanf("%d", &su);

	if (su < 0)
	{
		printf("���� �������� ������� �ʽ��ϴ�.\n");
		printf("���� �������� �ٽ� �Է��ϼ���.\n");
		goto re;
	}
	else
	{	
		for (cnt = 1; cnt <= su; cnt+= 2)
		{
			hap += cnt;
		}
		printf("1���� %d���� Ȧ���� ���� �հ�� %d", su, hap);
	}
	return 0;
}