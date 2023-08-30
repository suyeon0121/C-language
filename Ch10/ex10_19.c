#include <stdio.h>
#define P 2
#define R 2
#define C 3
#define K 2
#define M 7
#define CR 2
#define CC 9

int main(void)
{
	int pg, row, col, cnt = 0, total = 0;
	float avg;
	int oil[P][R][C];
	char pro[K][M] = { "현대", "쌍용" };
	char car[CR][CC] = { "승용차", "SUV" };

	printf("%s와 %s의 제조사별 주유 금액 산출 시작\n\n", pro[0], pro[1]);

	for (pg = 0; pg < P; pg++)
	{
		for (row = 0; row < R; row++)
		{
			printf("제조사 : %s, 3차원 배열 중 [면]\n", pro[pg]);
			printf("1.차종 스타일 : %s, 3차원 배열 중 [행]\n", car[row]);
			printf("2.연차별 주유 금액(단위:백만 원), 3차원 배열 중 [열]\n\n");

			for (col = 0; col < C; col++)
			{
				printf("%d년차 주유 금액 : ", col + 1);
				scanf_s("%d", &oil[pg][row][col]);
			}

			total = oil[pg][row][0] + oil[pg][row][1] + oil[pg][row][2];
			avg = total / 3.0;

			printf("\n3년간 총 주유 금액 : %d백만 원\n", total);
			printf("연간 평균 주유 금액 : %.2f백만 원\n\n", avg);
		}
	}
	return 0;
}