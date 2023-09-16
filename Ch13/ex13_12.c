#include <stdio.h>

int main(void)
{
	char name[20];
	char dept[30];

	printf("성명 : ");
	gets_s(name, 20);

	printf("학과 : ");
	gets_s(dept, 30);

	printf("\n입력 사항 출력\n");
	printf("성명 : ");
	puts(name);

	printf("학과 : ");
	puts(dept);
	return 0;
}