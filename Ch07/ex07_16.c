#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int cnt, su, hap = 0;

	printf("홀수는 continue 문을 사용하여 건너뜁니다.\n");
	printf("정수 입력 : ");
	scanf_s("%d", &su);

	for (cnt = 1; cnt <= su; cnt++)
	{
		if ((cnt % 2) != 0)
			continue;
		else
		{
			hap += cnt;
			printf("%3d", cnt);

			if ((cnt % 20) == 0)
				printf("\n");
		}
	}
	printf("\n1부터 %d까지 짝수의 누적 합계 : %d\n", su, hap);
	return 0;
}