#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int cnt = 1;
	char op;

	while (1)
	{
		printf("알파벳 입력 : ");
		scanf_s("%c", &op);

		if (op == 'Q' || op == 'q')
		{
			printf("총 %d회 실행하여 알파벳을 찾았습니다.\n", cnt);
			printf("찾은 알파벳은 대소문자 구별 없이 \'Q\'입니다.\n");
			break;
		}
		else
		{
			printf("찾는 알파벳이 아닙니다. 알파벳을 다시 입력하세요.\n\n");
			getchar();
		}
		cnt++;
	}
	return 0;
}