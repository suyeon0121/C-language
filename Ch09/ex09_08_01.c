#include <stdio.h>

int A;
static int B;

void In_Fun(void);
extern void Out_Fun(void);

int main(void)
{
	printf("���� ������ �ܺ� ���� �Լ� ȣ��\n");
	printf("Ű���� ��� : extern\n");

	Out_Fun();

	printf("1.�ܺ� ���� �Լ����� �� ��� : %d\n", A);
	printf("���� ���� ������ ���� ���� �Լ� ȣ��\n");
	printf("Ű���� ��� : static\n");

	In_Fun();
	printf("2.�ܺ� ���� �Լ����� �� ��� : %d\n", B);
	return 0;
}

void In_Fun(void)
{
	B = 20;
	printf("\n[���� In_Fun() �Լ� ����]\n");
}