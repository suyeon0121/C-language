#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int su, cnt, hap = 0;

re: 
	printf("어디까지 합을 구할까요 : ");
	scanf_s("%d", &su);

	if (su < 0)
	{
		printf("음의 정수는 허용하지 않습니다.\n");
		printf("프로그램을 다시 시작합니다.\n\n");
		goto re;
	}
	else
	{
		cnt = 1;

		while (cnt <= su)
		{
			hap += cnt;
			printf("%d회 빈복 누적합 : %d\n", cnt, hap);
			cnt++;
		}
		printf("1부터 %d까지 누적합 : %d\n", su, hap);
	}
	return 0;
}