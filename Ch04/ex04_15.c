#include <stdio.h>

int main(void)
{
	unsigned int un_num = 12345U;
	long lg_num = 1234567890L;

	printf("��ȣ�� ���� 10���� ����� ���� : 12345U\n");
	printf("long�� 10���� ����� ���� : 1234567890L\n");
	printf("��ȣ�� ���� ������� 10������ ��� : %u\n", un_num);
	printf("long�� ������� 10������ ��� : %ld\n", lg_num);
	printf("��ȣ�� ���� ������� 8������ ��� : %o\n", un_num);
	printf("long�� ������� 8������ ��� : %o\n", lg_num);
	printf("��ȣ�� ���� ������� 16������ ��� : %X\n", un_num);
	printf("long�� ������� 16������ ��� : %X\n", lg_num);
	
	return 0;
}