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

	printf("�й� : %d\n", a.sno);
	printf("���� : %s\n", a.name);
	printf("���� : %d\n", a.age);
	return 0;
}

struct student becoming()
{
	struct student s;
	s.sno = 20235678;
	strcpy(s.name, "�̰ܷ�");
	s.age = 25;

	return s;
}