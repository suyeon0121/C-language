#include <stdio.h>

struct person {
	char name[10];
	char gender;
	int age;
};

int main(void)
{
	struct person mc[3] = {
		{"ȫ�浿", 'M', 23},
		{"�谡��", 'W', 20},
		{"�̰ܷ�", 'M', 25}
	};

	int cnt;

	printf("%6s \t %6s %8s %6s\n", "����", "����", "����", "����");

	for (cnt = 0; cnt < 3; cnt++)
	{
		printf("%4d\t", cnt + 1);
		printf("%8s %6c %6d\n", mc[cnt].name, mc[cnt].gender, mc[cnt].age);
	}
	return 0;
}