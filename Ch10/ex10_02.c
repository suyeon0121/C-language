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
		printf("����%d ���� : ___\b\b\b", cnt + 1);
		scanf_s("%d", &score[cnt]);
	}

	for (cnt = 0; cnt < DT; cnt++)
		sum += score[cnt];

	avg = (float)sum / DT;

	printf("���� : %d\n", sum);
	printf("��� : %.2f\n", avg);
	return 0;
}