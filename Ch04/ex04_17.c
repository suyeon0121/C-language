#include <stdio.h>

int main(void)
{
	float f_num;
	f_num = 812.345F;

	printf("float형 상수 출력 : 812.345F\n");
	printf("e 지수형으로 출력 : %e\n", f_num);
	printf("E 지수형으로 출력 : %E\n", f_num);
	return 0;
}