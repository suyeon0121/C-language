#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	char str[20];
	int cnt, length = 0;

	printf("��> ���ڿ��� 20����Ʈ �̳��� �Է��Ͻÿ� : ");
	scanf_s("%s", &str, sizeof(str));

	for (cnt = 0; str[cnt] != '\0'; cnt++)
		length++;

	printf("\n");
	printf("��> �Է��� ���ڿ��� ���� : %d����Ʈ\n", length);
	return 0;
}