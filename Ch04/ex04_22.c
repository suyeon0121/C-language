#pragma warning(disable : 4996)
#include <stdio.h>
#define PI 3.141592

int main(void)
{
	float r, area = 0;

	printf("기호 상수 PI : 3.141592\n");
	printf("원의 넓이 = 파이 * 반지름 * 반지름\n");

	printf("반지름 입력(cm) : ");
	scanf_s("%f", &r);
	area = PI * r * r;

	printf("반지름 %fcm인 원의 넓이는 %fcm^2\n", r, area);
	return 0;
}