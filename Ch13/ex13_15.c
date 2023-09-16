#include <stdio.h>
#include <string.h>

#define ST 5

int main(void)
{
	char* str = "C Program";
	char data[20] = "";

	printf("주어진 문자열 : %s\n", str);
	printf("문자열의 길이 : %d\n", strlen(str));

	strcpy_s(data, sizeof(data), str);
	printf("\n복사한 문자열 : %s\n\n", data);

	strncpy_s(data, sizeof(data), str, ST);
	printf("5개 복사한 문자열 : %s\n", data);
	printf("문자열의 길이 : %d\n", strlen(data));
	return 0;
}