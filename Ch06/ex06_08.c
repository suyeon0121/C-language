#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int jumsu;
	char grade;

	printf("���� �Է� : ");
	scanf_s("%d", &jumsu);

	if (jumsu >= 90 && jumsu <= 100)
		grade = 'A';
	else if (jumsu >= 80 && jumsu < 90)
		grade = 'B';
	else if (jumsu >= 70 && jumsu < 80)
		grade = 'C';
	else if (jumsu >= 60 && jumsu < 70)
		grade = 'D';
	else if (jumsu >= 0 && jumsu < 60)
		grade = 'F';
	else
	{
		printf("���� ��� ����(0~100)�� �ƴմϴ�.\n");
		printf("���α׷��� �ٽ� �����ϼ���.\n");
		return 0;
	}

	printf("�Է��� ���� : %d\n", jumsu);
	printf("���� ��� : %c����\n", grade);
	return 0;
}