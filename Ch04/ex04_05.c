#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	unsigned short a, b, result;

	printf("unsigned short�� ��ȿ ���� : 0 ~ 65,535\n");
	printf("1.ù ��° ���� �Է� : ");
	scanf_s("%hu", &a);
	printf("2.�� ��° ���� �Է� : ");
	scanf_s("%hu", &b);

	result = a - b;
	// %d�� ����ϸ� ���� �޸� ������ Ȱ�� ���� �޽��� ���
	printf("���� ���� : %hu - %hu = %hu\n", a, b, result);
	return 0;
}