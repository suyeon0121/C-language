#pragma warning(disable : 4996)
#include <stdio.h>
#define SR 2		// �л���
#define SC 3		// �����
#define DR 3		// ���� �� �迭 ũ��
#define DC 9		// ���ڿ� �迭 ��� 

int main(void)
{
	int score[SR][SC];
	char det[DR][DC] = {"��������", "��������", "��������"};
	int grade, cnt, jumsu, sum = 0;
	float avg;

	printf("�� 2���� 3�� ���� ������ ���� ������ ����� ���� ����ϴ� ���α׷�\n");

	for (cnt = 0; cnt < SR; cnt++)
	{
		printf("��>> [ %d��° ] �л��� 3�� ���� ������ �Է��Ͻÿ�.\n", cnt + 1);

		for (grade = 0; grade < SC; grade++)
		{
			printf("%s : ", det[grade]);
			scanf_s("%d", &score[cnt][grade]);
			sum += score[cnt][grade];
			avg = sum / 3.0;
		}
		printf("��>> ��� ���� : %.2f\n\n", avg);
		sum = 0;
	}
	return 0;
}