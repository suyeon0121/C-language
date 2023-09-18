#include <stdio.h>

int main(void)
{
	char good[80];
	FILE* fp;
	errno_t err;

	err = fopen_s(&fp, "Insa.txt", "rt");

	if (NULL != fp)
	{
		printf("파일 열기 성공\n");

		while (NULL != fgets(good, sizeof(good), fp))
		{
			printf("%s", good);
		}
		fclose(fp);
	}
	else
		printf("파일 열기 실패\n");

	return 0;
}