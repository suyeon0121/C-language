#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	char dept[20];

	printf("���� �� ���� �߿��� ������ �����ϼ���.\n");
	printf("�� ��� / ���� ���� / ��Ʈ��ũ\n");

	printf("\n1.gets_s() �Լ� ��� : ");
	gets_s(dept, sizeof(dept));

	printf("������ ���� : ");
	puts(dept);

	printf("\n2.scanf() �Լ� ��� : ");
	scanf("%s", dept, sizeof(dept));

	printf("������ ���� : ");
	puts(dept);
	return 0;
}