#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main(void)
{
	system("title system() �Լ� ��� ���α׷�");

	printf("���� ���α׷��� �����ϴ� ���͸� ���� ���\n");

	system("dir");
	printf("\n�� ���α׷��� 10�� �� ����˴ϴ�.\n");

	Sleep(10000);
	system("cls");
	return 0;
}