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
	struct student a = { 20231234, "ȫ�浿", 23 };
	struct student b = { 20203567, "�谡��", 20 };

	result = chk(a, b);

	if (result == 1)
		printf("�л� a�� �л� b�� ������ �л��Դϴ�.\n");
	else
		printf("�л� a�� �л� b�� ���� �ٸ� �л��Դϴ�.\n");

	return 0;
}

int chk(struct student s1, struct student s2)
{
	if (s1.sno == s2.sno)
		return 1;
	else
		return 0;
}