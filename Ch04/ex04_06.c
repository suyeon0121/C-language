#pragma warning(disable : 4996)
#include <stdio.h>

int mian(void)
{
	short min_su, input, result;
	min_su = -32768;

	printf("short형 유효 범위 : -32,768 ~ 32,767\n");
	printf("min_su = -32,768일 때\n");
	printf("뺄셈 연산을 수행할 정수 입력 : ");
	scanf_s("%hi", &input);

	result = min_su - input;
	printf("뺄셈 연산 : %hi - %hi = %hi\n", min_su, input, result);
	return 0;
}