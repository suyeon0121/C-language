#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	float base, height;
	double result;

	printf("�غ��� ���̿� �Ҽ� ��° �ڸ����� ������ �Է�\n");
	printf("�غ� �Է�(cm) : ");
	scanf_s("%f", &base);
	printf("���� �Է�(cm) : ");
	scanf_s("%f", &height);

	result = (base * height) / 2;

	printf("�ﰢ�� ����(�Ҽ� 6° �ڸ�����) ��� : %f\n", result);
	printf("�ﰢ�� ����(�Ҽ� 15° �ڸ�����) ��� : %.15f\n", result);
	printf("�ﰢ�� ����(�Ҽ� 16° �ڸ�����) ��� : %.16f\n", result);
	printf("�ﰢ�� ����(�Ҽ� 17° �ڸ�����) ��� : %.17f\n", result);
	printf("�ﰢ�� ����(�Ҽ� 18° �ڸ�����) ��� : %.18f\n", result);
	return 0;
}