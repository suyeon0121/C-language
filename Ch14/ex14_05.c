#include <stdio.h>

struct show {
	char name[10];
	int su;
	int price;
};

int main(void)
{
	struct show t = { "����Ʈ��", 3, 960 };
	struct show* p;

	p = &t;

	printf("1.����ü ���� t�� ����Ͽ� ���\n");
	printf("%6s %10s %14s\n", "ǰ��", "����", "�ݾ�(õ ��)");
	printf("%8s %6d %12d \n", t.name, t.su, t.price);

	printf("\n2. ����ü ������ ���� *p�� ����Ͽ� ���\n");
	printf("%6s %10s %14s\n", "ǰ��", "����", "�ݾ�(õ ��)");
	printf("%8s %6d %12d\n", (*p).name, (*p).su, (*p).price);

	printf("\n3. ����ü ���� ��� ������ \'->\'�� ����Ͽ� ���\n");
	printf("%6s %10s %14s\n", "ǰ��", "����", "�ݾ�(õ ��)");
	printf("%8s %6d %12d\n", p->name, p->su, p->price);
	return 0;
}