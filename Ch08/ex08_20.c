#pragma warning(disable : 4996)
#include <stdio.h>

int Fact(int n);

int main(void)
{
	int input;
	int result;

	printf("����> ���丮�� ���� ���� �Է� : ");

	scanf_s("%d", &input);
	printf("ȣ��> Fact() �Լ� ȣ���Ͽ� ���丮�� ���\n");

	result = Fact(input);
	printf("ȸ��> %d! : %d\n", input, result);
	return 0;
}

int Fact(int n)
{
	if (n <= 1)
		return 1;
	else
	{
		printf("����> %d! : %d * (%d - 1)\n", n, n, n);
		return(n * Fact(n - 1));
	}
}