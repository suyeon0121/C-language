#include <stdio.h>

int Add();
int G_a;
int G_b;

int main(void)
{
	int sum = 0;
	G_a = 10;
	G_b = 20;

	printf("����> G_a = 10, G_b = 20�� �� ���� ���� ���\n");
	printf("\n[main() �Լ� ����]\n");
	printf("ȣ��> ���� ���� ���� Add() �Լ� ȣ��\n");
	
	sum = Add();

	printf("\n[main() �Լ� ����]\n");
	printf("ȸ��> Add() �Լ��κ��� ���� ���� ��� ��ȯ\n");
	printf("���> ���� ���� ��� : %d + %d = %d\n", G_a, G_b, sum);
	return 0;
}

int Add()
{
	int hap = 0;
	hap = G_a + G_b;

	printf("[Add() �Լ� ����]\n");
	printf("����> ���� 2���� ���� ���� ����\n");

	return hap;
}