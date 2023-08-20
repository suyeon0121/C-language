#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main(void)
{
	system("title system() 함수 사용 프로그램");

	printf("현재 프로그램이 존재하는 디렉터리 정보 출력\n");

	system("dir");
	printf("\n이 프로그램은 10초 후 종료됩니다.\n");

	Sleep(10000);
	system("cls");
	return 0;
}