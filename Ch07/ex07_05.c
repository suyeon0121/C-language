#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int count, su, hap = 0;

	printf("������ 5�� ����� ���ұ�� : ");
	scanf_s("%d", &su);

	for (count = 5; count <= su; count += 5)
	{
		hap += count;
		printf("%d���� 5�� ��� ���� �հ� ��� : %d\n", count, hap);
	}
	printf("%d���� 5�� ��� ���� �հ� = %d\n", su, hap);
	return 0;
}