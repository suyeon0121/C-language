#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	float height, weight, swap, bmi;

	printf("Ű�� ü���� �Ҽ� ��° �ڸ����� �Է�\n");

	printf("Ű �Է�(cm) : ");
	scanf_s("%f", &height);
	printf("ü�� �Է�(kg) : ");
	scanf_s("%f", &weight);

	swap = height / 100;
	bmi = weight / (swap * swap);
	printf("BMI = ü��(kg) / (Ű(m) x Ű(m))\n");
	printf("��Ƽ���ͷ� �Է��� Ű�� ���ͷ� ȯ���ؼ� ���\n");
	printf("BMI = %.2f\n", bmi);
	return 0;
}