#pragma warning(disable : 4996)
#include <stdio.h>
#define US 1129.50

int main(void)
{
	const float FEES = 0.0175;
	int chsh;
	float dollar = 0, fees_chsh;

	printf("�޷� ȯ�� US = 1129.50\n");
	printf("�޷� ���� �������� FEES = 0.0175\n");

	printf("ȯ���� �ݾ�(��ȭ) : ");
	scanf_s("%d", &chsh);
	dollar = chsh / US;
	fees_chsh = chsh * FEES;

	printf("ȯ�� �� ��ȭ �ݾ� : $ %.2f\n", dollar);
	printf("ȯ�� ������ : �� %.2f\n", fees_chsh);
	return 0;
}