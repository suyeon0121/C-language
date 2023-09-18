#include <stdio.h>

struct student {
	int sno;
	char name[10];
	int age;
};

struct student becoming();

int main(void)
{
	struct student a;

	a = becoming();

	printf("학번 : %d\n", a.sno);
	printf("성명 : %s\n", a.name);
	printf("나이 : %d\n", a.age);
	return 0;
}

struct student becoming()
{
	struct student s;
	s.sno = 20235678;
	strcpy(s.name, "이겨레");
	s.age = 25;

	return s;
}