#pragma warning(disable : 4996)
#include <stdio.h>
#define TM 60

int main(void)
{
	int input, m, s;

	printf("���� �Է� : ____\b\b\b\b");
	scanf_s("%d", &input);

	m = input / TM;
	s = input % TM;

	printf(" 1.�Է��� ���� : %d\n", input);
	printf(" 2.��, �� ���� : %d�� %d��\n", m, s);
	return 0;
}