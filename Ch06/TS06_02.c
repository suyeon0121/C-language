#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int jumsu, mok;
	char* grade;

	printf("���� �Է� : ");
	scanf("%d", &jumsu);

	if (jumsu > 100 || jumsu < 0)
	{
		printf("�Է��� ���� %d��(��) ��� ������ �ƴմϴ�.\n", jumsu);
		printf("���α׷��� �ٽ� �����ϼ���.");
	}
	else
	{
		mok = jumsu / 5;

		switch (mok)
		{

		case 20:
		case 19:
			grade = "A+";
			break;

		case 18:
			grade = "A0";
			break;

		case 17:
			grade = "B+";
			break;

		case 16:
			grade = "B0";
			break;

		case 15:
			grade = "C+";
			break;

		case 14:
			grade = "C0";
			break;

		case 13:
			grade = "D+";
			break;

		case 12:
			grade = "D0";
			break;

		default: 
			grade = "F";
			break;
		}
		printf("�Է��� ���� : %d\n", jumsu);
		printf("���� ��� : %s ����\n", grade);
	}
	return 0;

}