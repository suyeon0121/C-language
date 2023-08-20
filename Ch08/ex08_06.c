#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
	system("title system() 함수 사용 프로그램");

	printf("현재 프로그램이 존재하는 디렉터리 정보 출력\n");

	system("dir");
	printf("\n\n아무 키나 누르면 프로그램이 종료됩니다.\n");
	printf("문자 입력 : ");

	_getch();
	system("cls");
	return 0;
}