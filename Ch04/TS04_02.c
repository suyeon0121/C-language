#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	const float KM = 1.61;
	float mile, tkm;

	printf("■ 마일을 킬로미터로 환산하는 프로그램\n");

	printf("마일 입력(소수 둘째 자리) : ");
	scanf_s("%f", &mile);

	tkm = mile * KM;
	printf("%.2f마일은 %.2fkm입니다.", mile, tkm);
	return 0;
}