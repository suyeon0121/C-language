#include <stdio.h>

int main(void)
{
	int cnt;
	char s[4][7] = {
		"Spring",
		"Summer",
		"Fall",
		"Winter"
	};

	printf("������� for ������ ���\n");

	for (cnt = 0; cnt < 4; cnt++)
		printf("%02d��° ���� : %s\n", cnt + 1, s[cnt]);

	return 0;
}