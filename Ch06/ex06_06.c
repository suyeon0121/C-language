#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int jumsu;
	char grade;

	printf("���� �Է� : ");
	scanf_s("%d", &jumsu);

	if (jumsu >= 90)
		grade = 'A';
	else if (jumsu >= 80)
		grade = 'B';
	else if (jumsu >= 70)
		grade = 'C';
	else if (jumsu >= 60)
		grade = 'D';
	else
		grade = 'F';

	printf("���� ��� : %c����\n", grade);
	return 0;
}