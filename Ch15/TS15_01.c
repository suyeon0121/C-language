#include <stdio.h>

int main(void)
{
	char sts[30];
	int cnt;
	FILE* fp;
	errno_t err;

	printf("�� \'test05.txt\' ������ ���� �ݴ� ���α׷�\n");

	err = fopen_s(&fp, "test05.txt", "wt");

	if (err == 0)
	{
		printf(" test05.txt ���� ���� �Ϸ�\n");
		printf(" 1.���ڿ� �Է� : ");
		gets_s(sts, sizeof(sts));

		printf(" 2. ���Ͽ� �Է��� ���ڿ��� %s\n", sts);

		for (cnt = 0; sts[cnt] != NULL; cnt++)
			fputc(sts[cnt], fp);
		fclose(fp);

		err = fopen_s(&fp, "test05.txt", "a+t");
		printf(" 3.���ڿ� �Է� : ");
		gets_s(sts, sizeof(sts));

		printf(" 4.���Ͽ� �߰��� ���ڿ��� %s\n", sts);
		printf(" 5.test05.txt ������ ��ü ������ Ȯ���ϼ���.\n");

		for (cnt = 0; sts[cnt] != NULL; cnt++)
			fputc(sts[cnt], fp);
		fclose(fp);
	}
	else
		printf(" save.txt ���� ���� ����! \n");

	return 0;
}