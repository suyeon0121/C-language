#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	double d_num;

	printf("�Ǽ��� ��� �Է� : ");
	scanf_s("%lf", &d_num);

	printf("float�� ��� : %f\n", d_num);
	printf("e ������ ��� : %e\n", d_num);
	printf("E ������ ��� : %E\n", d_num);
	return 0;
}