#pragma warning(disable : 4996)
#include <stdio.h>
#define CM 2.54

int main(void)
{
	float inch, tcm;

	printf("�� ��ġ�� ��Ƽ���ͷ� ȯ���ϴ� ���α׷� \n");

	printf("��ġ �Է�(�Ҽ� ��° �ڸ�) : ");
	scanf_s("%f", &inch);

	tcm = inch * CM;
	printf("%.2f��ġ�� %.2fcm�Դϴ�.", inch, tcm);
	return 0;
}