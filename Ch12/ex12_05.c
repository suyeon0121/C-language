#include <stdio.h>

int hap(int a, int b);
int cha(int a, int b);

int main(void)
{
	int result;
	int(*fp)(int, int);

	printf("100°ú 200ÀÇ µ¡¼À ¿¬»ê°ú »¬¼À ¿¬»ê\n");

	fp = hap;
	result = fp(100, 200);
	printf("µ¡¼À ¿¬»ê °á°ú : %d\n", result);

	fp = cha;
	result = fp(100, 200);
	printf("»¬¼À ¿¬»ê °á°ú : %d\n", result);
	return 0;
}

int hap(int a, int b)
{
	int sum;

	printf("\n[hap( ) ÇÔ¼ö ¿µ¿ª]\n\n");
	sum = a + b;
	return sum;
}

int cha(int a, int b)
{
	int sub;

	printf("\n[cha( ) ÇÔ¼ö ¿µ¿ª]\n\n");
	sub = a - b;
	return sub;
}