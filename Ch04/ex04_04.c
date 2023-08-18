#include <stdio.h>

int main(void)
{
	unsigned long money;

	printf("unsigned long형 유효 범위 : 0 ~ 42,9498,7295\n");

	printf("1.보유 현금 입력 : ");
	scanf_s("%d", &money);

	printf("2.입력 현금 출력 : %d\n", money);
	return 0;
}