#pragma warning(disable : 4996)
#include <stdio.h>
#define DT 3

int main(void)
{
	int score[3];
	int cnt, sum = 0;
	float avg;

	for (cnt = 0; cnt < DT; cnt++)
	{
		printf("과목%d 점수 : ___\b\b\b", cnt + 1);
		scanf_s("%d", &score[cnt]);
	}

	for (cnt = 0; cnt < DT; cnt++)
		sum += score[cnt];

	avg = (float)sum / DT;

	printf("총점 : %d\n", sum);
	printf("평균 : %.2f\n", avg);
	return 0;
}