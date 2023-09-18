#include <stdio.h>

struct show {
	char name[10];
	int su;
	int price;
};

int main(void)
{
	struct show t = { "스마트폰", 3, 960 };
	struct show* p;

	p = &t;

	printf("1.구조체 변수 t를 사용하여 출력\n");
	printf("%6s %10s %14s\n", "품목", "수량", "금액(천 원)");
	printf("%8s %6d %12d \n", t.name, t.su, t.price);

	printf("\n2. 구조체 포인터 변수 *p를 사용하여 출력\n");
	printf("%6s %10s %14s\n", "품목", "수량", "금액(천 원)");
	printf("%8s %6d %12d\n", (*p).name, (*p).su, (*p).price);

	printf("\n3. 구조체 간접 멤버 연산자 \'->\'를 사용하여 출력\n");
	printf("%6s %10s %14s\n", "품목", "수량", "금액(천 원)");
	printf("%8s %6d %12d\n", p->name, p->su, p->price);
	return 0;
}