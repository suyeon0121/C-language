#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define P 2			// ���� ��
#define R 3			// ���� ��
#define C 5			// ���� ��

int main(void)
{
	int list[P][R][C];
	int cnt, row, col;
	char op;

	do 
	{
		printf("�� 3���� �迭 ��Ҹ� �������� ����ϴ� ���α׷�\n");
		srand((unsigned)time(NULL));

		for (cnt = 0; cnt < P; cnt++)
		{
			printf(" [ %d�� ] ���\n", cnt + 1);

			for (row = 0; row < R; row++)
			{
				printf(" < %d�� ��� >", row + 1);

				for (col = 0; col < C; col++)
				{
					list[cnt][row][col] = rand() % 100;
					printf("%3d ", list[cnt][row][col]);
				}
				printf("\n");
			}
		}
		printf("���α׷� ���� �Ϸ�!\n");

	re:
		printf("���α׷��� �ٽ� �����ϰڽ��ϱ�? (Y/N) : ");
		scanf_s(" %c", &op, sizeof(op));

		if (op == 'N' || op == 'n')
			break;
		else if (op == 'Y' || op == 'y')
			continue;
		else
		{
			printf(" ���ĺ� �Է� ����!\n");
			printf(" ���ĺ��� �ٽ� �Է��ϼ���.\n\n");
			goto re;
		}

	} while (1);

	printf("���α׷��� ���� \n");
	return 0;
}