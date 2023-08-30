#pragma warning(disable : 4996)
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void menu();
void heart();

int main(void)
{
	int num;

	while (1)
	{
		menu();
		printf(" 번호 선택 : ");
		scanf_s("%d", &num);

		switch (num)
		{
		case 1:
			heart();
			break;
		case 2: 
			printf("프로그램 종료!\n");
			return 0;
		default:
			printf("숫자 입력 오류!\n");
			break;
		}
	}

}

void menu()
{
	printf(" ■ 랜덤 함수로 하트를 찾는 프로그램\n");
	printf(" 1. 프로그램 실행\n");
	printf(" 2. 프로그램 종료\n");
}

void heart()
{
	int x, y;
	int board[10][13] = { 0 };
	srand(time(NULL));

	for (x = 0; x < 10; x++)
		for (y = 0; y < 13; y++)
			if ((rand() % 100) < 20)	// 하트 비중 20%
				board[x][y] = 1;

	printf("----------------------------------------\n");
	for (x = 0; x < 10; x++) {
		for (y = 0; y < 13; y++)
			if (board[x][y])
				printf(" ♥ ");
			else
				printf(" * ");
		printf("\n");
	}

	printf("----------------------------------------\n\n");
}