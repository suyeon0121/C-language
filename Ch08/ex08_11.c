#include <stdio.h>

void NE();
void D_Dash();
void Dash();

int main(void)
{
	printf("�Ű������� ��ȯ���� ��� ���� �Լ� Ÿ��\n");

	Dash();
	printf("����� ���� �Լ� NE()�� ȣ���մϴ�.\n");
	Dash();

	NE();

	D_Dash();
	printf("���α׷��� �����մϴ�.\n");
	D_Dash();

	return 0;
}

void NE()
{
	printf("\n[����� ���� �Լ� NE() ����]\n\n");
}

void D_Dash()
{
	printf("==========================================\n");
}

void Dash()
{
	printf("------------------------------------------\n");
}