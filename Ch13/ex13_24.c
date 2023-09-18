#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int cnt;
	char s[3][20];

	printf("3개 수강 신청 과목 입력\n");

	for (cnt = 0; cnt < 3; cnt++)
	{
		printf("%02d번째 과목 입력 : ", cnt + 1);
		scanf_s("%s", s[cnt], 20);
	}

	printf("\n3개 수강 신청 과목 출력\n");

	for (cnt = 0; cnt < 3; cnt++)
		printf("%02d번째 과목 출력 : %s\n", cnt + 1, s[cnt]);

	return 0;
}