#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	const float KM = 1.61;
	float mile, tkm;

	printf("�� ������ ų�ι��ͷ� ȯ���ϴ� ���α׷�\n");

	printf("���� �Է�(�Ҽ� ��° �ڸ�) : ");
	scanf_s("%f", &mile);

	tkm = mile * KM;
	printf("%.2f������ %.2fkm�Դϴ�.", mile, tkm);
	return 0;
}