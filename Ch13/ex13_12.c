#include <stdio.h>

int main(void)
{
	char name[20];
	char dept[30];

	printf("���� : ");
	gets_s(name, 20);

	printf("�а� : ");
	gets_s(dept, 30);

	printf("\n�Է� ���� ���\n");
	printf("���� : ");
	puts(name);

	printf("�а� : ");
	puts(dept);
	return 0;
}