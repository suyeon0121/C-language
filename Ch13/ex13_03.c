#include <stdio.h>

int main(void)
{
	int cnt;

	printf("수강 신청 과목 현황\n");
	char* dept[] = { "운영체제", "빅데이터 분석", "사물인터넷", "소프트웨어공학" };

	for (cnt = 0; cnt < 4; cnt++)
		printf("과목%d : %s\n", cnt + 1, dept[cnt]);

	return 0;
}