#include <stdio.h>

int main(void)
{
	int a = 103;
	int* pa = NULL;

	pa = &a;

	printf("int a = 103;\n");
	printf("int *pa = NULL;\n");
	printf("pa = &a;\n");

	if (pa != NULL)
	{
		printf("pa�� ��ȿ�� ������\n");
		printf("1.������ pa�� �ּҰ� : %u\n", pa);
		printf("2.�����Ͱ� ����Ű�� *pa�� �����Ͱ� : %u\n", *pa);
	}
	else
	{
		printf("�ҽ� �ڵ� 08���� /* pa = &a; */ó�� �ּ� ó���� ���\n");
		printf("pa�� ��ȿ���� ���� ������!\n");
	}
	return 0;
}