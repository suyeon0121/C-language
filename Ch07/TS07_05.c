#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{

	int dan, cnt, recnt = 1, gob; // 구구단 변수, 카운트 변수, 곱셈 저장 변수  
	char yn;

	do {
		printf("< %d 회 실행 >", recnt);
		printf("\n");

		for (cnt = 1; cnt <= 9; cnt++)         // 1~9까지 카운트
		{
			for (dan = 2; dan <= 9; dan++)     // 구구단 변수
			{
				gob = dan * cnt;          // 구구단 계산
				printf(" %d x %d = %02d ", dan, cnt, gob);
			}
			printf("\n");   // 하나의 구구단이 모두 출력되면 한줄 띄움
		}

	re:
		printf("프로그램을 다시 실행하겠습니까? (Y/N) : ");
		scanf_s("%c", &yn, sizeof(yn));
		getchar();

		switch (yn)
		{
		case 'Y': case 'y':
			recnt++;
			continue;
			break;

		case 'N': case 'n':
			printf("총 %d회 실행 후 프로그램을 종료합니다. \n", recnt);
			return 0;
			break;

		default:
			printf("입력한 알파벳 \"%c\"는(은) 허용하지 않습니다. \n", yn);
			printf("알파벳을 다시 입력하세요. \n");
			goto re;
			break;
		}
	} while (1);
}