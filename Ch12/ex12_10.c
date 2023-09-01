#include <stdio.h>
#include <string.h>

void bubble(char*, int);

int main(void)
{
	char str[80];

	printf("문자열 입력 : ");
	gets(str);
	bubble(str, strlen(str));
	printf("문자열을 버블 정렬한 결과 : %s\n", str);
	return 0;
}

void bubble(char* item, int count)
{
	int pass = 0;
	int change = 1;
	int j;
	char t;

	printf("\n[버블 정렬 함수 영역]\n\n");

	while (pass < count - 1 && change)
	{
		change = 0;
		for (j = 0; j < count - pass - 1; ++j)
		{
			if (item[j] > item[j + 1])
			{
				change = 1;
				t = item[j];
				item[j] = item[j + 1];
				item[j + 1] = t;
			}
		}
		pass++;
	}
}