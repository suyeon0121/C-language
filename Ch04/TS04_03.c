#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	system("title Test 04_03");
	char str[15];
	
	printf("�� �迭�� ����Ͽ� ���ڿ��� ����ϴ� ���α׷�\n");

	printf("���ڿ� �Է� : ");
	scanf_s("%s", str, sizeof(str));

	printf("���ڿ� ��� : \"%s\"\n", str);
	return 0;
}