#include <stdio.h>

int main(void)
{
	double d = 3.3058;
	double* pd;

	pd = &d;

	printf("1.������ pd�� ���� ���� �� �ּҰ��� �����Ͱ�\n");
	printf("������ pd�� ���� �ּҰ� : %u\n", pd);
	printf("������ pd�� ���� �����Ͱ� : %f\n", d);

	(*pd)++;

	printf("\n2.������ (*pd)++ ���� ���� �� �ּҰ��� �����Ͱ�\n");
	printf("������ pd�� ���� ���� �� �ּҰ� : %u\n", pd);
	printf("������ pd�� ���� ���� �� �����Ͱ� : %f\n", d);
	return 0;
}