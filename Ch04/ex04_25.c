#include <stdio.h>

int main(void)
{
	char ch;
	int num1;
	float num2;

	ch = 'A' + 5;
	num1 = 3 + 7.8;
	num2 = 5 / 3.0;

	printf("char ch = \'A\' + 5\n");
	printf("���� ���� ���(����) : %c\n", ch);
	printf("���� ���� ���(������) : %d\n", ch);
	printf("int num1 = 3 + 7.8\n");
	printf("���� ���� ��� : %d\n", num1);
	printf("float num2 = 5 / 3.0\n");
	printf("������ ���� ��� : %f\n", num2);
	return 0;
}