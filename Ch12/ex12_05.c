#include <stdio.h>

int hap(int a, int b);
int cha(int a, int b);

int main(void)
{
	int result;
	int(*fp)(int, int);

	printf("100�� 200�� ���� ����� ���� ����\n");

	fp = hap;
	result = fp(100, 200);
	printf("���� ���� ��� : %d\n", result);

	fp = cha;
	result = fp(100, 200);
	printf("���� ���� ��� : %d\n", result);
	return 0;
}

int hap(int a, int b)
{
	int sum;

	printf("\n[hap( ) �Լ� ����]\n\n");
	sum = a + b;
	return sum;
}

int cha(int a, int b)
{
	int sub;

	printf("\n[cha( ) �Լ� ����]\n\n");
	sub = a - b;
	return sub;
}