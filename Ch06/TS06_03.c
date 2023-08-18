#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	char season;

	printf("계절을 선택할 알파벳 입력 : ");
	scanf_s("%c", &season);

	switch (season)
	{
	case 'A':
	case 'a':
		printf("봄\n");
		printf("꽃을 가꾼다.");
		break;

	case 'S':
	case 's':
		printf("여름\n");
		printf("수영을 한다.");
		break;

	case 'D':
	case 'd':
		printf("가을\n");
		printf("추수를 한다.");
		break;

	case 'F':
	case 'f':
		printf("겨울\n");
		printf("스키를 탄다.");
		break;

	default:
		printf("허용되지 않는 알파벳입니다.\n");
		printf("대소문자 구별 없이 A, S, D, F만 허용합니다.\n");
		printf("프로그램을 다시 시작하세요.");
	}

	return 0;
}