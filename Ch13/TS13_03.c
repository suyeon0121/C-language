#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20] = "Have a ";
	char str2[10] = "good time";

	printf("�� ���ڿ��� ���հ� ����, ���ڿ� �˻� ���α׷�\n");
	printf("�־��� ���ڿ�\n");
	printf("char str1[20] = { \"%s\" }\n", str1);
	printf("char str2[10] = { \"%s\" }\n", str2);

	strcat_s(str1, sizeof(str1), str2);

	printf("���յ� ���ڿ� : %s\n", str1);

	printf("���ڿ����� \'a\' �˻� : %s\n", strchr(str1, 'a'));
	printf("���ڿ����� \"go\" �˻� : %s\n", strstr(str1, "go"));
	printf("���α׷��� �����մϴ�.\n");
	return 0;
}