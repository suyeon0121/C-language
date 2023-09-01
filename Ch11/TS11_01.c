#pragma warning(disable : 4996)
#include <stdio.h>

int Gob(int* pa, int* pb);

int main(void)
{
	int a = 10; 
	int b = 20;
	int result;

	printf("■ 함수의 매개변수로 포인터를 전달받아 곱셈 연산을 하는 프로그램\n");
	printf("주어진 값 : a = 10, b = 20\n");

	result = Gob(&a, &b);

	printf("반환된 값 : a * b = %d\n", result);
	printf("프로그램 종료");

	return 0;
}

int Gob(int* pa, int* pb)
{
	printf("[ 곱셈 함수 영역 ]\n");

	return *pa * *pb;
}