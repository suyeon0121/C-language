#include <stdio.h>

int main(void)
{
	int a;
	double* pd = NULL;

	pd = &a;
	*pd = 13.8;

	if (pd != NULL)
	{
		printf("pd�� ��ȿ�� ������\n");
		printf("1.������ pd�� �ּҰ� : %u\n", pd);
		printf("2.�����Ͱ� ����Ű�� *pd�� �����Ͱ� : %u\n", *pd);
	}
	else
		printf("pd�� ��ȿ���� ���� ������\n");

	return 0;
}