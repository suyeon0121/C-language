#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int input_num, result;

	printf("���� �Է� : ");
	scanf_s("%d", &input_num);

	result = input_num % 2;

	if (result != 0)
		printf("�Է��� ���� %d��(��) \"Ȧ��\"�Դϴ�.\n", input_num);
	else 
		printf("�Է��� ���� %d��(��) \"¦��\"�Դϴ�.\n", input_num);

	return 0;
}