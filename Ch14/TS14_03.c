#include <stdio.h>

struct student {
	char pommok[20];
	int price;
};

int chk(struct student* s1, struct student* s2);

int main(void)
{
	int result;
	struct student a = { "��Ʈ��", 20000 };
	struct student b = { "����Ʈ��", 10000 };

	result = chk(&a, &b);

	printf("�� ����ü �����͸� �Լ��� �μ��� �����ϴ� ���α׷�\n");

	if (result == 1)
		printf("\"%s\"�� \"%s\"�� ������ ǰ���Դϴ�.\n", a.pommok, b.pommok);
	else
		printf("\"%s\"�� \"%s\"�� �ٸ� ǰ���Դϴ�.\n", a.pommok, b.pommok);
}

int chk(struct student* s1, struct student* s2)
{
	if (s1->pommok == s2->pommok)
		return 1;
	else
		return 0;
}