#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int su, cnt = 1, hap = 0;

	while (1)
	{
		printf("어디까지의 합을 구할까요 : ");
		scanf_s("%d", &su);

		if (su < 0)
		{
			printf("음의 정수는 허용하지 않습니다.\n");
			printf("프로그램을 다시 시작합니다.\n\n");
			continue;
		}
		else
		{
			while (cnt <= su)
			{
				hap += cnt;
				printf("%d까지 누적합... %d\n", cnt, hap);

				if (hap > 50)
				{
					printf("누적합계 50을 초과하여 프로그램을 종료합니다.\n");
					break;
				}
				cnt++;
			}
			return 0;
		}
	}
}