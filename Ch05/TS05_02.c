#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int x, y, z, max;

	printf("키보드로 정수값 3개를 입력하시오(구분자는 콤마 사용) : ");
	scanf_s("%d,%d,%d", &x, &y, &z);

	printf("키보드로 입력한 정수값 3개는 %d %d %d\n", x, y, z);

	max = (x > y) ? x : y;
	max = (max > z) ? max : z;

	printf("그 중에서 최댓값은 %d", max);
	return 0;
}