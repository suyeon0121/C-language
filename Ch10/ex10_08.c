#include <stdio.h>
#define DT 5
int sv(int score[], int size);

int main(void)
{
	int score[DT] = { 88, 96, 75, 81, 99 };
	int sum = 0;
	float avg;

	printf("���> #define DT 5\n");
	printf("�迭> score[DT] = { 88, 96, 75, 81, 99 };\n");

	sum = sv(score, DT);
	avg = sum / 5.0;

	printf("��ȯ> 5�� ������ ���� : %d\n", sum);
	printf("����> 5�� ������ ��� : %.2f\n", avg);
	return 0;
}

int sv(int score[], int size)
{
	int cnt, total = 0;

	printf("\n����� ���� �Լ��� ���� ���\n");

	for (cnt = 0; cnt < size; cnt++)
		total += score[cnt];

	return total;
}