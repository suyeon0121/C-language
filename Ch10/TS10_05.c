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
		printf(" ��ȣ ���� : ");
		scanf_s("%d", &num);

		switch (num)
		{
		case 1:
			heart();
			break;
		case 2: 
			printf("���α׷� ����!\n");
			return 0;
		default:
			printf("���� �Է� ����!\n");
			break;
		}
	}

}

void menu()
{
	printf(" �� ���� �Լ��� ��Ʈ�� ã�� ���α׷�\n");
	printf(" 1. ���α׷� ����\n");
	printf(" 2. ���α׷� ����\n");
}

void heart()
{
	int x, y;
	int board[10][13] = { 0 };
	srand(time(NULL));

	for (x = 0; x < 10; x++)
		for (y = 0; y < 13; y++)
			if ((rand() % 100) < 20)	// ��Ʈ ���� 20%
				board[x][y] = 1;

	printf("----------------------------------------\n");
	for (x = 0; x < 10; x++) {
		for (y = 0; y < 13; y++)
			if (board[x][y])
				printf(" �� ");
			else
				printf(" * ");
		printf("\n");
	}

	printf("----------------------------------------\n\n");
}