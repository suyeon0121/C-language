#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "Have a Good Time";

	printf("���ڿ� : %s\n", str);

	_strrev(str);

	printf("\n���ڿ��� �������� ��ȯ\n");
	printf("_strrev() �Լ� ��� : %s\n", str);

	_strrev(str);

	printf("���ڿ��� ������� ��ȯ\n");
	printf("_strrev() �Լ� ��� : %s\n", str);
	return 0;
}