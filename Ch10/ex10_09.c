#include <stdio.h>
#define DT 5
int gob(int ta);

int main(void)
{
	int su[DT] = { 1, 2, 3, 4, 5 };
	int result;

	printf("�迭> su[DT] = { 1, 2, 3, 4, 5 }\n");
	printf("����> su[3] = %d --> �迭 ��� ���纻 ����\n", su[3]);

	result = gob(su[3]);

	printf("��ȯ> gob(su[3]) ȣ�� ��� ��ȯ : %d\n", result);
	printf("�迭Ȯ��> su[3] ���� �� : %d \n", su[3]);
	return 0;
}

int gob(int ta)
{
	int mul;

	mul = ta * ta;

	printf("\n����� ���� �Լ� gob() ȣ��\n");
	printf("����> su[3] �迭 ����� ���� : %d * %d = %d\n", ta, ta, mul);

	return mul;
}