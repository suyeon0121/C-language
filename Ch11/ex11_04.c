#include <stdio.h>

int main(void)
{
	int a = 30;
	int* p = NULL;

	printf("a = 30, p = &a�� ��\n");

	p = &a;
	printf("1.������ p�� �ּҰ� : %u\n", p);
	printf("2.�����Ͱ� ����Ű�� *p�� �����Ͱ� : %u\n", *p);

	printf("\n*p = 50�� ��\n");

	*p = 50;
	printf("1.������ p�� �ּҰ� : %u\n", p);
	printf("2.�����Ͱ� ����Ű�� *p�� �����Ͱ� : %u\n", a);
	return 0;
}