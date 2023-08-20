#include <stdio.h>

void Start();

int main(void)
{
	printf("Start() 함수 3회 호출 결과\n");
	Start();
	Start();
	Start();

	return 0;
}

void Start()
{
	static int s_cnt = 0;
	int a_cnt = 0;

	printf("정적 변수 = %d\t 동적 변수 = %d\n", s_cnt, a_cnt);
	s_cnt++;
	a_cnt++;
}