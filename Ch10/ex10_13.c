#include <stdio.h>
#define R 3
#define C 5

int main(void)
{
	int cnt, sno = 203012101, total = 0;
	float avg;
	int bd[R][C] = {
		{135, 150, 148, 160, 153},
		{115, 120, 123, 121, 112},
		{132, 129, 128, 133, 130} };

	printf(">> ������ ���� ���� : ����� ���� 140 �ʰ�\n");
	for (cnt = 0; cnt < R; cnt++)
	{
		total = bd[cnt][0] + bd[cnt][1] + bd[cnt][2] + bd[cnt][3] + bd[cnt][4];
		avg = total / 5.0;

		printf("\n�� ȯ�� #%d�� ����� ��� ���� �� ����\n", cnt + 1);
		printf("��ȣ : %d\n", sno++);
		printf("���� : %.2f\n", avg);

		if (avg > 140)
			printf("���� : ������\n");
		else
			printf("���� : ����\n");
	}
	return 0;
}