#include <stdio.h>

int main(void)
{
	int arr[] = { 23, 10, 15, 92, 88 };
	int* max;
	int cnt;

	max = (int*)arr[0];

	printf("�� �־��� �迭 ��� �߿��� �ִ� ���ϴ� ���α׷�\n");
	printf("�迭 ��� : arr[] = { 23, 10, 15, 92, 88 }\n");

	for (cnt = 0; cnt < 5; cnt++)
	{
		printf("%d��° �迭 ��� : %d\n", cnt + 1, arr[cnt]);

		if (arr[cnt] > (int)max)
			max = (int*)arr[cnt];
	}
	printf("5�� ���� �߿��� �ִ��� %d�Դϴ�.\n", max);
	return 0;
}