#include <stdio.h>

int main(void)
{
	int arr[] = { 23, 10, 15, 92, 88 };
	int* max;
	int cnt;

	max = (int*)arr[0];

	printf("■ 주어진 배열 요소 중에서 최댓값 구하는 프로그램\n");
	printf("배열 요소 : arr[] = { 23, 10, 15, 92, 88 }\n");

	for (cnt = 0; cnt < 5; cnt++)
	{
		printf("%d번째 배열 요소 : %d\n", cnt + 1, arr[cnt]);

		if (arr[cnt] > (int)max)
			max = (int*)arr[cnt];
	}
	printf("5개 숫자 중에서 최댓값은 %d입니다.\n", max);
	return 0;
}