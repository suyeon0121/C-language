#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
	int num;
	char s[30];
	char op;

	do
	{
		printf("\n■ 문자열을 정수형과 실수형으로 변환하는 프로그램\n");
		printf("문자열을 30바이트 이내로 입력 : ");
		gets_s(s, sizeof(s));

		printf("입력 문자열 : \"%s\"\n", s);
		num = atoi(s);
		printf("문자열 -> 정수형으로 변환 : %d\n", num);

	re:
		printf("프로그램을 계속 수행할까요? (Y/N) : ");
		op = _getche();

		if (op == 'Y' || op == 'y')
		{
			printf("\n");
			continue;
		}
		else if (op == 'N' || op == 'n')
		{
			printf("\n프로그램을 종료합니다.\n");
			return 0;
		}
		else
		{
			printf("\n알파벳 입력 오류!\n");
			printf("알파벳을 다시 입력하세요...\n");
			goto re;
		}

	} while (1);

}