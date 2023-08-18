#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int jumsu, cnt = 1;
	char op;

	do {
		printf("<%d회 실행>\n", cnt);
		printf("프로그램을 시작하겠습니까? (Y/N) : ");

		scanf_s("%c", &op);

		if (op == 'N' || op == 'n')
		{
			printf("총 %d회 수행 후 종료합니다.\n", cnt);
			break;
		}
		else if (op == 'Y' || op == 'y')
		{
		re_jumsu:
			printf("점수 입력 : ");
			scanf_s("%d", &jumsu);

			if (jumsu <= 100 && jumsu >= 90)
				printf("A학점\n\n");
			else if (jumsu < 90 && jumsu >= 80)
				printf("B학점\n\n");
			else if (jumsu < 80 && jumsu >= 70)
				printf("C학점\n\n");
			else if (jumsu < 70 && jumsu >= 60)
				printf("D학점\n\n");
			else if (jumsu < 60 && jumsu >= 50)
				printf("F학점\n\n");
			else {
				printf("점수 %d는(은) 허용 구간이 아닙니다.\n", jumsu);
				printf("점수를 다시 입력하세요.\n");
				goto re_jumsu;
			}
			getchar();
			cnt++;
		}
		else
		{
			printf("입력한 알파벳은 %c는(은) 허용되지 않습니다.\n", op);
			printf("알파벳을 다시 입력하세요.\n\n");
			getchar();
			cnt++;
		}
	} while (1);
	return 0;
}