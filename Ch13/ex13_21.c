#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "Have a Good Time";

	printf("�־��� ���ڿ� : %s\n", str);

	_strupr_s(str, sizeof(str));

	printf("\n���ĺ��� ��� �빮�ڷ� ��ȯ\n");
	printf("_strupr_s() �Լ� ��� : %s\n", str);

	_strlwr_s(str, sizeof(str));

	printf("���ĺ��� ��� �ҹ��ڷ� ��ȯ\n");
	printf("_strlwr_s() �Լ� ��� : %s\n", str);
	return 0;
}