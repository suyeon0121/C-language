#include <stdio.h>

int main(void)
{
	int num, val1, val2, val3, val4;
	num = 5;

	val1 = num << 1;
	val2 = num << 2;
	val3 = num >> 1;
	val4 = num >> 2;

	printf("num = 5�� ��\n");
	printf("1. ���� ����Ʈ ����\n");
	printf("num << 1 : %d\n", val1);
	printf("num << 2 : %d\n", val2);
	printf("2. ������ ����Ʈ ����\n");
	printf("num >> 1 : %d\n", val3);
	printf("num >> 2 : %d\n", val4);
	return 0;
}