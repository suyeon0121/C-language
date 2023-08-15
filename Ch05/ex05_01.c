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

	printf("1.µ¡¼À : 25 + 2 = %d\n", hap);
	printf("2.»¬¼À : 25 - 2 = %d\n", cha);
	printf("3.°ö¼À : 25 * 2 = %d\n", gob);
	printf("4.³ª´°¼À : 25 / 2 = %d\n", div);
	printf("5.³ª¸ÓÁö°ª : 25 % 2 = %d\n", nam);
	return 0;
}