#pragma warning(disable : 4996)
#include <stdio.h>

int Sum(int su);

int main(void)
{
	int input, result;

	printf("1���� �Է¹��� ������ ���� �հ� ����\n");
	printf("-------------------------------------------\n");
	printf("���� �Լ� ����\n");
	printf("1.Ű����� ������ �Է¹��� \n");
	printf("2.����� ���� �Լ� ȣ�� \n");
	printf("3.�Է¹��� �������� ����� ���� �Լ��� ����\n");
	printf("4.����� ���� �Լ����� ���޹��� ����� ���\n");
	printf("-------------------------------------------\n");
	printf("����� ���� �Լ� ����\n");
	printf("1.���� �Լ��κ��� ������ ���޹���\n");
	printf("2.for������ ���� �հ� ����\n");
	printf("3.���� �հ踦 ���� �Լ��� ��ȯ\n");
	printf("-------------------------------------------\n");
	printf("[main() �Լ� ����]\n\n");
	printf("����> ������ �������� ���ұ�� : ");

	scanf_s("%d", &input);

	result = Sum(input);
	printf(" [main() �Լ� ����]\n\n");
	printf("���> 1���� %d���� ���� �հ� : %d\n", input, result);
	return 0;
}

int Sum(int su)
{
	int cnt, hap = 0;

	printf("[Sum() �Լ� ����]\n\n");
	printf("����> 1���� %d���� ���� �հ� �����Ͽ� ��ȯ\n", su);

	for (cnt = 1; cnt <= su; cnt++)
		hap += cnt;
	
	return hap;
}