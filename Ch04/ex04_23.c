#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	const float M = 3.305785;
	float flat, area = 0;

	printf("��ȣ ��� M : 3.305785\n");
	printf("������(m^2) = �� * 3.305785\n");

	printf("�� �Է� : ");
	scanf_s("%f", &flat);
	area = flat * M;

	printf("�Է��� %f���� %fm^2\n", flat, area);
	return 0;
}