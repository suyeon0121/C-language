#include <stdio.h>

int main(void)
{
	char* season[] = { "Spring", "Summer", "Fall", "Winter" };
	char c = 'F';
	char* pc, ** ppc;
	int cnt;

	pc = &c;
	ppc = &pc;

	printf("�Ϲ� ���� c : %c\n", c);
	printf("������ ���� *pc : %c\n", *pc);
	printf("���� ������ **ppc : %c\n", **ppc);

	ppc = season;

	printf("\n");
	printf("char* season[] = { \"Spring\", \"Summer\", \"Fall\", \"Winter\" }\n");

	for (cnt = 0; cnt < 4; cnt++)
		printf("%d��° �迭 ����� *(ppc + %d) ��� : %s\n", cnt + 1, cnt, *(ppc + cnt));

	return 0;
}
