#include <stdio.h>
#define R 5

double sum(double list[R]);

int main(void)
{
	double list[5] = { 12.3, 35.8, 57.29, 96.53, 28.37 };
	double total;

	printf("�� 1���� �迭 ����� ���� ���� ����� ����ϴ� ���α׷�\n");
	printf("����>> list[5] = { 12.3, 35.8, 57.29, 96.53, 28.37 }\n");
	printf("ȣ��>> ����� ���� �Լ����� �迭 ����� �հ� ����\n\n");

	total = sum(list);

	printf("��ȯ>> ����� ���� �Լ� -> ���� �Լ�\n");
	printf("���>> �迭 ����� �հ� : %.2f\n", total);

	return 0;
}

double sum(double list[R])
{
	double hap = 0;

	printf(">>>>> ����� ���� �Լ� ���� <<<<<\n\n");

	for (int i = 0; i < R; i++)
	{
		hap += list[i];
	}

	return hap;
}