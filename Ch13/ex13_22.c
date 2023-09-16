#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "Let's do-our_best! today";
	char div[] = " -_!";
	char* tok;				// 분리된 토큰 저장할 포인터 변수
	char* context;			// 분리된 토큰 저장하기 위한 주소 할당 포인터 변수
	int cnt = 1;

	printf("주어진 문자열 : %s\n", str);
	printf("구분자 : 공백(\" \"), 하이픈(-), 언더바(_), 느낌표(!)\n\n");

	tok = strtok_s(str, div, &context);

	while (tok != NULL)
	{
		printf("%d번째 토큰 : %s\n", cnt, tok);
		tok = strtok_s(NULL, div, &context);	// 다음 토큰을 구하기 위해 NULL 사용
		cnt++;
	}

	return 0;
}