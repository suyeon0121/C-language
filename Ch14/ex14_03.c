#include <stdio.h>

struct person {
	char name[10];
	char gender;
	int age;
};

int main(void)
{
	struct person p1 = { "ȫ�浿", 'M', 23 };
	struct person p2 = { "�谡��", 'W', 20 };

	p2 = p1;

	printf("%8s %8s %8s\n", "����", "����", "����");
	printf("%8s %6c %8d\n", p1.name, p1.gender, p1.age);
	printf("%8s %6c %8d\n", p2.name, p2.gender, p2.age);
	return 0;
}