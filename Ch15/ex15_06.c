#include <stdio.h>

int main(void)
{
	char sts[50];
	int cnt;
	FILE* foc = NULL;
	errno_t err;

	err = fopen_s(&foc, "save.txt", "w");

	if (err == 0)
	{
		printf("save.txt ���� ���� �Ϸ�\n");
		printf("1.���ڿ� �Է� : ");
		gets_s(sts, sizeof(sts));

		printf("2.���Ͽ� �� ���� : %s\n", sts);

		for (cnt = 0; sts[cnt] != NULL; cnt++)
			fputs(sts[cnt], foc);

		fclose(foc);
		printf("save.txt ���� �ݱ� ����\n");
	}
	else
		printf("save.txt ���� ���� ����\n");

	return 0;
}