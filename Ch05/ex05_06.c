#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int a, b;

	printf("ù ��° ���� �Է� : ");
	scanf_s("%d", &a);
	printf("�� ��° ���� �Է� : ");
	scanf_s("%d", &b);

	printf("a == b : %d\n", a == b);
	printf("a != b : %d\n", a != b);
	printf("a > b : %d\n", a > b);
	printf("a < b : %d\n", a < b);
	printf("a >= b : %d\n", a >= b);
	printf("a <= b : %d\n", a <= b);
	printf("a == 5 : %d\n", a == 5);
	printf("5 == a : %d\n", 5 == a);
	return 0;
}