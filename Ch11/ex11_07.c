#include <stdio.h>

int main(void)
{
	char c;
	char* pc;
	pc = &c;

	int i;
	int* pi;
	pi = &i;

	double d;
	double* pd;
	pd = &d;

	printf("1.포인터 증감 연산자 사용 전 주소값\n");
	printf("char형 포인터 주소값 : %d\n", pc);
	printf("int형 포인터 주소값 : %d\n", pi);
	printf("double형 포인터 주소값 : %d\n", pd);

	*pc++;
	*pi++;
	*pd++;

	printf("\n2.포인터 *p++ 연산자 수행 후 주소값\n");
	printf("char형 포인터 주소값 : %d\n", pc);
	printf("int형 포인터 주소값 : %d\n", pi);
	printf("double형 포인터 주소값 : %d\n", pd);
	return 0;
}