#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int jumsu, mok;
	char* grade;

	printf("점수 입력 : ");
	scanf("%d", &jumsu);

	if (jumsu > 100 || jumsu < 0)
	{
		printf("입력한 점수 %d는(은) 허용 구간이 아닙니다.\n", jumsu);
		printf("프로그램을 다시 실행하세요.");
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
		printf("입력한 점수 : %d\n", jumsu);
		printf("점수 등급 : %s 학점\n", grade);
	}
	return 0;

}