#pragma warning(disable : 4996)
#include <stdio.h>

int sum()
{
	int a = 10, b = 20, hap;
	hap = a + b;
	return hap;
}

int main(void)
{
	int result;

	printf("sum() �Լ��� ���� ����\n");
	result = sum();
	printf("a = 10, b = 20�� �� ");
	printf("����� %d\n", result);
	return 0;
}