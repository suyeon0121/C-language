#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define P 2			// 면의 수
#define R 3			// 행의 수
#define C 5			// 열의 수

int main(void)
{
	int list[P][R][C];
	int cnt, row, col;
	char op;

	do 
	{
		printf("■ 3차원 배열 요소를 랜덤으로 출력하는 프로그램\n");
		srand((unsigned)time(NULL));

		for (cnt = 0; cnt < P; cnt++)
		{
			printf(" [ %d면 ] 출력\n", cnt + 1);

			for (row = 0; row < R; row++)
			{
				printf(" < %d행 출력 >", row + 1);

				for (col = 0; col < C; col++)
				{
					list[cnt][row][col] = rand() % 100;
					printf("%3d ", list[cnt][row][col]);
				}
				printf("\n");
			}
		}
		printf("프로그램 수행 완료!\n");

	re:
		printf("프로그램을 다시 시작하겠습니까? (Y/N) : ");
		scanf_s(" %c", &op, sizeof(op));

		if (op == 'N' || op == 'n')
			break;
		else if (op == 'Y' || op == 'y')
			continue;
		else
		{
			printf(" 알파벳 입력 오류!\n");
			printf(" 알파벳을 다시 입력하세요.\n\n");
			goto re;
		}

	} while (1);

	printf("프로그램을 종료 \n");
	return 0;
}