#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	system("title 정수 2개 입력받아 뺄셈 연산");

	int num1, num2, cha;

	printf("1.두 개의 정수 입력 : ");
	scanf_s("%d %d", &num1, &num2);

	cha = num1 - num2;
	printf("2.뺄셈 결과 : %d - %d = %d\n", num1, num2, cha);
	return 0;
}