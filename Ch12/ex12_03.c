#include <stdio.h>

int main(void)
{
	int a[5] = { 10, 20, 30, 40, 50 };
	int(*ap)[5];
	int cnt;

	printf("�迭 ���� : int a[5] = { 10, 20, 30, 40, 50 }\n");
	printf("�迭 ������ ���� : int (*ap)[5]\n");

	ap = &a;
	printf("\n�迭 ������ ap�� �ּ� : %d\n\n", ap);

	for (cnt = 0; cnt < 5; cnt++)
		printf("%d��° ��� : %d\n", cnt + 1, (*ap)[cnt]);

	return 0;
}