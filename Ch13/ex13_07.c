#include <stdio.h>
#include <conio.h>

int main(void)
{
	unsigned char op;

	printf("문자 입력 : ");
	op = _getch();

	while (op != '\r')
	{
		printf("\n입력한 문자 : %c\n", op);
		printf("아스키코드값 : %d\n", op);
		op = _getch();
	}

	printf("프로그램 종료\n");
	return 0;
}