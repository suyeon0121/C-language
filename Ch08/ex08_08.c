#include <stdio.h>

int Add(int num1, int num2);

int main(void)
{
	int a = 10, b = 20, hap = 0;

	printf("�Ű����� 2���� ���� ����\n");
	printf("[main( ) �Լ� ����]\n\n");
	printf("����> %d�� %d�� Add( ) �Լ��� ����\n", a, b);

	hap = Add(a, b);

	printf("[main( ) �Լ� ����]\n\n");
	printf("���> %d�� %d�� ���� ��� : %d\n", a, b, hap);
	return 0;
}

int Add(int num1, int num2)
{
	int result;

	printf("[Add( ) �Լ� ����]\n\n");
	printf("����> ���� ���� ����� main( ) �Լ��� ��ȯ\n");

	result = num1 + num2;
	return result;
}