#include <stdio.h>
#define Y 3				// 연도수
#define P 5				// 제품수

int sum(int sale[Y][P]);

int main(void)
{
	int row, col, total = 0;
	int sale[Y][P] = {
		{2025, 353, 127, 83, 883},
		{2026, 387, 133, 89, 907},
		{2027, 439, 135, 92, 965} };

	printf("컴퓨터\t모니터\t키보드\t마우스\t소프트웨어\n");

	for (row = 0; row < Y; row++)
	{
		for (col = 0; col < P; col++)
			printf("%d\t", sale[row][col]);

		printf("\n");
	}

	total = sum(sale);

	printf("3년간 총 매출액 : %d백만 원\n", total);
	return 0;
}

int sum(const int sale[Y][P])
{
	int a, b;
	int hap = 0;

	for (a = 0; a < Y; a++)
		for (b = 0; b < P; b++)
			hap += sale[a][b];

	return hap;
}