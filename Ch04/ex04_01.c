#include <stdio.h>

int main(void)
{
	short num1;
	int num2;
	long long num3;

	printf("�ڷ����� ũ�⸦ ���ϴ� �Լ� : sizeof() �Լ�\n");
	printf("1.short�� ���� : %d����Ʈ\n", sizeof(num1));
	printf("2.int�� ���� : %d����Ʈ\n", sizeof(num2));
	printf("3.long long�� ���� : %d����Ʈ\n", sizeof(num3));
	printf("1����Ʈ�� 8��Ʈ�Դϴ�.\n");
	printf("4.short�� ���� : %d��Ʈ\n", sizeof(num1) * 8);
	printf("5.int�� ���� : %d��Ʈ\n", sizeof(num2) * 8);
	printf("6.long long�� ���� : %d��Ʈ\n", sizeof(num3) * 8);
	return 0;
}