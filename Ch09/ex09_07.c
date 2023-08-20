#pragma warning(disable : 4996)
#include <stdio.h>

void CRedit(int cash);

int main(void)
{
	int cnt, cash = 0;

	for (cnt = 1; cnt <= 3; cnt++)
	{
		printf("\n<%d회 실행>\n", cnt);
		printf("현금 : ");
		scanf_s("%d", &cash);

		printf("입금\t\t출금\t\t잔액\n");
		CRedit(cash);
	}

	printf("\n총 %d회 실행 후 프로그램 종료\n", cnt - 1);

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