#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	char s;

	printf("���ĺ� �Է� : ");
	scanf_s("%c", &s);

	printf("�Է��� ���ĺ� : %c\n", s);
	printf("���ĺ� �ƽ�Ű�ڵ尪 : %d\n", s);
	printf("�Է��� ���ĺ� + 8 : %c\n", s + 8);
	printf("���α׷��� �����մϴ�.");
}