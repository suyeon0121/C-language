#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	char s;

	printf("알파벳 입력 : ");
	scanf_s("%c", &s);

	printf("입력한 알파벳 : %c\n", s);
	printf("알파벳 아스키코드값 : %d\n", s);
	printf("입력한 알파벳 + 8 : %c\n", s + 8);
	printf("프로그램을 종료합니다.");
}