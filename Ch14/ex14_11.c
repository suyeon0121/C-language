#include <stdio.h>

union mem {
	unsigned long sno;
	char name[10];
	int age;
};

int main(void)
{
	union mem udata;

	printf("udata.sno�� ũ��� %d\n", sizeof(udata.sno));
	printf("udata.name�� ũ��� %d\n", sizeof(udata.name));
	printf("udata.age�� ũ��� %d\n", sizeof(udata.age));

	printf("\nudata.sno�� �ּҴ� %d\n", &udata.sno);
	printf("udata.name�� �ּҴ� %d\n", &udata.name);
	printf("udata.age�� �ּҴ� %d\n", &udata.age);
	return 0;
}