#include <stdio.h>

int main(void)
{
	int num1 = 5, num2 = 3;
	float result;

	printf("int num1 = 5, num2 = 3;\n");

	result = num1 / num2;
	printf("float result = num1 / num2 = %f\n", result);

	result = (float)num1 / num2;
	printf("result = (float)num1 / num2 = %f\n", result);
	return 0;
}