#pragma warning(disable : 4996)
#include <stdio.h>

void Cash(int money);

int main(void)
{
	int cnt, input, cash = 0;

	printf("�� ���� ������ ����� ���� �Լ��� ����� ����� ���α׷�\n");
re:
	printf("����� Ƚ�� ����(1~10) : ");
	scanf_s("%d", &input);

	if (input < 0 || input > 10)
	{
		printf("��� ������ �ƴմϴ�.\n");
		printf("�ٽ� �Է��ϼ���.\n\n");
		goto re;
	}
	else
	{
		for (cnt = 1; cnt <= input; cnt++)
		{
			printf("< %d ȸ ���� >\n", cnt);
			printf("���� : ");
			scanf_s("%d", &cash);

			printf(" �Ա� \t\t��� \t\t�ܾ� \n");
			Cash(cash);
		}
	}
	printf("\n �� %dȸ�� ���� �� ���α׷� ���� \n", cnt - 1);
	return 0;
}

void Cash(int money)
{
	static long balance = 0;

	if (money >= 0)
		printf(" %d\t\t \t\t", money);
	else
		printf(" \t\t %d\t\t", -money);

	balance += money;
	printf(" %d \n", balance);
}