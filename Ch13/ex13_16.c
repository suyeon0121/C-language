#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[20];
	char s2[20];
	int result;

	printf("s1 ���ڿ� �Է� : ");
	gets_s(s1, sizeof(s1));

	printf("s2 ���ڿ� �Է� : ");
	gets_s(s2, sizeof(s2));

	result = strcmp(s1, s2);
	printf("\nstrcmp() �Լ��� ���ڿ� �� ���\n");

	if (result > 0)
	{
		printf("s1 > s2 �� ����� : %d\n", result);
		printf("���ڿ� �� : s1�� s2 ���ڿ� �ڿ� ����\n");
	}
	else if (result == 0)
	{
		printf("s1 == s2 �� ����� : %d\n", result);
		printf("���ڿ� �� : s1�� s2 ���ڿ��� ����\n");
	}
	else
	{
		printf("s1 < s2 �� ����� : %d\n", result);
		printf("���ڿ� �� : s1�� s2 ���ڿ� �տ� ����\n");
	}
	return 0;
}