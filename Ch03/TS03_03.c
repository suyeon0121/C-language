#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int num1, num2, triple;
	float division;

	printf("������ 2�� �Է� : ");
	scanf_s("%d %d", &num1, &num2);

	triple = num1 * num1 * num1;
	division = (float)num1 / num2;

	printf("������ ���� ��� : %d * %d * %d = %08d \n", num1, num1, num1, triple);
	printf("������ ���� ��� : %d / %d = %08.3f", num1, num2, division);

	return 0;
}