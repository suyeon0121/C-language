#include <stdio.h>

struct bitdata {
	unsigned b0 : 1;
	unsigned b1 : 1;
	unsigned b2 : 1;
	unsigned b3 : 1;
	unsigned b4 : 1;
	unsigned b5 : 1;
	unsigned b6 : 1;
	unsigned : 8;
};

int main(void)
{
	int a = 65;

	struct bitdata* bt = (struct bitdata*)&a;

	printf("변수 a의 값은 %d\n", a);
	printf("비트 필드의 각 멤버를 2진수로 출력\n");
	printf("%d\t", bt->b6);
	printf("%d\t", bt->b5);
	printf("%d\t", bt->b4);
	printf("%d\t", bt->b3);
	printf("%d\t", bt->b2);
	printf("%d\t", bt->b1);
	printf("%d\t", bt->b0);
	printf("\n\n");
	printf("64 \t 32 \t 16 \t 8 \t 4 \t 2 \t 1 \n");
	return 0;
}