#include <stdio.h>

int main(void)
{
	char sts[50];
	int cnt;
	FILE* fp;
	errno_t err;

	printf("�� Ű����� �Է��� ���ڿ��� ���Ͽ� ����\n");

	err = fopen_s(&fp, "input.txt", "w");

	if (err == 0)
	{
		printf("input.txt ���� ���� �Ϸ�! \n");
		printf("1.���ڿ� �Է� : \n");

		gets_s(sts, sizeof(sts));

		printf("2.���Ͽ� �� ���� ��� : %s\n", sts);

		for (cnt = 0; sts[cnt] != NULL; cnt++)
			fputc(sts[cnt], fp);
		fclose(fp);

		printf("input.txt ���� �ݱ� ����! \n");
	}
	else
		printf("input.txt ���� ���� ����! \n");

	return 0;
}
