#include <stdio.h>
#include <math.h>

int main(void)
{
	double result, target = 3.58;

	printf("double�� ���� target�� �� : 3.58\n");

	result = ceil(target);
	printf("�ø� �Լ� ceil( ) ��� ��� : %.2f\n", result);

	result = floor(target);
	printf("���� �Լ� floor( ) ��� ��� : %.2f\n", result);
	return 0;
}