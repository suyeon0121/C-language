#include <stdio.h>
#include <string.h>

int sequential(char*, int, char);

int main(void)
{
	char str[80];
	char key = 'k';
	int check;

	printf("문자열 입력 : ");
	gets(str);

	check = sequential(str, strlen(str), key);

	if (check < 1)
		printf("입력한 문자열에는 알파벳 소문자 \"k\"가 없습니다.\n");
	else
	{
		printf("알파벳 소문자 \"k\"를 찾았습니다.\n");
		printf("문자열의 %d번째에 있습니다.\n", check + 1);
	}
	return 0;
}

int sequential(char* item, int count, char key)
{
	int i;

	printf("\n[순차 탐색 함수 영역]\n\n");

	for (i = 0; i < count; ++i)

		if (key == item[i])
			return i;

	return -1;
}