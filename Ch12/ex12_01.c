#include <stdio.h>

int main(void)
{
	char sa[] = "Spacezone";
	char* ps = "Spacezone";
	int cnt;

	printf("�迭 ���� char sa[ ] = \"Spacezone\"\n");
	printf("������ ���� char *ps = \"Spacezone\"\n");

	printf("\n�迭 �ּҰ� : %d\n", sa);
	printf("������ �ּҰ� : %d\n", ps);

	printf("\n[�迭 ���] \t [������ ���]\n");

	for (cnt = 0; cnt < 9; cnt++)
	{
		printf("sa[%d] : %c\t\t", cnt, sa[cnt]);
		printf("*(ps + %d) : %c\n", cnt, *(ps + cnt));
	}
	return 0;
}