#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int num1, num2;
	float result;

	printf("���� 2���� �Է��ϼ���.\n");
	printf("ù ��° ���� num1 = ");
	scanf_s("%d", &num1);
	printf("�� ��° ���� num2 = ");
	scanf_s("%d", &num2);

	result = num1 / num2;
	printf("������ ���� = num1 / num2 = %d / %d = %f\n", num1, num2, result);
	return 0;
}
