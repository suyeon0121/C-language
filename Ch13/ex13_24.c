#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int cnt;
	char s[3][20];

	printf("3�� ���� ��û ���� �Է�\n");

	for (cnt = 0; cnt < 3; cnt++)
	{
		printf("%02d��° ���� �Է� : ", cnt + 1);
		scanf_s("%s", s[cnt], 20);
	}

	printf("\n3�� ���� ��û ���� ���\n");

	for (cnt = 0; cnt < 3; cnt++)
		printf("%02d��° ���� ��� : %s\n", cnt + 1, s[cnt]);

	return 0;
}