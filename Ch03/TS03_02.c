#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	char op;
	char str[12];

	printf("1.문자 입력 : ");
	scanf_s("%c", &op, sizeof(op));

	getchar();
	printf("2.문자열 입력 : ");
	scanf_s("%s", str, sizeof(str));

	printf("문자 출력 : %c \n", op);
	printf("문자열 출력 : |%s\t|", str);
	return 0;
}