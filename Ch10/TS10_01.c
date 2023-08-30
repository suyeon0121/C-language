#include <stdio.h>
#define R 5

double sum(double list[R]);

int main(void)
{
	double list[5] = { 12.3, 35.8, 57.29, 96.53, 28.37 };
	double total;

	printf("■ 1차원 배열 요소의 덧셈 연산 결과를 출력하는 프로그램\n");
	printf("제시>> list[5] = { 12.3, 35.8, 57.29, 96.53, 28.37 }\n");
	printf("호출>> 사용자 정의 함수에서 배열 요소의 합계 산출\n\n");

	total = sum(list);

	printf("반환>> 사용자 정의 함수 -> 메인 함수\n");
	printf("결과>> 배열 요소의 합계 : %.2f\n", total);

	return 0;
}

double sum(double list[R])
{
	double hap = 0;

	printf(">>>>> 사용자 정의 함수 영역 <<<<<\n\n");

	for (int i = 0; i < R; i++)
	{
		hap += list[i];
	}

	return hap;
}