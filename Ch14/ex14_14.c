#pragma warning(disable : 4996)
#include <stdio.h>

typedef struct pummok {
	int sno;
	char name[10];
	int age;
} ST;

int main(void)
{
	ST m[3];
	int cnt;

	for (cnt = 0; cnt < 3; cnt++)
	{
		printf("%d��° �л��� �й�, ����, ���� �Է�\n", cnt + 1);
		printf("�й� : ");
		scanf("%d", &m[cnt].sno);
		printf("���� : ");
		scanf("%s", m[cnt].name, 10);
		printf("���� : ");
		scanf("%d", &m[cnt].age);
		printf("\n");
	}

	printf("[�Է��� �л� 3���� ���� ���]\n");
	printf("%s\t\t %s\t\t %s\t \n", "�й�", "����", "����");

	for (cnt = 0; cnt < 3; cnt++)
		printf("%d\t %s\t\t %d\t \n", m[cnt].sno, m[cnt].name, m[cnt].age);

	return 0;
}