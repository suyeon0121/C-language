#include <stdio.h>
#include <string.h>

int binary(char*, int, char);

int main(void)
{
	char str[80];
	char key = 'k';
	int check;

	printf("문자열 입력 : ");
	gets(str);

	check = binary(str, strlen(str), key);

	if (check < 1)
	{
		printf("입력한 문자열에는 문자 k가 없습니다.\n");
	}
	else
	{
		printf("문자 k를 찾았습니다.\n");
		printf("문자열의 %d번째에 있습니다.\n", check + 1);
	}
	return 0;
}

int binary(char* item, int count, char key)
{
	int low = 0, high, mid;
	high = count - 1;

	printf("\n[이진 탐색 함수 영역]\n\n");

	while (low <= high)
	{
		mid = (low + high) / 2;

		if (key < item[mid])
			high = mid - 1;
		else
			if (key > item[mid])
				low = mid + 1;
			else
				return mid;
	}
	return -1;
}