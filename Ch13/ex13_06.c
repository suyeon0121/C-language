#include <stdio.h>
#include <conio.h>

int main(void)
{
	int munja;

	printf("1.getch( ) �Լ� ���\n");
	printf("���� �Է� : ");
	munja = _getch();

	printf("\n���� ��� : ");
	_putch(munja);

	printf("\n\n2._getche() �Լ� ���\n");
	printf("���� �Է� : ");
	munja = _getche();

	printf("\n���� ��� : ");
	_putch(munja);
	return 0;
}