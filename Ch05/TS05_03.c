#pragma warning(disable : 4996)
#include <stdio.h>

int main(void)
{
	int a, b;
	int* x, * y;

	printf("���� 2���� �Է��Ͻÿ�(�����ڴ� �޸� ���). : ");
	scanf_s("%d, %d", &a, &b);

	x = &a;
	y = &b;

	printf("�Է��� ���� 2���� %d, %d\n", a, b);
	printf("%d�� �ּҰ� : %d\n", a, x);
	printf("%d�� �ּҰ� : %d\n", b, y);
	return 0;
}