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
	struct student s = { 20231234, "ȫ�浿", 23 };

	s.sd = &d;

	printf("1.�й� : %d\n", s.sno);
	printf("2.���� : %s\n", s.name);
	printf("3.���� : %d\n", s.age);
	printf("4.���� ���� : %d. %d. %d.\n", s.sd->year, s.sd->month, s.sd->day);
	return 0;
}