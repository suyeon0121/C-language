#include <stdio.h>
#include <string.h>

int main(void)
{
	char* pc;
	int size = 0;
	char st[30] = { 0 };

	pc = st;

	printf("���ڿ� �Է�(30����Ʈ �̳�) : ");
	scanf_s("%s", st, sizeof(st));

	size = strlen(st);
	printf("�Է��� ���ڿ��� ���� : %d����Ʈ\n", size);

	for (int cnt = 0; cnt < size; cnt++)
		printf("*(ps + %02d) : %c\n", cnt, *(pc + cnt));

	return 0;
}