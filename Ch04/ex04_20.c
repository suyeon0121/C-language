#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	char arr[6] = "space";
	char input[13];

	printf("arr[6] = \"space\"\n");
	printf("���ڿ� ��� ��� : %s\n", arr);

	printf("���ڿ� �Է� : ");
	scanf_s("%s", input, sizeof(input));

	printf("������ ���ڿ� ��� + �Է��� ���ڿ� = %s%s\n", arr, input);
	return 0;
}