#pragma warning(disable : 4996)
#include <stdio.h>

void Exchange(float a);

int main(void)
{
	float input;

	printf("��ġ(inch)�� ��Ƽ����(cm)�� ȯ��\n");
	printf("��> ��ġ �Է� : ");
	scanf_s("%f", &input);

	printf("\n");
	Exchange(input);
	printf("\n");

	return 0;
}

void Exchange(float a)
{
	float swap;
	swap = a * 2.5399;
	printf("[Exchange() �Լ� ����]\n\n");
	printf("��> ���� ȯ�� : %.2f inch�� %.2f cm \n", a, swap);
}