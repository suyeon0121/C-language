#pragma warning(disable : 4996)
#include <stdio.h>

int Gob(int* pa, int* pb);

int main(void)
{
	int a = 10; 
	int b = 20;
	int result;

	printf("�� �Լ��� �Ű������� �����͸� ���޹޾� ���� ������ �ϴ� ���α׷�\n");
	printf("�־��� �� : a = 10, b = 20\n");

	result = Gob(&a, &b);

	printf("��ȯ�� �� : a * b = %d\n", result);
	printf("���α׷� ����");

	return 0;
}

int Gob(int* pa, int* pb)
{
	printf("[ ���� �Լ� ���� ]\n");

	return *pa * *pb;
}