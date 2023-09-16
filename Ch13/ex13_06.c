#include <stdio.h>
#include <conio.h>

int main(void)
{
	int munja;

	printf("1.getch( ) 함수 사용\n");
	printf("문자 입력 : ");
	munja = _getch();

	printf("\n문자 출력 : ");
	_putch(munja);

	printf("\n\n2._getche() 함수 사용\n");
	printf("문자 입력 : ");
	munja = _getche();

	printf("\n문자 출력 : ");
	_putch(munja);
	return 0;
}