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
		printf("%d��° ���� ���� : %d", i+1, a[i]);
		printf(" >> ������ �ּ� : %d\n", p);
	}
	
	avg = sum / 3.0;
	printf("���� : %d >> ������ �ּ� : %d\n", sum, &sum);
	printf("��� : %.2f >> ������ �ּ� : %d", avg, &avg);

	return 0;
}