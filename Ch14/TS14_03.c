#include <stdio.h>

struct student {
	char pommok[20];
	int price;
};

int chk(struct student* s1, struct student* s2);

int main(void)
{
	int result;
	struct student a = { "노트북", 20000 };
	struct student b = { "스마트폰", 10000 };

	result = chk(&a, &b);

	printf("■ 구조체 포인터를 함수의 인수로 전달하는 프로그램\n");

	if (result == 1)
		printf("\"%s\"과 \"%s\"은 동일한 품목입니다.\n", a.pommok, b.pommok);
	else
		printf("\"%s\"과 \"%s\"은 다른 품목입니다.\n", a.pommok, b.pommok);
}

int chk(struct student* s1, struct student* s2)
{
	if (s1->pommok == s2->pommok)
		return 1;
	else
		return 0;
}