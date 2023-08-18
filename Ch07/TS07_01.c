#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int su, cnt, hap = 0;

re:
	printf("정수값 입력 : ");
	scanf("%d", &su);

	if (su < 0)
	{
		printf("음의 정수값은 허용하지 않습니다.\n");
		printf("양의 정수값을 다시 입력하세요.\n");
		goto re;
	}
	else
	{	
		for (cnt = 1; cnt <= su; cnt+= 2)
		{
			hap += cnt;
		}
		printf("1부터 %d까지 홀수의 누적 합계는 %d", su, hap);
	}
	return 0;
}