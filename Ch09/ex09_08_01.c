#include <stdio.h>

int A;
static int B;

void In_Fun(void);
extern void Out_Fun(void);

int main(void)
{
	printf("전역 변수로 외부 연결 함수 호출\n");
	printf("키워드 사용 : extern\n");

	Out_Fun();

	printf("1.외부 연결 함수에서 값 출력 : %d\n", A);
	printf("정적 지역 변수로 내부 연결 함수 호출\n");
	printf("키워드 사용 : static\n");

	In_Fun();
	printf("2.외부 연결 함수에서 값 출력 : %d\n", B);
	return 0;
}

void In_Fun(void)
{
	B = 20;
	printf("\n[내부 In_Fun() 함수 영역]\n");
}