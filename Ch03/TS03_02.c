#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	char op;
	char str[12];

	printf("1.���� �Է� : ");
	scanf_s("%c", &op, sizeof(op));

	getchar();
	printf("2.���ڿ� �Է� : ");
	scanf_s("%s", str, sizeof(str));

	printf("���� ��� : %c \n", op);
	printf("���ڿ� ��� : |%s\t|", str);
	return 0;
}