#pragma warning(disable : 4996)
#include <stdio.h>

int sum()
{
	int a = 10, b = 20, hap;
	hap = a + b;
	return hap;
}

int main(void)
{
	int result;

	printf("sum() 함수의 덧셈 연산\n");
	result = sum();
	printf("a = 10, b = 20일 때 ");
	printf("결과는 %d\n", result);
	return 0;
}