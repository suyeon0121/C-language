#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int input_num;

	printf("���� �Է� : ");
	scanf_s("%d", &input_num);

	if (input_num > 0)
		printf("�Է��� ���� %d��(��) ���� �����Դϴ�.\n", input_num);
	printf("���ǹ��� ���Դϴ�.\n");

	return 0;
}