#include <stdio.h>

struct student {
	int sno;
	char name[10];
	int age;
};

int chk(struct student s1, struct student s2);

int main(void)
{
	int result;
	struct student a = { 20231234, "홍길동", 23 };
	struct student b = { 20203567, "김가을", 20 };

	result = chk(a, b);

	if (result == 1)
		printf("학생 a와 학생 b는 동일한 학생입니다.\n");
	else
		printf("학생 a와 학생 b는 서로 다른 학생입니다.\n");

	return 0;
}

int chk(struct student s1, struct student s2)
{
	if (s1.sno == s2.sno)
		return 1;
	else
		return 0;
}