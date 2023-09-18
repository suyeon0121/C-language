#include <stdio.h>

struct data {
	int year;
	int month;
	int day;
};

struct student {
	int sno;
	char name[10];
	int age;
	struct data* sd;
};

int main(void)
{
	struct data d = { 2023, 03, 03 };
	struct student s = { 20231234, "홍길동", 23 };

	s.sd = &d;

	printf("1.학번 : %d\n", s.sno);
	printf("2.성명 : %s\n", s.name);
	printf("3.나이 : %d\n", s.age);
	printf("4.입학 일자 : %d. %d. %d.\n", s.sd->year, s.sd->month, s.sd->day);
	return 0;
}