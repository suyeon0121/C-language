#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	system("title ���� 2�� �Է¹޾� ���� ����");

	int num1, num2, cha;

	printf("1.�� ���� ���� �Է� : ");
	scanf_s("%d %d", &num1, &num2);

	cha = num1 - num2;
	printf("2.���� ��� : %d - %d = %d\n", num1, num2, cha);
	return 0;
}