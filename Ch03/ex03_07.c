#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	system("title ������ �������� �ڸ��� ���� ����");

	printf("|%d|", 358);
	printf(": ������ �⺻ �ڸ���\n");

	printf("|%5d|", 358);
	printf(": ��ü �ڸ��� 5��\n");

	printf("|%05d|", 358);
	printf(": ��ü �ڸ����� 5���̰� ��ĭ�� 0���� ä��\n");
	return 0;
}