#include <stdio.h>

int main(void)
{
	int val, a;

	a = 8;
	val = ++a;

	printf(" a = 8�� �� \n");
	printf("1.val = ++a�̸� val = %d, a = %d\n", val, a);

	a = 8;
	val = a++;
	printf("2.val = a++�̸� val = %d, a = %d\n", val, a);

	a = 8;
	val = --a;
	printf("3.val = --a�̸� val = %d, a = %d\n", val, a);

	a = 8;
	val = a--;
	printf("4.val = a--�̸� val = %d, a = %d\n", val, a);
	return 0;
}