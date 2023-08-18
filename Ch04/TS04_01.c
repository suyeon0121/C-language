#pragma warning(disable : 4996)
#include <stdio.h>
#define CM 2.54

int main(void)
{
	float inch, tcm;

	printf("■ 인치를 센티미터로 환산하는 프로그램 \n");

	printf("인치 입력(소수 둘째 자리) : ");
	scanf_s("%f", &inch);

	tcm = inch * CM;
	printf("%.2f인치는 %.2fcm입니다.", inch, tcm);
	return 0;
}