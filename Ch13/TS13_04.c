#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "SpaceZone";
	int cnt = 0;

	printf("■ 알파벳 대문자만 추출하여 출력하는 프로그램\n");
	printf("프로그램에서 주어진 문자열\n");
	printf("char str[20] = \"%s\"\n", str);
	printf("알파벳 대문자만 추출하여 출력 : ");

	while (str[cnt])
	{
		if (isupper(str[cnt]))
			printf("%c", str[cnt]);

		cnt++;
	}
	printf("\n프로그램을 종료합니다.\n");
	return 0;
}