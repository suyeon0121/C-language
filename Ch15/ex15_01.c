#include <stdio.h>

int main(void)
{
	FILE* fp;
	errno_t err;

	err = fopen_s(&fp, "sample.txt", "wt");

	if (NULL != fp)
	{
		printf("1.���ο� ���� ���� �� ���ڿ� ���� �Ϸ�\n");
		fprintf(fp, "Happy Day\n");
		printf("2.������ Ž���⿡�� sample.txt ���� ���� Ȯ��\n");
		fclose(fp);
	}
	else
		printf("���� ���� ����\n");

	return 0;
}