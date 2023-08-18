#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	unsigned short a, b, result;

	printf("unsigned short형 유효 범위 : 0 ~ 65,535\n");
	printf("1.첫 번째 정수 입력 : ");
	scanf_s("%hu", &a);
	printf("2.두 번째 정수 입력 : ");
	scanf_s("%hu", &b);

	result = a - b;
	// %d를 사용하면 스택 메모리 비정상 활용 에러 메시지 출력
	printf("뺄셈 연산 : %hu - %hu = %hu\n", a, b, result);
	return 0;
}