#include <stdio.h>
#include <stdlib.h>

struct std {
	int sno;
	char name[10];
	float avg;
};

int main(void)
{
	struct std s;

	printf("����ü ��� �ʱ�ȭ ����\n");
	s.sno = 20201233;

	strcpy(s.name, "ȫ�浿");
	s.avg = 88.33;

	printf("����ü ��� ���\n");
	printf("�й� : %d\n", s.sno);
	printf("�̸� : %s\n", s.name);
	printf("��� : %.2f\n", s.avg);
	return 0;
}