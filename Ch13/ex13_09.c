#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int op;

	printf("문자 입력 : ");
	op = getchar();

	if (isalpha(op))
	{
		printf("입력한 문자는 알파벳이 맞습니다.\n");

		if (isupper(op))
			printf("입력한 %c는(은) 알파벳 대문자입니다.\n", op);
		else
			printf("입력한 %c는(은) 알파벳 소문자입니다.\n", op);
	}
	else
		printf("입력한 %c는(은) 알파벳이 아닙니다.\n", op);

	return 0;
}