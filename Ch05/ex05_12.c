#include <stdio.h>

int main(void)
{
	int a = 35, val;
	int* addr;

	addr = &a;
	val = *addr;

	printf("a = 35�� ��\n");
	printf("1.���� a�� �ּ� : %d\n", addr);
	printf("2.���� a�� �ּ�(16����) : %X\n", addr);
	printf("3.������ ���� *addr�� ����� �� : %d\n", val);
	return 0;
}