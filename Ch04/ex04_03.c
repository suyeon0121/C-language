#include <stdio.h>

int main(void)
{
	signed short num1;
	int num2;

	num1 = 32767;
	num2 = 32767 + 8;

	printf("signed short�� ��ȿ ���� : -32768 ~ 32767\n");
	printf("1.���� short num1 = 32767�� ���� ��� : %7d\n", num1);
	printf("2.���� int num2 = 32767 + 8�� ���� ��� : \7%d\n", num2);
	return 0;
}