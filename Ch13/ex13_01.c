#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	char sa[30] = "";
	int cnt = 0;

	printf("���ڿ� �Է� : ");
	scanf_s("%s", sa, sizeof(sa));

	while (sa[cnt] != '\0')
		cnt++;

	printf("�Է��� ���ڿ� ��� : %s\n", sa);
	printf("���ڿ� ���� : %d����Ʈ\n", cnt);
	return 0;
}