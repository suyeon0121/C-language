#include <stdio.h>

int main(void)
{
	char good[80];
	FILE* fp;
	errno_t err;

	err = fopen_s(&fp, "Insa.txt", "rt");

	if (NULL != fp)
	{
		printf("���� ���� ����\n");

		while (NULL != fgets(good, sizeof(good), fp))
		{
			printf("%s", good);
		}
		fclose(fp);
	}
	else
		printf("���� ���� ����\n");

	return 0;
}