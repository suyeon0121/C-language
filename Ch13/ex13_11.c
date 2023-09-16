#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int op;

	printf("문자 입력 : ");

	op = getchar();

	if (isalpha(op))
	{
		printf("입력한 문자 %c은(는) 알파벳이 맞습니다.\n", op);

		if (islower(op))
		{
			op = toupper(op);
			printf("알파벳을 대문자 %c로 변환합니다.\n", op);
		}
		else
		{
			op = tolower(op);
			printf("알파벳을 소문자 %c로 변환합니다.\n", op);
		}
	}
	else
		printf("입력한 %c는(은) 알파벳이 아닙니다.\n", op);

	return 0;
}