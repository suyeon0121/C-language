#include <stdio.h>

void creed(char** ppc);
void target(char** ppc);

int main(void)
{
	char* pc;

	printf("���� ��Ȱ ������ �λ� �¿��\n\n");

	creed(&pc);
	printf("��Ȱ ���� : %s\n", pc);

	target(&pc);
	printf("�λ� �¿�� : %s\n", pc);

	return 0;
}

void creed(char** ppc)
{
	*ppc = "���� �Ϸ絵 �ּ��� ������.";
}

void target(char** ppc)
{
	*ppc = "��ȸ���� ���� ���� ����.";
}