#include <stdio.h>
#define Y 3				// ������
#define P 5				// ��ǰ��

int sum(int sale[Y][P]);

int main(void)
{
	int row, col, total = 0;
	int sale[Y][P] = {
		{2025, 353, 127, 83, 883},
		{2026, 387, 133, 89, 907},
		{2027, 439, 135, 92, 965} };

	printf("��ǻ��\t�����\tŰ����\t���콺\t����Ʈ����\n");

	for (row = 0; row < Y; row++)
	{
		for (col = 0; col < P; col++)
			printf("%d\t", sale[row][col]);

		printf("\n");
	}

	total = sum(sale);

	printf("3�Ⱓ �� ����� : %d�鸸 ��\n", total);
	return 0;
}

int sum(const int sale[Y][P])
{
	int a, b;
	int hap = 0;

	for (a = 0; a < Y; a++)
		for (b = 0; b < P; b++)
			hap += sale[a][b];

	return hap;
}