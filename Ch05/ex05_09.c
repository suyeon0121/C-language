#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int num1, num2, max, min;

	printf("���� 2���� ���ʷ� �Է�\n");

	printf("ù ��° ���� : ____ \b\b\b\b\b");
	scanf_s("%d", &num1);

	printf("�� ��° ���� : ____ \b\b\b\b\b");
	scanf_s("%d", &num2);

	max = (num1 > num2) ? num1 : num2;
	min = (num1 < num2) ? num1 : num2;

	printf("�� �� ū �� : %d\n", max);
	printf("�� �� ���� �� : %d\n", min);
	return 0;
}