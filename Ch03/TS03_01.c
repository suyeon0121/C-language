#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int kor, eng, math;
	int total = 0;
	float avg;
	
	printf("1.���� ���� : ");
	scanf_s("%d", &kor);

	printf("2.���� ���� : ");
	scanf_s("%d", &eng);

	printf("3.���� ���� : ");
	scanf_s("%d", &math);

	total = kor + eng + math;
	avg = total / 3.0;

	printf("�� �� : %d\n", total);
	printf("��� ���� : %.2f", avg);
	return 0;
}
