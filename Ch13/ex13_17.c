#include <stdio.h>
#include <string.h>

#define ST 2

int main(void)
{
	char s1[15] = "Space";
	char s2[5] = "Zone";

	printf("s1 문자열 : %s\n", s1);
	printf("s2 문자열 : %s\n", s2);

	strcat_s(s1, sizeof(s1), s2);
	printf("\n문자열 전체 결합 : %s\n", s1);

	strncat_s(s1, sizeof(s1), s2, ST);
	printf("문자열 일부 결합 : %s\n", s1);
	return 0;
}