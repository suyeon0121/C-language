#pragma warning(disable : 4996)
#include <stdio.h>
#define PI 3.141592

int main(void)
{
	float r, area = 0;

	printf("��ȣ ��� PI : 3.141592\n");
	printf("���� ���� = ���� * ������ * ������\n");

	printf("������ �Է�(cm) : ");
	scanf_s("%f", &r);
	area = PI * r * r;

	printf("������ %fcm�� ���� ���̴� %fcm^2\n", r, area);
	return 0;
}