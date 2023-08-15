#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	system("title Test 04_03");
	char str[15];
	
	printf("■ 배열을 사용하여 문자열을 출력하는 프로그램\n");

	printf("문자열 입력 : ");
	scanf_s("%s", str, sizeof(str));

	printf("문자열 출력 : \"%s\"\n", str);
	return 0;
}