#include <stdio.h>
#include <string.h>

#define ST 2

int main(void)
{
	char s1[15] = "Space";
	char s2[5] = "Zone";

	printf("s1 ���ڿ� : %s\n", s1);
	printf("s2 ���ڿ� : %s\n", s2);

	strcat_s(s1, sizeof(s1), s2);
	printf("\n���ڿ� ��ü ���� : %s\n", s1);

	strncat_s(s1, sizeof(s1), s2, ST);
	printf("���ڿ� �Ϻ� ���� : %s\n", s1);
	return 0;
}