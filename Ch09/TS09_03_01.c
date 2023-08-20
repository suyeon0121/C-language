#pragma warning(disable : 4996)
#include <stdio.h>

int A;
static int B;

void In_Fun(void);
extern int Out_Fun(int a, int b);

int main(void)
{
	int result = 0;

	In_Fun();
	result = Out_Fun(100, 200);

	printf("연산 결과 : %d", result);
	return 0;
}

void In_Fun(void)
{
	printf("전역 변수를 연결하는 함수 프로그램\n");
}