#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int num, a;
	int* poval;

	printf("Ű����� ���� 1���� �Է��Ͻÿ� : ");
	scanf_s("%d", &num);

	poval = &num;
	a = *poval;

	printf("Ű����� �Է��� ���� ����� �ּ�(16���� ǥ��) : %X\n", poval);
	printf("������ ���� *poval�� ����� ��(10���� ǥ��) : %d", a);
	return 0;
}