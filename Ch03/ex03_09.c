#include <stdio.h>
#include <stdint.h>

int main(void)
{
	system("title ���ڿ��� �������� �ڸ��� ���� ����");

	printf("|%s|", "Visual-C++");
	printf(": ���ڿ��� �⺻ �ڸ���\n");

	printf("|%12s|", "Visual-C++");
	printf(": ��ü 12�ڸ�, ������ ����\n");

	printf("|%-12s|", "Visual-C++");
	printf(": ��ü 12�ڸ�, ���� ����\n");
	return 0;
}