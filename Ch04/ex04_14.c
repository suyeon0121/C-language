#include <stdio.h>

int main(void)
{
	int dc_num = 123;
	int oc_num = 0123;
	int hx_num = 0x123;

	printf("10���� ��� : %d\n", dc_num);
	printf("8���� ��� : %#o\n", oc_num);
	printf("16���� ��� : %#x\n", hx_num);
	printf("10���� 123�� 10������ ��� : %d\n", dc_num);
	printf("8���� 0123�� 10������ ��� : %d\n", oc_num);
	printf("16���� 0x123�� 10������ ��� : %d\n", hx_num);
	printf("10���� 123�� 8������ ��� : %o\n", dc_num);
	printf("8���� 0123�� 8������ ��� : %o\n", oc_num);
	printf("16���� 0x123�� 8������ ��� : %o\n", hx_num);
	printf("10���� 123�� 16������ ��� : %x\n", dc_num);
	printf("8���� 0123�� 16������ ��� : %x\n", oc_num);
	printf("16���� 0x123�� 16������ ��� : %x\n", hx_num);
	return 0;
}