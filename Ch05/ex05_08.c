#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int input, year;

	printf("�����̸� 1, ����̸� 0 ���\n");

	printf("���� �Է� : ____ \b\b\b\b\b");
	scanf_s("%d", &input);

	year = ((input % 4 == 0) && !(input % 100 == 0)) || (input % 400 == 0);

	printf("�Է��� %d���� %d�� �ش��մϴ�.\n", input, year);
	return 0;
}