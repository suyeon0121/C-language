#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int x, y, z, max;

	printf("Ű����� ������ 3���� �Է��Ͻÿ�(�����ڴ� �޸� ���) : ");
	scanf_s("%d,%d,%d", &x, &y, &z);

	printf("Ű����� �Է��� ������ 3���� %d %d %d\n", x, y, z);

	max = (x > y) ? x : y;
	max = (max > z) ? max : z;

	printf("�� �߿��� �ִ��� %d", max);
	return 0;
}