#include <stdio.h>
#define P 2
#define R 2
#define C 3
#define K 2
#define M 7
#define CR 2
#define CC 9

int main(void)
{
	int pg, row, col, cnt = 0, total = 0;
	float avg;
	int oil[P][R][C];
	char pro[K][M] = { "����", "�ֿ�" };
	char car[CR][CC] = { "�¿���", "SUV" };

	printf("%s�� %s�� �����纰 ���� �ݾ� ���� ����\n\n", pro[0], pro[1]);

	for (pg = 0; pg < P; pg++)
	{
		for (row = 0; row < R; row++)
		{
			printf("������ : %s, 3���� �迭 �� [��]\n", pro[pg]);
			printf("1.���� ��Ÿ�� : %s, 3���� �迭 �� [��]\n", car[row]);
			printf("2.������ ���� �ݾ�(����:�鸸 ��), 3���� �迭 �� [��]\n\n");

			for (col = 0; col < C; col++)
			{
				printf("%d���� ���� �ݾ� : ", col + 1);
				scanf_s("%d", &oil[pg][row][col]);
			}

			total = oil[pg][row][0] + oil[pg][row][1] + oil[pg][row][2];
			avg = total / 3.0;

			printf("\n3�Ⱓ �� ���� �ݾ� : %d�鸸 ��\n", total);
			printf("���� ��� ���� �ݾ� : %.2f�鸸 ��\n\n", avg);
		}
	}
	return 0;
}