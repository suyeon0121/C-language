#include <stdio.h>

int main(void)
{
	int a = 8;
	int* pa = NULL;

	pa = &a;

	float b = 3.75;
	float* pb = &b;

	printf("�Ϲ� ���� a�� �� : %u\n", a);
	printf("�Ϲ� ���� a�� �ּҰ� : %u\n", &a);
	printf("������ pa�� �ּҰ� : %u\n\n", pa);

	printf("�Ϲ� ���� b�� �� : %.2f\n", b);
	printf("�Ϲ� ���� b�� �ּҰ� : %u\n", &b);
	printf("������ pb�� �ּҰ� : %u\n\n", pb);

	printf("NULL�� �ּҰ� : %u\n", NULL);

	return 0;
}