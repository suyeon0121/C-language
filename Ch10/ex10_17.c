#pragma warning(disable : 4996)
#include <stdio.h>
#define R 2
#define C 3

int main(void)
{
	int row, col, cnt, class, total = 0;
	float avg;
	int st[R][C];

re:
	printf("�б޼� �Է�(1~3) : ");
	scanf_s("%d", &class);

	if (class < 1 || class > 3)
	{
		printf("�Է°� ����!\n");
		printf("�б޼��� �ٽ� �Է��ϼ���.\n\n");
		goto re;
	}
	printf("%d�� �б޿� ���� ���� ó�� ����\n", class);

	for (cnt = 1; cnt <= class; cnt++)
	{
		printf("�б�%d ���� ����\n\n", cnt);

		for (row = 0; row < R; row++)
		{
			printf("�б�%d�� �л�%d�� 3�� ���� ���� �Է�\n", cnt, row + 1);

			for (col = 0; col < C; col++)
			{
				printf("����%d ���� : ", col + 1);
				scanf_s("%d", &st[row][col]);
			}

			total = st[row][0] + st[row][1] + st[row][2];
			avg = total / 3.0;
			printf("���� : %d\n", total);
			printf("��� : %.2f\n\n", avg);
		}
	}
	printf("��ü %d�� �б��� ���� ó�� ���α׷� ����!\n", class);
	return 0;
}