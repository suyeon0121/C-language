#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	system("title ���� 2�� �Է¹޾� ���� ����");

	int num1, num2, hap;

	printf("1.ù ��° ���� �Է� : ");
	scanf_s("%d", &num1);

	printf("2.�� ��° ���� �Է� : ");
	scanf_s("%d", &num2);

	hap = num1 + num2;
	printf("3.���� ��� : %d + %d = %d\n", num1, num2, hap);
	return 0;
}