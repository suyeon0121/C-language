#include <stdio.h>

struct first {
	int a;
	int b;
};

struct second {
	struct first sa;
	struct first sb;
};

int main(void)
{
	struct second ns;

	ns.sa.a = 10;
	ns.sa.b = 20;
	ns.sb.a = 30;
	ns.sb.b = 40;

	printf("1.ns.sa.a�� ���� %d\n", ns.sa.a);
	printf("2.ns.sa.b�� ���� %d\n", ns.sa.b);
	printf("3.ns.sb.a�� ���� %d\n", ns.sb.a);
	printf("4.ns.sb.b�� ���� %d\n", ns.sb.b);
	return 0;
}