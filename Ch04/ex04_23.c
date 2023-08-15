#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	const float M = 3.305785;
	float flat, area = 0;

	printf("기호 상수 M : 3.305785\n");
	printf("평방미터(m^2) = 평 * 3.305785\n");

	printf("평 입력 : ");
	scanf_s("%f", &flat);
	area = flat * M;

	printf("입력한 %f평은 %fm^2\n", flat, area);
	return 0;
}