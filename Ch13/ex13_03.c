#include <stdio.h>

int main(void)
{
	int cnt;

	printf("���� ��û ���� ��Ȳ\n");
	char* dept[] = { "�ü��", "������ �м�", "�繰���ͳ�", "����Ʈ�������" };

	for (cnt = 0; cnt < 4; cnt++)
		printf("����%d : %s\n", cnt + 1, dept[cnt]);

	return 0;
}