#pragma warning(disable : 4996)
#include <stdio.h>

void CRedit(int cash);

int main(void)
{
	int cnt, cash = 0;

	for (cnt = 1; cnt <= 3; cnt++)
	{
		printf("\n<%dȸ ����>\n", cnt);
		printf("���� : ");
		scanf_s("%d", &cash);

		printf("�Ա�\t\t���\t\t�ܾ�\n");
		CRedit(cash);
	}

	printf("\n�� %dȸ ���� �� ���α׷� ����\n", cnt - 1);

	return 0;
}

void CRedit(int cash)
{
	static int balance = 0;

	if (cash >= 0)
		printf("%d\t\t\t\t", cash);
	else
		printf("\t\t%d\t\t", -cash);

	balance += cash;
	printf("%d\n", balance);
}