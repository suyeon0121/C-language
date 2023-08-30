#include <stdio.h>
#define P 2
#define R 3
#define C 5

int main(void)
{
	int pg, row, col;
	int index[P][R][C] = {
		{{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15}},
		{{16, 17, 18, 19, 20},
		{21, 22, 23, 24, 25},
		{26, 27, 28, 29, 30}} };

	for (pg = 0; pg < P; pg++)
	{
		printf("\n[%d면] 출력\n", pg + 1);

		for (row = 0; row < R; row++)
		{
			printf("%d행 출력 ... ", row + 1);
			for (col = 0; col < C; col++)
			{
				printf("%2d", index[pg][row][col]);
				printf("[%d][%d][%d] ", pg, row, col);
			}
			printf("\n");
		}
	}
	return 0;
}