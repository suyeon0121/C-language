#include <stdio.h>

void NE();
void D_Dash();
void Dash();

int main(void)
{
	printf("매개변수와 반환값이 모두 없는 함수 타입\n");

	Dash();
	printf("사용자 정의 함수 NE()를 호출합니다.\n");
	Dash();

	NE();

	D_Dash();
	printf("프로그램을 종료합니다.\n");
	D_Dash();

	return 0;
}

void NE()
{
	printf("\n[사용자 정의 함수 NE() 영역]\n\n");
}

void D_Dash()
{
	printf("==========================================\n");
}

void Dash()
{
	printf("------------------------------------------\n");
}