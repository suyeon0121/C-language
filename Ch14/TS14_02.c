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
	struct student s = { 20251234, "ȫ�浿" };

	s.D = &d;

	printf("�� ������ ����ü ����� �����ϴ� ���α׷�\n");
	printf("�й� : %d\n", s.sno);
	printf("���� : %s\n", s.name);
	printf("������� : %d. %02d. %02d.\n", s.D->year, s.D->month, s.D->day);
	return 0;

}