#pragma warning(disable : 4996)
#include <stdio.h>
#define R 3			// ���� ��ǥ ����
#define C 3			// ���� ��ǥ ����

void grid();

int main(void)
{
	int tic[R][C];
	int row, col, p, g;

	printf("���� ���� Ƚ�� ���� : �� 9ȸ\n\n");
	grid();

	/*-- ������ �ʱ�ȭ --*/
	for (row = 0; row < R; row++)
		for (col = 0; col < C; col++)
			tic[row][col] = ' ';

	/*-- ����ڷκ��� ��ġ�� �Է¹޾� �����ǿ� ǥ�� --*/
	printf("���� ��� -> Ȧ�� Ƚ���� ¦�� Ƚ���� ����� ����\n");
	printf("[����� 1] : Ȧ�� Ƚ�� ���\n");
	printf("[����� 2] : ¦�� Ƚ�� ���\n");
	printf("[��� ����] : 0 ~ 2������ ���!\n\n");

	for (p = 0; p < 9; p++)
	{
	re_play:
		printf("%d��° �Է� : ", p + 1);
		scanf_s("%d %d", &row, &col);

		if (row < 0 || row > 2 || col < 0 || col > 2)
		{
			printf("�Է� ����!\n");
			printf("�ٽ� �Է��ϼ���.\n\n");
			goto re_play;
		}
		tic[row][col] = (p % 2 == 0) ? 'O' : 'X';
	}
	printf("\n���� ���\n");

	for (g = 0; g < R; g++)
	{
		printf("|---|---|---|\n");
		printf("| %c | %c | %c |\n", tic[g][0], tic[g][1], tic[g][2]);
	}
	printf("|---|---|---|\n\n");
	printf("�� %dȸ�� �����Ͽ����Ƿ� ���α׷� ����\n", p);
	return 0;
}

/*-- ȭ�鿡 �������� ����ϴ� ����� ���� �Լ� --*/
void grid()
{
	printf("|---|---|---|\n");
	printf("| 1 | 2 | 3 |\n");
	printf("|---|---|---|\n");
	printf("| 4 | 5 | 6 |\n");
	printf("|---|---|---|\n");
	printf("| 7 | 8 | 9 |\n");
	printf("|---|---|---|\n");
}