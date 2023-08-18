#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int count, su, hap = 0;

	printf("어디까지 5의 배수를 구할까요 : ");
	scanf_s("%d", &su);

	for (count = 5; count <= su; count += 5)
	{
		hap += count;
		printf("%d까지 5의 배수 누적 합계 출력 : %d\n", count, hap);
	}
	printf("%d까지 5의 배수 누적 합계 = %d\n", su, hap);
	return 0;
}