#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	float num;
	float* pd;

	printf("�Ǽ� �Է�(�Ҽ� ��° �ڸ�����) : ______\b\b\b\b\b\b");
	scanf_s("%f", &num);

	pd = &num;

	printf("\n������ pd�� ���� �ּҰ� : %d\n", pd);
	printf("������ pd�� ���� �����Ͱ� : %f\n\n", num);

	*(pd)++;

	printf("������ (*pd)++ ���� ���� �� �ּҰ� : %d\n", pd);
	printf("������ (*pd)++ ���� ���� �� �����Ͱ� : %f\n", num);

	return 0;
}