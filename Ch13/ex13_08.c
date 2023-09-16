#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int op;

	printf("문자 입력 : ");
	op = getchar();

	if (isalnum(op))
		printf("입력한 %c는(은) 숫자 또는 알파벳입니다.\n", op);
	else
		printf("입력한 %c는(은) 숫자 또는 알파벳이 아닙니다.\n", op);
	return 0;
}