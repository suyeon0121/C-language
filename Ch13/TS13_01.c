#include <stdio.h>

int main(void)
{
	puts("■ 표준 입출력 단일 문자 함수로 문자열을 출력하는 프로그램");
	puts(" 3개의 공백 문자 출력 : ");
	putchar('|');
	putchar(' ');
	putchar(' ');
	putchar('|');
	puts("");
	puts("");

	puts("space 문자열을 각각 하나의 문자로 출력");
	putchar('|');
	putchar('s');
	putchar('p');
	putchar('a');
	putchar('c');
	putchar('e');
	putchar('|');
	puts("");
	puts("");

	puts("puts( ) 함수로 zone 문자열 출력");
	puts("|	zone|");
	puts("");

	puts("spacezone 문자열 출력");
	putchar('|');
	putchar(' ');
	putchar('s');
	putchar('p');
	putchar('a');
	putchar('c');
	putchar('e');
	puts("zone |");
	puts("");

	puts("프로그램을 종료합니다.\n");
	return 0;
}