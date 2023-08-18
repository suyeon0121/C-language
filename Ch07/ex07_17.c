#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	char op;

	do {
	reset:
		printf("알파벳 대문자 입력 : ");
		scanf_s("%c", &op);
		getchar();

		if (op >= 'A' && op <= 'Z')
		{
			printf("입력한 알파벳 %c는(은) 대문자가 맞습니다.\n", op);
			printf("수고하셨습니다.\n");
			break;
		}
		else
		{
			printf("입력한 알파벳 %c는(은) 대문자가 아닙니다.\n", op);
			printf("알파벳을 다시 입력하세요.\n");
			goto reset;
		}
	} while (1);
	return 0;
}