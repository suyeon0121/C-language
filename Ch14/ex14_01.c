#include <stdio.h>
#include <stdlib.h>

struct std {
	int sno;
	char name[10];
	float avg;
};

int main(void)
{
	struct std s;

	printf("구조체 멤버 초기화 선언\n");
	s.sno = 20201233;

	strcpy(s.name, "홍길동");
	s.avg = 88.33;

	printf("구조체 멤버 출력\n");
	printf("학번 : %d\n", s.sno);
	printf("이름 : %s\n", s.name);
	printf("평균 : %.2f\n", s.avg);
	return 0;
}