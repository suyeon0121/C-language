#pragma warning(disable : 4996)
#include <stdio.h>

struct pummok {
	char name[10];
	int su;
	int price;
	int tot;
};

int main(void)
{
	struct pummok m[3];
	int cnt;

	printf("�� ����ü �迭�� ����Ͽ� ǰ�� 3���� ó���ϴ� ���α׷�\n");

	for (cnt = 0; cnt < 3; cnt++)
	{
		printf(" %d��° ǰ���� ǰ��, ����, �ܰ� �Է� \n", cnt + 1);
		printf(" ǰ�� : ");
		scanf("%s", m[cnt].name, 10);
		printf(" ���� : ");
		scanf("%d", &m[cnt].su);
		printf(" �ܰ� : ");
		scanf("%d", &m[cnt].price);
	}

	for (cnt = 0; cnt < 3; cnt++)
		m[cnt].tot = m[cnt].su * m[cnt].price;

	printf(" [ ǰ�� 3���� ����, �ܰ�, �ݾ� ��� \n");
	printf(" %s\t %s\t %s\t %s \n", "��ǰ��", "����", "����", "�ݾ�(õ ��)");

	for (cnt = 0; cnt < 3; cnt++)
		printf(" %s\t %3d\t %4d\t %8d\n", m[cnt].name, m[cnt].su, m[cnt].price, m[cnt].tot);

	return 0;

}