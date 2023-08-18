#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int su, cnt = 1, hap = 0;

re:
	printf("정수값 입력 : ");
	scanf_s("%d", &su);

	if (su < 0)
	{
		printf("음의 정수값 %d는(은) 허용하지 않습니다.\n", su);
		printf("양의 정수값을 다시 입력하세요.\n");
		goto re;
	}
	else
	{
		do
		{
			hap += cnt;
			cnt++;
		} while (cnt <= su);

		printf("1부터 %d까지 누적 합계는 %d", su, hap);
	}
	return 0;
}