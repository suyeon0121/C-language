#pragma warning(disable : 4996)
#include <stdio.h>

void hanoi(int n, char a, char b, char c);

int main(void)
{
	int cnt = 3;
	char op;

	do {
		printf("[ 탑의 원판 이동하는 함수 호출 ]\n\n");
		hanoi(cnt, 'A', 'B', 'C');
		printf("\n 원판을 모두 이동하였습니다. \n");

	re:
		printf(" 프로그램을 다시 실행하겠습니까? (Y/N) : ");
		scanf_s("%c", &op);
		getchar();

		switch (op)
		{
		case 'Y':
		case 'y':
			continue;
			
		case 'N':
		case 'n':
			printf(" 프로그램을 종료합니다.\n");
			return 0;
			break;

		default:
			printf("\n %c는(은) 허용되지 않는 알파벳입니다.\n", op);
			printf("알파벳을 다시 입력하세요. \n\n");
			goto re;
		}
	} while (1);
}

void hanoi(int n, char a, char b, char c)
{
	if (n > 0)
	{
		hanoi(n - 1, a, c, b);
		printf("원판%d : 탑 %c에서 탑 %c로 이동 \n", n, a, c);
		hanoi(n - 1, b, a, c);
	}
}