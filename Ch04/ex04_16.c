#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int input_num;

	printf("���� �Է� : ");
	scanf_s("%d", &input_num);

	printf("10������ ��� : %d\n", input_num);
	printf("8������ ��� : %o\n", input_num);
	printf("16������ ��� : %X\n", input_num);
	printf("�Է��� ������ �ش��ϴ� ���� : %c\n", input_num);
	return 0;
}