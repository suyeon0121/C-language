#include <stdio.h>
#define R 5

int main(void)
{
	int a[] = { 100, 200, 300, 400, 500 };
	int cnt;

	printf("int a[] = { 100, 200, 300, 400, 500 }�� ��\n");
	printf("\n1.�迭 ����� �ּҰ� ���\n");

	for (cnt = 0; cnt < R; cnt++)
		printf("%d��° �迭 ��� a[%d] = &a[%d]\n", cnt + 1, cnt, &a[cnt]);

	printf("\n2.�ּҰ��� �迭 ����� �� ���\n");
	printf("�迭�� ���� �ּҰ� : a�� %u\n", a);
	printf("ù ��° �迭 ����� �� : *a�� %u\n", *a);

	printf("\n���� ���� �� �ּҰ� : a + 1�� %u\n", a + 1);
	printf("���� ���� �� �迭 ����� �� : *(a + 1)�� %u\n", *(a + 1));

	printf("\n�迭�� ���� �ּҰ� : a�� %u\n", a);
	printf("���� ���� �� �ּҰ� : a + 2�� %u\n", a + 2);
	printf("���� ���� �� �迭 ����� �� : *(a + 2)�� %u\n", *(a + 2));
	return 0;
}