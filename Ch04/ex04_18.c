#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	double d_num;

	printf("실수형 상수 입력 : ");
	scanf_s("%lf", &d_num);

	printf("float형 출력 : %f\n", d_num);
	printf("e 지수형 출력 : %e\n", d_num);
	printf("E 지수형 출력 : %E\n", d_num);
	return 0;
}