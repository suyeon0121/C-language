#include <stdio.h>
#include <string.h>

#define ST 5

int main(void)
{
	char* str = "C Program";
	char data[20] = "";

	printf("�־��� ���ڿ� : %s\n", str);
	printf("���ڿ��� ���� : %d\n", strlen(str));

	strcpy_s(data, sizeof(data), str);
	printf("\n������ ���ڿ� : %s\n\n", data);

	strncpy_s(data, sizeof(data), str, ST);
	printf("5�� ������ ���ڿ� : %s\n", data);
	printf("���ڿ��� ���� : %d\n", strlen(data));
	return 0;
}