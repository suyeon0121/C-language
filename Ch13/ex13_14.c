#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char* chs;
	int str1;
	double str2;

	chs = "12345";
	str1 = atoi(chs);
	printf("\"12345\" -> ������ int�� ��ȯ : %d\n", str1);

	chs = "12a34";
	str1 = atoi(chs);
	printf("\"12a34\" -> ������ long���� ��ȯ : %d\n", str1);

	chs = "12.345";
	str2 = atof(chs);
	printf("\"12.345\" -> �Ǽ��� float���� ��ȯ : %f\n", str2);

	chs = "a12.34";
	str2 = atof(chs);
	printf("\"a12.34\" -> �Ǽ��� float���� ��ȯ : %f\n", str2);
	return 0;
}