#include <stdio.h>

int main(void)
{
	char c;
	char* pc;
	pc = &c;

	int i;
	int* pi;
	pi = &i;

	double d;
	double* pd;
	pd = &d;

	printf("1.������ ���� ������ ��� �� �ּҰ�\n");
	printf("char�� ������ �ּҰ� : %d\n", pc);
	printf("int�� ������ �ּҰ� : %d\n", pi);
	printf("double�� ������ �ּҰ� : %d\n", pd);

	*pc++;
	*pi++;
	*pd++;

	printf("\n2.������ *p++ ������ ���� �� �ּҰ�\n");
	printf("char�� ������ �ּҰ� : %d\n", pc);
	printf("int�� ������ �ּҰ� : %d\n", pi);
	printf("double�� ������ �ּҰ� : %d\n", pd);
	return 0;
}