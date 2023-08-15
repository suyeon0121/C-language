#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int a, b;
	int* x, * y;

	printf("정수 2개를 입력하시오(구분자는 콤마 사용). : ");
	scanf_s("%d, %d", &a, &b);

	x = &a;
	y = &b;

	printf("입력한 정수 2개는 %d, %d\n", a, b);
	printf("%d의 주소값 : %d\n", a, x);
	printf("%d의 주소값 : %d\n", b, y);
	return 0;
}