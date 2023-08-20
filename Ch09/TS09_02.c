#include <stdio.h>

void Login();

int main(void)
{
	int cnt;

	printf("■ 정적 지역 변수로 로그인 여부를 판별하는 프로그램\n");
	printf("for 문으로 로그인 판별 함수 3회 호출\n");

	for (cnt = 1; cnt <= 3; cnt++)
	{
		printf("%d회 실행 : ", cnt);
		Login();
	}
	printf("총 %d회를 수행 후 프로그램을 종료합니다.\n", cnt-1);
	return 0;
}

void Login()
{
	static int log = 0;

	if (log == 0)
	{
		printf("로그인 성공\n");
		log = 1;
	}
	else 
	{
		printf("현재 로그인 상태\n");
		printf("확인\n");
	}
}