#include <stdio.h>

int main(void)
{
	int num;
	FILE* fp;
	errno_t err;

	err = fopen_s(&fp, "data.txt", "rt");

	if (NULL != fp)
	{
		printf("���� ���� ����\n");

		while (EOF != fscanf_s(fp, "%d", &num))
		{
			printf("%d\n", num);
		}
		fclose(fp);
	}
	else
		printf("���� ���� ����\n");

	return 0;
}