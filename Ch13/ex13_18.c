#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "school";
	char* p;
	char chk;

	printf("���ڿ� : %s\n", s);
	printf("�˻��� ���� �Է� : ");
	scanf("%c", &chk);

	p = strchr(s, chk);

	if (p != NULL)
		printf("���ڿ� %s���� \'%c\'�� �����մϴ�.\n", s, chk);
	else
		printf("���ڿ� %s���� \'%c\'�� �������� �ʽ��ϴ�.\n", s, chk);

	return 0;
}