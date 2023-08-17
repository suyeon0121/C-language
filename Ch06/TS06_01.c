#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	char op;

	printf("문자를 입력하시오 : ");
	scanf_s("%c", &op);

	if (op >= 'A' && op <= 'Z')
	{
		printf("입력한 %c는(은) \"알파벳 대문자\"입니다.", op);
	}
	else if (op >= 'a' && op <= 'z')
	{
		printf("입력한 %c는(은) \"알파벳 소문자\"입니다.", op);
	}
	else if (op >= '0' && op <= '9')
	{
		printf("입력한 %c는(은) \"숫자\"입니다.", op);
	}
	else 
		printf("입력한 %c는(은) \"기타 문자\"입니다.", op);

	return 0;
}