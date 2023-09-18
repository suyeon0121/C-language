#pragma warning(disable : 4996)
#include <stdio.h>

struct data {
	int year;
	int month;
	int day;
};

struct student {
	int sno;
	char name[10];
	struct data* D;
};

int main(void)
{
	struct data d = { 2002, 05, 05 };
	struct student s = { 20251234, "홍길동" };

	s.D = &d;

	printf("■ 포인터 구조체 멤버로 선언하는 프로그램\n");
	printf("학번 : %d\n", s.sno);
	printf("성명 : %s\n", s.name);
	printf("생년월일 : %d. %02d. %02d.\n", s.D->year, s.D->month, s.D->day);
	return 0;

}