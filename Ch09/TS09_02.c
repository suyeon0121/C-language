#include <stdio.h>

void Login();

int main(void)
{
	int cnt;

	printf("�� ���� ���� ������ �α��� ���θ� �Ǻ��ϴ� ���α׷�\n");
	printf("for ������ �α��� �Ǻ� �Լ� 3ȸ ȣ��\n");

	for (cnt = 1; cnt <= 3; cnt++)
	{
		printf("%dȸ ���� : ", cnt);
		Login();
	}
	printf("�� %dȸ�� ���� �� ���α׷��� �����մϴ�.\n", cnt-1);
	return 0;
}

void Login()
{
	static int log = 0;

	if (log == 0)
	{
		printf("�α��� ����\n");
		log = 1;
	}
	else 
	{
		printf("���� �α��� ����\n");
		printf("Ȯ��\n");
	}
}