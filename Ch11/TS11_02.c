#include <stdio.h>
#define R 3

int main(void)
{
	int a[] = { 95, 89, 97 };
	int* p;
	int sum = 0;
	float avg;

	p = a;

	for (int i = 0; i < R; i++)
	{
		sum += *p++;
		printf("%d번째 과목 점수 : %d", i+1, a[i]);
		printf(" >> 포인터 주소 : %d\n", p);
	}
	
	avg = sum / 3.0;
	printf("총점 : %d >> 포인터 주소 : %d\n", sum, &sum);
	printf("평균 : %.2f >> 포인터 주소 : %d", avg, &avg);

	return 0;
}