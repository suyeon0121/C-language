#pragma warning(disable : 4996)
#include <stdio.h>

int Fact(int n);

int main(void)
{
	int input;
	int result;

	printf("전달> 팩토리얼 구할 정수 입력 : ");

	scanf_s("%d", &input);
	printf("호출> Fact() 함수 호출하여 팩토리얼 계산\n");

	result = Fact(input);
	printf("회신> %d! : %d\n", input, result);
	return 0;
}

int Fact(int n)
{
	if (n <= 1)
		return 1;
	else
	{
		printf("수행> %d! : %d * (%d - 1)\n", n, n, n);
		return(n * Fact(n - 1));
	}
}