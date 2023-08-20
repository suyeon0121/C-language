#pragma warning(disable : 4996)
#include <stdio.h>

void Cash(int money);

int main(void)
{
	int cnt, input, cash = 0;

	printf("■ 정적 변수와 사용자 정의 함수를 사용한 가계부 프로그램\n");
re:
	printf("입출금 횟수 지정(1~10) : ");
	scanf_s("%d", &input);

	if (input < 0 || input > 10)
	{
		printf("허용 범위가 아닙니다.\n");
		printf("다시 입력하세요.\n\n");
		goto re;
	}
	else
	{
		for (cnt = 1; cnt <= input; cnt++)
		{
			printf("< %d 회 실행 >\n", cnt);
			printf("현금 : ");
			scanf_s("%d", &cash);

			printf(" 입금 \t\t출금 \t\t잔액 \n");
			Cash(cash);
		}
	}
	printf("\n 총 %d회를 실행 후 프로그램 종료 \n", cnt - 1);
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