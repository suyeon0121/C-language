#include <stdio.h>

int main(void)
{
	int num1, num2, hap, cha, gob, div, nam;
	num1 = 25;
	num2 = 2;

	hap = num1 + num2;
	cha = num1 - num2;
	gob = num1 * num2;
	div = num1 / num2;
	nam = num1 % num2;

	printf("1.���� : 25 + 2 = %d\n", hap);
	printf("2.���� : 25 - 2 = %d\n", cha);
	printf("3.���� : 25 * 2 = %d\n", gob);
	printf("4.������ : 25 / 2 = %d\n", div);
	printf("5.�������� : 25 % 2 = %d\n", nam);
	return 0;
}