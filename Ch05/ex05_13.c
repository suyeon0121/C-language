#include <stdio.h>

int main(void)
{
	int varsize = 8;

	printf("������ ���� int varsize = 8 ����\n");
	printf("1.���� varsize ũ�� : %d����Ʈ\n", sizeof(varsize));
	printf("2.�ڷ��� char ũ�� : %d����Ʈ\n", sizeof(char));
	printf("3.�ڷ��� short ũ�� : %d����Ʈ\n", sizeof(short));
	printf("4.�ڷ��� int ũ�� : %d����Ʈ\n", sizeof(int));
	printf("5.�ڷ��� float ũ�� : %d����Ʈ\n", sizeof(float));
	printf("6.�ڷ��� double ũ�� : %d����Ʈ\n", sizeof(double));
	return 0;
}