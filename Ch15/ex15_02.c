#include <stdio.h>

int main(void)
{
	int n1, n2, n3;
	FILE* fp;
	errno_t err;

	err = fopen_s(&fp, "data.txt", "rt");

	if (NULL != fp)
	{
		printf("���� ���� ����\n");

		fscanf_s(fp, "%d %d %d", &n1, &n2, &n3);
		printf("%d %d %d\n", n1, n2, n3);

		fclose(fp);
	}
	else
		printf("���� ���� ����\n");

	return 0;
}