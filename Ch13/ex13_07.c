#include <stdio.h>
#include <conio.h>

int main(void)
{
	unsigned char op;

	printf("���� �Է� : ");
	op = _getch();

	while (op != '\r')
	{
		printf("\n�Է��� ���� : %c\n", op);
		printf("�ƽ�Ű�ڵ尪 : %d\n", op);
		op = _getch();
	}

	printf("���α׷� ����\n");
	return 0;
}