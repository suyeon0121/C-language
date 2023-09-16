#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "school";
	char* p;
	char chk;

	printf("문자열 : %s\n", s);
	printf("검색할 문자 입력 : ");
	scanf("%c", &chk);

	p = strchr(s, chk);

	if (p != NULL)
		printf("문자열 %s에는 \'%c\'가 존재합니다.\n", s, chk);
	else
		printf("문자열 %s에는 \'%c\'가 존재하지 않습니다.\n", s, chk);

	return 0;
}