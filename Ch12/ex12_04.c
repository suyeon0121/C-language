#include <stdio.h>

int main(void)
{
	int a[2][4] = {
		{10, 20, 30, 0},
		{40, 50, 60, 0}
	};
	int(*four)[4];
	int row, col;

	four = a;
	printf("2차원 배열 요소와 행에 대한 합계 출력\n");

	for (row = 0; row < 2; row++)
		for (col = 0; col < 3; col++)
			four[row][3] += four[row][col];

	for (row = 0; row < 2; row++)
	{
		printf("%d번째 행 배열 요소 출력\n", row + 1);

		for (col = 0; col < 3; col++)
		{
			printf("[%d][%d] : ", row, col);
			printf("%d\t\n", four[row][col]);
		}
		printf("배열 요소 합계 : %d \n\n", four[row][3]);
	}

	return 0;
}