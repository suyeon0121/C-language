#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int kor, eng, math;
	int total = 0;
	float avg;
	
	printf("1.국어 점수 : ");
	scanf_s("%d", &kor);

	printf("2.영어 점수 : ");
	scanf_s("%d", &eng);

	printf("3.수학 점수 : ");
	scanf_s("%d", &math);

	total = kor + eng + math;
	avg = total / 3.0;

	printf("총 점 : %d\n", total);
	printf("평균 점수 : %.2f", avg);
	return 0;
}
