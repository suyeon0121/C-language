#include <stdio.h>

void Test(int num1, int num2);

int main(void)
{
	int a = 3, b = 5, hap = 0;

	printf("���� ������ void���� ���� �ذ�\n");
	printf("\n\n[main() �Լ� ����]\n\n");
	printf("��> a = 3, b = 5�� ����� ���� �Լ��� ����\n");

	Test(a, b);
	return 0;
}

void Test(int num1, int num2)
{
	int sum = 0;
	sum = num1 + num2;

	printf("\n\n[Test() �Լ� ����]\n\n");
	printf("��> �� ���� ���� ���� ��� : %d\n", sum);
}