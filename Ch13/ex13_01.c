#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	char sa[30] = "";
	int cnt = 0;

	printf("문자열 입력 : ");
	scanf_s("%s", sa, sizeof(sa));

	while (sa[cnt] != '\0')
		cnt++;

	printf("입력한 문자열 출력 : %s\n", sa);
	printf("문자열 길이 : %d바이트\n", cnt);
	return 0;
}