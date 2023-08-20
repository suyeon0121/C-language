#include <stdio.h>

extern int A;

void Out_Fun(void)
{
	A = 10;
	printf("\n[외부 Out_Fun() 함수 영역]\n");
}