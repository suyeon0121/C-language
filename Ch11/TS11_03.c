#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	float num;
	float* pd;

	printf("실수 입력(소수 셋째 자리까지) : ______\b\b\b\b\b\b");
	scanf_s("%f", &num);

	pd = &num;

	printf("\n포인터 pd의 현재 주소값 : %d\n", pd);
	printf("포인터 pd의 현재 데이터값 : %f\n\n", num);

	*(pd)++;

	printf("포인터 (*pd)++ 증감 연산 후 주소값 : %d\n", pd);
	printf("포인터 (*pd)++ 증감 연산 후 데이터값 : %f\n", num);

	return 0;
}