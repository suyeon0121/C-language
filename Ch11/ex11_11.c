#include <stdio.h>
#define R 5

int main(void)
{
	int a[R] = { 100, 200, 300, 400, 500 };
	int* pa, cnt, hap = 0;

	pa = a;
	printf("int a[] = { 100, 200, 300, 400, 500 }�� ��\n\n");

	for (cnt = 0; cnt < R; cnt++)
	{
		hap += *pa++;
		printf("%d��° �迭 ��� : %d", cnt + 1, a[cnt]);
		printf("������ �ּ� : %d\n", pa);
	}
	printf("\n%d���� �迭 ��� �հ� : %d\n", cnt, hap);
	return 0;
}