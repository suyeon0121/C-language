#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "C Professional Project Team";

	printf("���ڿ� : %s\n", s);
	printf("���ڿ� ���������� \'P\' ���ڰ� ���Ե� �κ� �˻�\n");
	printf("\nstrrchr() �Լ� ��� : %s\n\n", strrchr(s, 'P'));

	printf("���ڿ����� \"Pro\" ���ڿ��� ���Ե� �κ� �˻�\n");
	printf("strstr() �Լ� ��� : %s\n", strstr(s, "Pro"));
	return 0;
}